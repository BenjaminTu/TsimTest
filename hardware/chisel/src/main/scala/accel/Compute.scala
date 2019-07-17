/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

package accel

import chisel3._
import chisel3.util._
import vta.dpi._

/** Compute
  *
  * Add-by-one procedure:
  *
  * 1. Wait for launch to be asserted
  * 2. Issue a read request for 8-byte value at inp_baddr address
  * 3. Wait for the value
  * 4. Issue a write request for 8-byte value at out_baddr address
  * 5. Increment read-address and write-address for next value
  * 6. Check if counter (cnt) is equal to length to assert finish,
  *    otherwise go to step 2.
  */
class Compute(implicit config: AccelConfig) extends Module {
  val io = IO(new Bundle {
    val launch = Input(Bool())
    val finish = Output(Bool())
    val ecnt = Vec(config.nECnt, ValidIO(UInt(config.regBits.W)))
    val vals = Input(Vec(config.nVals, UInt(config.regBits.W)))
    val ptrs = Input(Vec(config.nPtrs, UInt(config.ptrBits.W)))
    val mem = new VTAMemDPIMaster
  })
  val sIdle :: sReadAReq :: sReadAData :: sReadBReq :: sReadBData :: sWriteReq :: sWriteData :: Nil = Enum(7)
  val state = RegInit(sIdle)
  val shift = io.vals(0)(7,0) // limit to 8 bits
  val length = io.vals(1)
  val rstAccum = io.vals(2)
  val startDot = io.vals(3)
  val cycles = RegInit(0.U(config.regBits.W))
  val reg1 = Reg(Vec(8, UInt(config.regBits.W)))
  val reg2 = Reg(Vec(8, UInt(config.regBits.W)))
  val cnt = Reg(UInt(config.regBits.W))
  val raddr1 = Reg(UInt(config.ptrBits.W))
  val raddr2 = Reg(UInt(config.ptrBits.W))
  val waddr = Reg(UInt(config.ptrBits.W))

  // printf("shift: %d, \n", shift)
  // printf("length: %d, \n", length)
  // printf("rstAccum: %d, \n", rstAccum)
  // printf("startDot: %d, \n", startDot)
  // printf("\n\n\n\n\n\n")

  switch (state) {
    is (sIdle) {
      when (io.launch) {
        state := sReadAReq
      }
    }
    // Read
    is (sReadAReq) {
      state := sReadAData
    }
    is (sReadAData) {
      when (io.mem.rd.valid) {
        state := sReadBReq
      }
    }
    is (sReadBReq) {
      state := sReadBData
    }
    is (sReadBData) {
      when (io.mem.rd.valid) {
        state := sWriteReq
      }
    }
    // Write
    is (sWriteReq) {
      state := sWriteData
    }
    is (sWriteData) {
      when (cnt === (length - 1.U)) {
        state := sIdle
      } .otherwise {
        state := sReadAReq
      }
    }
  }

  val last = state === sWriteData && cnt === (length - 1.U)

  // cycle counter
  when (state === sIdle) {
    cycles := 0.U
  } .otherwise {
    cycles := cycles + 1.U
  }

  io.ecnt(0).valid := last
  io.ecnt(0).bits := cycles

  // calculate next address
  when (state === sIdle) {
    raddr1 := io.ptrs(0)
    raddr2 := io.ptrs(1)
    waddr := io.ptrs(2)
  } .elsewhen (state === sWriteData) { // increment input array by 8-bytes
    raddr1 := raddr1 + 8.U
    raddr2 := raddr2 + 8.U
    // waddr := waddr
  }

  // create request
  io.mem.req.valid := state === sReadAReq | state === sReadBReq | state === sWriteReq
  io.mem.req.opcode := state === sWriteReq
  io.mem.req.len := 0.U // one-word-per-request
  io.mem.req.addr := Mux(state === sReadAReq | state === sReadBReq, Mux(state === sReadAReq, raddr1, raddr2), waddr)

