// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestAccel__Syms.h"


//======================

void VTestAccel::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VTestAccel::traceInit, &VTestAccel::traceFull, &VTestAccel::traceChg, this);
}
void VTestAccel::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTestAccel* t=(VTestAccel*)userthis;
    VTestAccel__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTestAccel::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTestAccel* t=(VTestAccel*)userthis;
    VTestAccel__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VTestAccel::traceInitThis(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTestAccel::traceFullThis(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTestAccel::traceInitThis__1(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+42,"clock",-1);
	vcdp->declBit(c+43,"reset",-1);
	vcdp->declBit(c+44,"sim_clock",-1);
	vcdp->declBit(c+45,"sim_wait",-1);
	vcdp->declBit(c+42,"TestAccel clock",-1);
	vcdp->declBit(c+43,"TestAccel reset",-1);
	vcdp->declBit(c+44,"TestAccel sim_clock",-1);
	vcdp->declBit(c+45,"TestAccel sim_wait",-1);
	vcdp->declBit(c+42,"TestAccel sim_shell_clock",-1);
	vcdp->declBit(c+43,"TestAccel sim_shell_reset",-1);
	vcdp->declBit(c+34,"TestAccel sim_shell_host_req_valid",-1);
	vcdp->declBit(c+35,"TestAccel sim_shell_host_req_opcode",-1);
	vcdp->declBus(c+36,"TestAccel sim_shell_host_req_addr",-1,7,0);
	vcdp->declBus(c+37,"TestAccel sim_shell_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell_host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel sim_shell_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel sim_shell_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell_mem_rd_ready",-1);
	vcdp->declBit(c+38,"TestAccel sim_shell_mem_rd_valid",-1);
	vcdp->declQuad(c+39,"TestAccel sim_shell_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+44,"TestAccel sim_shell_sim_clock",-1);
	vcdp->declBit(c+41,"TestAccel sim_shell_sim_wait",-1);
	vcdp->declBit(c+42,"TestAccel vta_accel_clock",-1);
	vcdp->declBit(c+43,"TestAccel vta_accel_reset",-1);
	vcdp->declBit(c+34,"TestAccel vta_accel_io_host_req_valid",-1);
	vcdp->declBit(c+35,"TestAccel vta_accel_io_host_req_opcode",-1);
	vcdp->declBus(c+36,"TestAccel vta_accel_io_host_req_addr",-1,7,0);
	vcdp->declBus(c+37,"TestAccel vta_accel_io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel_io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel_io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel_io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel vta_accel_io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel_io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel_io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel_io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel_io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel_io_mem_rd_ready",-1);
	vcdp->declBit(c+38,"TestAccel vta_accel_io_mem_rd_valid",-1);
	vcdp->declQuad(c+39,"TestAccel vta_accel_io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+42,"TestAccel sim_shell clock",-1);
	vcdp->declBit(c+43,"TestAccel sim_shell reset",-1);
	vcdp->declBit(c+34,"TestAccel sim_shell host_req_valid",-1);
	vcdp->declBit(c+35,"TestAccel sim_shell host_req_opcode",-1);
	vcdp->declBus(c+36,"TestAccel sim_shell host_req_addr",-1,7,0);
	vcdp->declBus(c+37,"TestAccel sim_shell host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel sim_shell mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel sim_shell mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell mem_rd_ready",-1);
	vcdp->declBit(c+38,"TestAccel sim_shell mem_rd_valid",-1);
	vcdp->declQuad(c+39,"TestAccel sim_shell mem_rd_bits",-1,63,0);
	vcdp->declBit(c+44,"TestAccel sim_shell sim_clock",-1);
	vcdp->declBit(c+41,"TestAccel sim_shell sim_wait",-1);
	vcdp->declBit(c+41,"TestAccel sim_shell mod_sim_dpi_wait",-1);
	vcdp->declBit(c+43,"TestAccel sim_shell mod_sim_reset",-1);
	vcdp->declBit(c+44,"TestAccel sim_shell mod_sim_clock",-1);
	vcdp->declBit(c+34,"TestAccel sim_shell mod_host_dpi_req_valid",-1);
	vcdp->declBit(c+35,"TestAccel sim_shell mod_host_dpi_req_opcode",-1);
	vcdp->declBus(c+36,"TestAccel sim_shell mod_host_dpi_req_addr",-1,7,0);
	vcdp->declBus(c+37,"TestAccel sim_shell mod_host_dpi_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell mod_host_dpi_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell mod_host_dpi_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell mod_host_dpi_resp_bits",-1,31,0);
	vcdp->declBit(c+43,"TestAccel sim_shell mod_host_reset",-1);
	vcdp->declBit(c+42,"TestAccel sim_shell mod_host_clock",-1);
	vcdp->declBit(c+4,"TestAccel sim_shell mod_mem_dpi_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell mod_mem_dpi_req_opcode",-1);
	vcdp->declBus(c+46,"TestAccel sim_shell mod_mem_dpi_req_len",-1,7,0);
	vcdp->declQuad(c+6,"TestAccel sim_shell mod_mem_dpi_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell mod_mem_dpi_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell mod_mem_dpi_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell mod_mem_dpi_rd_ready",-1);
	vcdp->declBit(c+38,"TestAccel sim_shell mod_mem_dpi_rd_valid",-1);
	vcdp->declQuad(c+39,"TestAccel sim_shell mod_mem_dpi_rd_bits",-1,63,0);
	vcdp->declBit(c+43,"TestAccel sim_shell mod_mem_reset",-1);
	vcdp->declBit(c+42,"TestAccel sim_shell mod_mem_clock",-1);
	vcdp->declBit(c+44,"TestAccel sim_shell mod_sim clock",-1);
	vcdp->declBit(c+43,"TestAccel sim_shell mod_sim reset",-1);
	vcdp->declBit(c+41,"TestAccel sim_shell mod_sim dpi_wait",-1);
	// Tracing: TestAccel sim_shell mod_sim __reset // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:36
	// Tracing: TestAccel sim_shell mod_sim __wait // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:37
	// Tracing: TestAccel sim_shell mod_sim __exit // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:38
	vcdp->declBit(c+41,"TestAccel sim_shell mod_sim wait_reg",-1);
	vcdp->declBus(c+47,"TestAccel sim_shell mod_host ADDR_BITS",-1,31,0);
	vcdp->declBus(c+48,"TestAccel sim_shell mod_host DATA_BITS",-1,31,0);
	vcdp->declBit(c+42,"TestAccel sim_shell mod_host clock",-1);
	vcdp->declBit(c+43,"TestAccel sim_shell mod_host reset",-1);
	vcdp->declBit(c+34,"TestAccel sim_shell mod_host dpi_req_valid",-1);
	vcdp->declBit(c+35,"TestAccel sim_shell mod_host dpi_req_opcode",-1);
	vcdp->declBus(c+36,"TestAccel sim_shell mod_host dpi_req_addr",-1,7,0);
	vcdp->declBus(c+37,"TestAccel sim_shell mod_host dpi_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell mod_host dpi_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell mod_host dpi_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell mod_host dpi_resp_bits",-1,31,0);
	// Tracing: TestAccel sim_shell mod_host __reset // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:51
	// Tracing: TestAccel sim_shell mod_host __req_valid // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:52
	// Tracing: TestAccel sim_shell mod_host __req_opcode // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:53
	// Tracing: TestAccel sim_shell mod_host __req_addr // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:54
	// Tracing: TestAccel sim_shell mod_host __req_value // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:55
	// Tracing: TestAccel sim_shell mod_host __req_deq // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:56
	// Tracing: TestAccel sim_shell mod_host __resp_valid // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:57
	// Tracing: TestAccel sim_shell mod_host __resp_bits // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:58
	vcdp->declBus(c+47,"TestAccel sim_shell mod_mem LEN_BITS",-1,31,0);
	vcdp->declBus(c+49,"TestAccel sim_shell mod_mem ADDR_BITS",-1,31,0);
	vcdp->declBus(c+49,"TestAccel sim_shell mod_mem DATA_BITS",-1,31,0);
	vcdp->declBit(c+42,"TestAccel sim_shell mod_mem clock",-1);
	vcdp->declBit(c+43,"TestAccel sim_shell mod_mem reset",-1);
	vcdp->declBit(c+4,"TestAccel sim_shell mod_mem dpi_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell mod_mem dpi_req_opcode",-1);
	vcdp->declBus(c+46,"TestAccel sim_shell mod_mem dpi_req_len",-1,7,0);
	vcdp->declQuad(c+6,"TestAccel sim_shell mod_mem dpi_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell mod_mem dpi_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell mod_mem dpi_wr_bits",-1,63,0);
	vcdp->declBit(c+38,"TestAccel sim_shell mod_mem dpi_rd_valid",-1);
	vcdp->declQuad(c+39,"TestAccel sim_shell mod_mem dpi_rd_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell mod_mem dpi_rd_ready",-1);
	// Tracing: TestAccel sim_shell mod_mem __reset // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:57
	// Tracing: TestAccel sim_shell mod_mem __req_valid // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:58
	// Tracing: TestAccel sim_shell mod_mem __req_opcode // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:59
	// Tracing: TestAccel sim_shell mod_mem __req_len // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:60
	// Tracing: TestAccel sim_shell mod_mem __req_addr // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:61
	// Tracing: TestAccel sim_shell mod_mem __wr_valid // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:62
	// Tracing: TestAccel sim_shell mod_mem __wr_value // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:63
	// Tracing: TestAccel sim_shell mod_mem __rd_valid // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:64
	// Tracing: TestAccel sim_shell mod_mem __rd_value // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:65
	// Tracing: TestAccel sim_shell mod_mem __rd_ready // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:66
	vcdp->declBit(c+42,"TestAccel vta_accel clock",-1);
	vcdp->declBit(c+43,"TestAccel vta_accel reset",-1);
	vcdp->declBit(c+34,"TestAccel vta_accel io_host_req_valid",-1);
	vcdp->declBit(c+35,"TestAccel vta_accel io_host_req_opcode",-1);
	vcdp->declBus(c+36,"TestAccel vta_accel io_host_req_addr",-1,7,0);
	vcdp->declBus(c+37,"TestAccel vta_accel io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel vta_accel io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel io_mem_rd_ready",-1);
	vcdp->declBit(c+38,"TestAccel vta_accel io_mem_rd_valid",-1);
	vcdp->declQuad(c+39,"TestAccel vta_accel io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+42,"TestAccel vta_accel rf_clock",-1);
	vcdp->declBit(c+43,"TestAccel vta_accel rf_reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel rf_io_launch",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel rf_io_finish",-1);
	vcdp->declBit(c+14,"TestAccel vta_accel rf_io_ecnt_0_valid",-1);
	vcdp->declBus(c+15,"TestAccel vta_accel rf_io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel rf_io_vals_0",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel rf_io_vals_1",-1,31,0);
	vcdp->declQuad(c+18,"TestAccel vta_accel rf_io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel rf_io_ptrs_1",-1,63,0);
	vcdp->declBit(c+34,"TestAccel vta_accel rf_io_host_req_valid",-1);
	vcdp->declBit(c+35,"TestAccel vta_accel rf_io_host_req_opcode",-1);
	vcdp->declBus(c+36,"TestAccel vta_accel rf_io_host_req_addr",-1,7,0);
	vcdp->declBus(c+37,"TestAccel vta_accel rf_io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel rf_io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel rf_io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel rf_io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+42,"TestAccel vta_accel ce_clock",-1);
	vcdp->declBit(c+43,"TestAccel vta_accel ce_reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel ce_io_launch",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel ce_io_finish",-1);
	vcdp->declBit(c+14,"TestAccel vta_accel ce_io_ecnt_0_valid",-1);
	vcdp->declBus(c+15,"TestAccel vta_accel ce_io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel ce_io_vals_0",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel ce_io_vals_1",-1,31,0);
	vcdp->declQuad(c+18,"TestAccel vta_accel ce_io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel ce_io_ptrs_1",-1,63,0);
	vcdp->declBit(c+4,"TestAccel vta_accel ce_io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel ce_io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel ce_io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel ce_io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce_io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel ce_io_mem_rd_ready",-1);
	vcdp->declBit(c+38,"TestAccel vta_accel ce_io_mem_rd_valid",-1);
	vcdp->declQuad(c+39,"TestAccel vta_accel ce_io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+42,"TestAccel vta_accel rf clock",-1);
	vcdp->declBit(c+43,"TestAccel vta_accel rf reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel rf io_launch",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel rf io_finish",-1);
	vcdp->declBit(c+14,"TestAccel vta_accel rf io_ecnt_0_valid",-1);
	vcdp->declBus(c+15,"TestAccel vta_accel rf io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel rf io_vals_0",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel rf io_vals_1",-1,31,0);
	vcdp->declQuad(c+18,"TestAccel vta_accel rf io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel rf io_ptrs_1",-1,63,0);
	vcdp->declBit(c+34,"TestAccel vta_accel rf io_host_req_valid",-1);
	vcdp->declBit(c+35,"TestAccel vta_accel rf io_host_req_opcode",-1);
	vcdp->declBus(c+36,"TestAccel vta_accel rf io_host_req_addr",-1,7,0);
	vcdp->declBus(c+37,"TestAccel vta_accel rf io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel rf io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel rf io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel rf io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+2,"TestAccel vta_accel rf state",-1);
	// Tracing: TestAccel vta_accel rf _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:118
	// Tracing: TestAccel vta_accel rf _T_68 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:119
	// Tracing: TestAccel vta_accel rf _T_70 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:120
	// Tracing: TestAccel vta_accel rf _T_71 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:121
	// Tracing: TestAccel vta_accel rf _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:122
	// Tracing: TestAccel vta_accel rf _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:123
	// Tracing: TestAccel vta_accel rf _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:124
	// Tracing: TestAccel vta_accel rf _T_73 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:125
	// Tracing: TestAccel vta_accel rf _T_74 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:126
	vcdp->declBus(c+22,"TestAccel vta_accel rf reg_0",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:128
	vcdp->declBus(c+23,"TestAccel vta_accel rf reg_1",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:130
	vcdp->declBus(c+16,"TestAccel vta_accel rf reg_2",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:132
	vcdp->declBus(c+17,"TestAccel vta_accel rf reg_3",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:134
	vcdp->declBus(c+24,"TestAccel vta_accel rf reg_4",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:136
	vcdp->declBus(c+25,"TestAccel vta_accel rf reg_5",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:138
	vcdp->declBus(c+26,"TestAccel vta_accel rf reg_6",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:140
	vcdp->declBus(c+27,"TestAccel vta_accel rf reg_7",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:142
	// Tracing: TestAccel vta_accel rf _T_126 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:143
	// Tracing: TestAccel vta_accel rf _T_128 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:144
	// Tracing: TestAccel vta_accel rf _T_129 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:145
	// Tracing: TestAccel vta_accel rf _GEN_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:146
	// Tracing: TestAccel vta_accel rf _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:147
	// Tracing: TestAccel vta_accel rf _T_134 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:148
	// Tracing: TestAccel vta_accel rf _T_135 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:149
	// Tracing: TestAccel vta_accel rf _GEN_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:150
	// Tracing: TestAccel vta_accel rf _GEN_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:151
	// Tracing: TestAccel vta_accel rf _T_140 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:152
	// Tracing: TestAccel vta_accel rf _T_141 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:153
	// Tracing: TestAccel vta_accel rf _GEN_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:154
	// Tracing: TestAccel vta_accel rf _T_146 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:155
	// Tracing: TestAccel vta_accel rf _T_147 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:156
	// Tracing: TestAccel vta_accel rf _GEN_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:157
	// Tracing: TestAccel vta_accel rf _T_152 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:158
	// Tracing: TestAccel vta_accel rf _T_153 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:159
	// Tracing: TestAccel vta_accel rf _GEN_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:160
	// Tracing: TestAccel vta_accel rf _T_158 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:161
	// Tracing: TestAccel vta_accel rf _T_159 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:162
	// Tracing: TestAccel vta_accel rf _GEN_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:163
	// Tracing: TestAccel vta_accel rf _T_164 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:164
	// Tracing: TestAccel vta_accel rf _T_165 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:165
	// Tracing: TestAccel vta_accel rf _GEN_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:166
	// Tracing: TestAccel vta_accel rf _T_170 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:167
	// Tracing: TestAccel vta_accel rf _T_171 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:168
	// Tracing: TestAccel vta_accel rf _GEN_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:169
	vcdp->declBus(c+3,"TestAccel vta_accel rf rdata",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:171
	// Tracing: TestAccel vta_accel rf _T_181 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:172
	// Tracing: TestAccel vta_accel rf _T_184 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:173
	// Tracing: TestAccel vta_accel rf _T_186 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:174
	// Tracing: TestAccel vta_accel rf _T_188 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:175
	// Tracing: TestAccel vta_accel rf _T_190 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:176
	// Tracing: TestAccel vta_accel rf _T_192 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:177
	// Tracing: TestAccel vta_accel rf _T_194 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:178
	// Tracing: TestAccel vta_accel rf _T_196 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:179
	// Tracing: TestAccel vta_accel rf _T_198 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:180
	// Tracing: TestAccel vta_accel rf _GEN_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:181
	vcdp->declBus(c+50,"TestAccel vta_accel rf initvar",-1,31,0);
	vcdp->declBit(c+42,"TestAccel vta_accel ce clock",-1);
	vcdp->declBit(c+43,"TestAccel vta_accel ce reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel ce io_launch",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel ce io_finish",-1);
	vcdp->declBit(c+14,"TestAccel vta_accel ce io_ecnt_0_valid",-1);
	vcdp->declBus(c+15,"TestAccel vta_accel ce io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel ce io_vals_0",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel ce io_vals_1",-1,31,0);
	vcdp->declQuad(c+18,"TestAccel vta_accel ce io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel ce io_ptrs_1",-1,63,0);
	vcdp->declBit(c+4,"TestAccel vta_accel ce io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel ce io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel ce io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel ce io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel ce io_mem_rd_ready",-1);
	vcdp->declBit(c+38,"TestAccel vta_accel ce io_mem_rd_valid",-1);
	vcdp->declQuad(c+39,"TestAccel vta_accel ce io_mem_rd_bits",-1,63,0);
	vcdp->declBus(c+28,"TestAccel vta_accel ce state",-1,2,0);
	// Tracing: TestAccel vta_accel ce _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:441
	vcdp->declBus(c+15,"TestAccel vta_accel ce cycles",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:443
	vcdp->declQuad(c+9,"TestAccel vta_accel ce reg$",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:445
	vcdp->declBus(c+29,"TestAccel vta_accel ce cnt",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:447
	vcdp->declQuad(c+30,"TestAccel vta_accel ce raddr",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:449
	vcdp->declQuad(c+32,"TestAccel vta_accel ce waddr",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:451
	// Tracing: TestAccel vta_accel ce _T_80 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:452
	// Tracing: TestAccel vta_accel ce _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:453
	// Tracing: TestAccel vta_accel ce _T_81 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:454
	// Tracing: TestAccel vta_accel ce _T_82 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:455
	// Tracing: TestAccel vta_accel ce _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:456
	// Tracing: TestAccel vta_accel ce _T_83 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:457
	// Tracing: TestAccel vta_accel ce _T_84 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:458
	// Tracing: TestAccel vta_accel ce _T_86 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:459
	// Tracing: TestAccel vta_accel ce _T_87 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:460
	// Tracing: TestAccel vta_accel ce _T_88 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:461
	// Tracing: TestAccel vta_accel ce _T_89 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:462
	// Tracing: TestAccel vta_accel ce _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:463
	// Tracing: TestAccel vta_accel ce _GEN_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:464
	// Tracing: TestAccel vta_accel ce _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:465
	// Tracing: TestAccel vta_accel ce _GEN_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:466
	// Tracing: TestAccel vta_accel ce _GEN_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:467
	// Tracing: TestAccel vta_accel ce _GEN_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:468
	// Tracing: TestAccel vta_accel ce _T_90 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:469
	// Tracing: TestAccel vta_accel ce _T_96 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:470
	// Tracing: TestAccel vta_accel ce _T_99 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:471
	// Tracing: TestAccel vta_accel ce _T_100 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:472
	// Tracing: TestAccel vta_accel ce _GEN_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:473
	// Tracing: TestAccel vta_accel ce _T_104 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:474
	// Tracing: TestAccel vta_accel ce _T_105 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:475
	// Tracing: TestAccel vta_accel ce _T_107 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:476
	// Tracing: TestAccel vta_accel ce _T_108 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:477
	// Tracing: TestAccel vta_accel ce _GEN_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:478
	// Tracing: TestAccel vta_accel ce _GEN_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:479
	// Tracing: TestAccel vta_accel ce _T_109 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:480
	// Tracing: TestAccel vta_accel ce _T_110 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:481
	// Tracing: TestAccel vta_accel ce _T_116 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:482
	// Tracing: TestAccel vta_accel ce _T_117 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:483
	// Tracing: TestAccel vta_accel ce _GEN_16 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:484
	// Tracing: TestAccel vta_accel ce _T_118 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:485
	// Tracing: TestAccel vta_accel ce _T_119 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:486
	// Tracing: TestAccel vta_accel ce _T_126 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:487
	// Tracing: TestAccel vta_accel ce _T_127 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:488
	// Tracing: TestAccel vta_accel ce _GEN_14 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:489
	vcdp->declBus(c+51,"TestAccel vta_accel ce initvar",-1,31,0);
    }
}

void VTestAccel::traceFullThis__1(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,(((~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)) 
			    & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid))));
	vcdp->fullBit(c+2,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state));
	vcdp->fullBus(c+3,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata),32);
	vcdp->fullBit(c+4,(((1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
			    | (3U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)))));
	vcdp->fullBit(c+5,((3U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vcdp->fullQuad(c+6,(((1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
			      ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr
			      : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr)),64);
	vcdp->fullBit(c+8,((4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vcdp->fullQuad(c+9,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg__024),64);
	vcdp->fullBit(c+11,((2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vcdp->fullBit(c+12,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0)));
	vcdp->fullBit(c+13,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_finish));
	vcdp->fullBit(c+14,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid));
	vcdp->fullBus(c+15,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles),32);
	vcdp->fullBus(c+16,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2),32);
	vcdp->fullBus(c+17,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3),32);
	vcdp->fullQuad(c+18,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5)) 
			       << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)))),64);
	vcdp->fullQuad(c+20,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7)) 
			       << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6)))),64);
	vcdp->fullBus(c+22,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0),32);
	vcdp->fullBus(c+23,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1),32);
	vcdp->fullBus(c+24,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4),32);
	vcdp->fullBus(c+25,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5),32);
	vcdp->fullBus(c+26,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6),32);
	vcdp->fullBus(c+27,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7),32);
	vcdp->fullBus(c+28,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state),3);
	vcdp->fullBus(c+29,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt),32);
	vcdp->fullQuad(c+30,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr),64);
	vcdp->fullQuad(c+32,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr),64);
	vcdp->fullBit(c+34,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid));
	vcdp->fullBit(c+35,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode));
	vcdp->fullBus(c+36,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr),8);
	vcdp->fullBus(c+37,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value),32);
	vcdp->fullBit(c+38,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid));
	vcdp->fullQuad(c+39,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits),64);
	vcdp->fullBit(c+41,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg));
	vcdp->fullBit(c+42,(vlTOPp->clock));
	vcdp->fullBit(c+43,(vlTOPp->reset));
	vcdp->fullBit(c+44,(vlTOPp->sim_clock));
	vcdp->fullBit(c+45,(vlTOPp->sim_wait));
	vcdp->fullBus(c+46,(0U),8);
	vcdp->fullBus(c+47,(8U),32);
	vcdp->fullBus(c+48,(0x20U),32);
	vcdp->fullBus(c+49,(0x40U),32);
	vcdp->fullBus(c+50,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__initvar),32);
	vcdp->fullBus(c+51,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__initvar),32);
    }
}