  // read
  when (state === sReadAData && io.mem.rd.valid) {
    for(i <- 0 until 8) {
      reg1(i) := io.mem.rd.bits(i*8+7, i*8)
      printf("slice inputs1: %d \n", io.mem.rd.bits(i*8+7, i*8))
    }
  }

  when (state === sReadBData && io.mem.rd.valid) {
    for(i <- 0 until 8) {
      reg2(i) := io.mem.rd.bits(i*8+7, i*8)
      printf("slice inputs2: %d\n\n", io.mem.rd.bits(i*8+7, i*8))
    }
  }

  io.mem.rd.ready := state === sReadAData | state === sReadBData

  // TODO: databits? 
  val dot = Module(new Dot(8, 8))
  val overallAccum = Module(new Accumulator(63))
  val shiftReg = RegNext(dot.io.res << shift)
  val validReg = RegNext(dot.io.valid)

  dot.io.start := state === sWriteReq && last
  dot.io.arrA := reg1
  dot.io.arrB := reg2
  overallAccum.io.rst := rstAccum
  overallAccum.io.valid := validReg // last element has been processed
  overallAccum.io.in := shiftReg 

  // write
  io.mem.wr.valid := overallAccum.io.ready 
  io.mem.wr.bits := overallAccum.io.sum

  // count read/write
  when (state === sIdle) {
    cnt := 0.U
  } .elsewhen (state === sWriteData) {
    cnt := cnt + 1.U
  }

  // done when read/write are equal to length
  //val ready = RegNext(overallAccum.io.ready)
  io.finish := overallAccum.io.ready // data has been added
}

class Dot(dataBits: Int = 8, vectorLength: Int = 1) extends Module {
  private val outBits = 2*dataBits + vectorLength-1
  val io = IO(new Bundle {
    val start = Input(Bool())
    val arrA = Input(Vec(vectorLength, UInt(dataBits.W)))
    val arrB = Input(Vec(vectorLength, UInt(dataBits.W)))
    val valid = Output(Bool())
    val res = Output(UInt(outBits.W))
  })  
  
  val product = RegInit(Vec(Seq.fill(vectorLength)(0.U((2*dataBits).W))))
  val accum = RegInit(Vec(Seq.fill(vectorLength)(0.U(outBits.W))))
  val cnt = RegInit(0.U((log2Floor(vectorLength)+1).W))
  when (io.start) {
    cnt := 0.U 
  } .otherwise {
    accum(0) := product(0)
    product(0) := io.arrA(0) * io.arrB(0)
    for (i <- 1 until vectorLength) {
      product(i) := io.arrA(i) * io.arrB(i)
      accum(i) := accum(i-1) +& product(i)
      // printf("\np(%d): %d, \n", i.U,  product(i))
      // printf("\na(%d): %d, \n", i.U,  accum(i))
    }   
    cnt := cnt + 1.U 
    // printf("\ncnt: %d, valid: %d\n", cnt, io.valid)
  }
  //printf("\n\n")
  io.res := accum(vectorLength - 1)
  io.valid := cnt === (vectorLength).U
}

class Accumulator(dataBits: Int = 8) extends Module {
  val io = IO(new Bundle {
    val rst = Input(Bool())
    val valid = Input(Bool())
    val ready = Output(Bool())
    val in = Input(UInt(dataBits.W))
    val sum = Output(UInt((dataBits+1).W))
  })

  val reg = RegInit(0.U((dataBits+1).W))
  val ready = RegNext(io.valid)
  when (io.rst) {
    reg := 0.U
  } .elsewhen (io.valid) {
    reg := reg +& io.in
    printf("slice sum: %d \n", reg +& io.in)
    // printf("ready %d:\n", io.ready)
  } 

  // printf("leave: %d\n", RegNext(io.valid))

  io.ready := ready
  io.sum := reg
  // printf("io.datavalid: %d \n", io.valid)
  // printf("io.accumin: %d \n", io.in)
  // printf("io.sum: %d \n", io.sum)
}

