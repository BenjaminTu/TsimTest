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
	vcdp->declBit(c+64,"clock",-1);
	vcdp->declBit(c+65,"reset",-1);
	vcdp->declBit(c+66,"sim_clock",-1);
	vcdp->declBit(c+67,"sim_wait",-1);
	vcdp->declBit(c+64,"TestAccel clock",-1);
	vcdp->declBit(c+65,"TestAccel reset",-1);
	vcdp->declBit(c+66,"TestAccel sim_clock",-1);
	vcdp->declBit(c+67,"TestAccel sim_wait",-1);
	vcdp->declBit(c+64,"TestAccel sim_shell_clock",-1);
	vcdp->declBit(c+65,"TestAccel sim_shell_reset",-1);
	vcdp->declBit(c+56,"TestAccel sim_shell_host_req_valid",-1);
	vcdp->declBit(c+57,"TestAccel sim_shell_host_req_opcode",-1);
	vcdp->declBus(c+58,"TestAccel sim_shell_host_req_addr",-1,7,0);
	vcdp->declBus(c+59,"TestAccel sim_shell_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell_host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel sim_shell_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel sim_shell_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell_mem_rd_ready",-1);
	vcdp->declBit(c+60,"TestAccel sim_shell_mem_rd_valid",-1);
	vcdp->declQuad(c+61,"TestAccel sim_shell_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+66,"TestAccel sim_shell_sim_clock",-1);
	vcdp->declBit(c+63,"TestAccel sim_shell_sim_wait",-1);
	vcdp->declBit(c+64,"TestAccel vta_accel_clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel_reset",-1);
	vcdp->declBit(c+56,"TestAccel vta_accel_io_host_req_valid",-1);
	vcdp->declBit(c+57,"TestAccel vta_accel_io_host_req_opcode",-1);
	vcdp->declBus(c+58,"TestAccel vta_accel_io_host_req_addr",-1,7,0);
	vcdp->declBus(c+59,"TestAccel vta_accel_io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel_io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel_io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel_io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel vta_accel_io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel_io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel_io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel_io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel_io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel_io_mem_rd_ready",-1);
	vcdp->declBit(c+60,"TestAccel vta_accel_io_mem_rd_valid",-1);
	vcdp->declQuad(c+61,"TestAccel vta_accel_io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+64,"TestAccel sim_shell clock",-1);
	vcdp->declBit(c+65,"TestAccel sim_shell reset",-1);
	vcdp->declBit(c+56,"TestAccel sim_shell host_req_valid",-1);
	vcdp->declBit(c+57,"TestAccel sim_shell host_req_opcode",-1);
	vcdp->declBus(c+58,"TestAccel sim_shell host_req_addr",-1,7,0);
	vcdp->declBus(c+59,"TestAccel sim_shell host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel sim_shell mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel sim_shell mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell mem_rd_ready",-1);
	vcdp->declBit(c+60,"TestAccel sim_shell mem_rd_valid",-1);
	vcdp->declQuad(c+61,"TestAccel sim_shell mem_rd_bits",-1,63,0);
	vcdp->declBit(c+66,"TestAccel sim_shell sim_clock",-1);
	vcdp->declBit(c+63,"TestAccel sim_shell sim_wait",-1);
	vcdp->declBit(c+63,"TestAccel sim_shell mod_sim_dpi_wait",-1);
	vcdp->declBit(c+65,"TestAccel sim_shell mod_sim_reset",-1);
	vcdp->declBit(c+66,"TestAccel sim_shell mod_sim_clock",-1);
	vcdp->declBit(c+56,"TestAccel sim_shell mod_host_dpi_req_valid",-1);
	vcdp->declBit(c+57,"TestAccel sim_shell mod_host_dpi_req_opcode",-1);
	vcdp->declBus(c+58,"TestAccel sim_shell mod_host_dpi_req_addr",-1,7,0);
	vcdp->declBus(c+59,"TestAccel sim_shell mod_host_dpi_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell mod_host_dpi_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell mod_host_dpi_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell mod_host_dpi_resp_bits",-1,31,0);
	vcdp->declBit(c+65,"TestAccel sim_shell mod_host_reset",-1);
	vcdp->declBit(c+64,"TestAccel sim_shell mod_host_clock",-1);
	vcdp->declBit(c+4,"TestAccel sim_shell mod_mem_dpi_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell mod_mem_dpi_req_opcode",-1);
	vcdp->declBus(c+68,"TestAccel sim_shell mod_mem_dpi_req_len",-1,7,0);
	vcdp->declQuad(c+6,"TestAccel sim_shell mod_mem_dpi_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell mod_mem_dpi_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell mod_mem_dpi_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell mod_mem_dpi_rd_ready",-1);
	vcdp->declBit(c+60,"TestAccel sim_shell mod_mem_dpi_rd_valid",-1);
	vcdp->declQuad(c+61,"TestAccel sim_shell mod_mem_dpi_rd_bits",-1,63,0);
	vcdp->declBit(c+65,"TestAccel sim_shell mod_mem_reset",-1);
	vcdp->declBit(c+64,"TestAccel sim_shell mod_mem_clock",-1);
	vcdp->declBit(c+66,"TestAccel sim_shell mod_sim clock",-1);
	vcdp->declBit(c+65,"TestAccel sim_shell mod_sim reset",-1);
	vcdp->declBit(c+63,"TestAccel sim_shell mod_sim dpi_wait",-1);
	// Tracing: TestAccel sim_shell mod_sim __reset // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:36
	// Tracing: TestAccel sim_shell mod_sim __wait // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:37
	// Tracing: TestAccel sim_shell mod_sim __exit // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:38
	vcdp->declBit(c+63,"TestAccel sim_shell mod_sim wait_reg",-1);
	vcdp->declBus(c+69,"TestAccel sim_shell mod_host ADDR_BITS",-1,31,0);
	vcdp->declBus(c+70,"TestAccel sim_shell mod_host DATA_BITS",-1,31,0);
	vcdp->declBit(c+64,"TestAccel sim_shell mod_host clock",-1);
	vcdp->declBit(c+65,"TestAccel sim_shell mod_host reset",-1);
	vcdp->declBit(c+56,"TestAccel sim_shell mod_host dpi_req_valid",-1);
	vcdp->declBit(c+57,"TestAccel sim_shell mod_host dpi_req_opcode",-1);
	vcdp->declBus(c+58,"TestAccel sim_shell mod_host dpi_req_addr",-1,7,0);
	vcdp->declBus(c+59,"TestAccel sim_shell mod_host dpi_req_value",-1,31,0);
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
	vcdp->declBus(c+69,"TestAccel sim_shell mod_mem LEN_BITS",-1,31,0);
	vcdp->declBus(c+71,"TestAccel sim_shell mod_mem ADDR_BITS",-1,31,0);
	vcdp->declBus(c+71,"TestAccel sim_shell mod_mem DATA_BITS",-1,31,0);
	vcdp->declBit(c+64,"TestAccel sim_shell mod_mem clock",-1);
	vcdp->declBit(c+65,"TestAccel sim_shell mod_mem reset",-1);
	vcdp->declBit(c+4,"TestAccel sim_shell mod_mem dpi_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell mod_mem dpi_req_opcode",-1);
	vcdp->declBus(c+68,"TestAccel sim_shell mod_mem dpi_req_len",-1,7,0);
	vcdp->declQuad(c+6,"TestAccel sim_shell mod_mem dpi_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell mod_mem dpi_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell mod_mem dpi_wr_bits",-1,63,0);
	vcdp->declBit(c+60,"TestAccel sim_shell mod_mem dpi_rd_valid",-1);
	vcdp->declQuad(c+61,"TestAccel sim_shell mod_mem dpi_rd_bits",-1,63,0);
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
	vcdp->declBit(c+64,"TestAccel vta_accel clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel reset",-1);
	vcdp->declBit(c+56,"TestAccel vta_accel io_host_req_valid",-1);
	vcdp->declBit(c+57,"TestAccel vta_accel io_host_req_opcode",-1);
	vcdp->declBus(c+58,"TestAccel vta_accel io_host_req_addr",-1,7,0);
	vcdp->declBus(c+59,"TestAccel vta_accel io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel vta_accel io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel io_mem_rd_ready",-1);
	vcdp->declBit(c+60,"TestAccel vta_accel io_mem_rd_valid",-1);
	vcdp->declQuad(c+61,"TestAccel vta_accel io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+64,"TestAccel vta_accel rf_clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel rf_reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel rf_io_launch",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel rf_io_finish",-1);
	vcdp->declBit(c+14,"TestAccel vta_accel rf_io_ecnt_0_valid",-1);
	vcdp->declBus(c+15,"TestAccel vta_accel rf_io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel rf_io_vals_0",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel rf_io_vals_1",-1,31,0);
	vcdp->declBus(c+18,"TestAccel vta_accel rf_io_vals_2",-1,31,0);
	vcdp->declBus(c+19,"TestAccel vta_accel rf_io_vals_3",-1,31,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel rf_io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+22,"TestAccel vta_accel rf_io_ptrs_1",-1,63,0);
	vcdp->declQuad(c+24,"TestAccel vta_accel rf_io_ptrs_2",-1,63,0);
	vcdp->declBit(c+56,"TestAccel vta_accel rf_io_host_req_valid",-1);
	vcdp->declBit(c+57,"TestAccel vta_accel rf_io_host_req_opcode",-1);
	vcdp->declBus(c+58,"TestAccel vta_accel rf_io_host_req_addr",-1,7,0);
	vcdp->declBus(c+59,"TestAccel vta_accel rf_io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel rf_io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel rf_io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel rf_io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+64,"TestAccel vta_accel ce_clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel ce_reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel ce_io_launch",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel ce_io_finish",-1);
	vcdp->declBit(c+14,"TestAccel vta_accel ce_io_ecnt_0_valid",-1);
	vcdp->declBus(c+15,"TestAccel vta_accel ce_io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel ce_io_vals_0",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel ce_io_vals_1",-1,31,0);
	vcdp->declBus(c+18,"TestAccel vta_accel ce_io_vals_2",-1,31,0);
	vcdp->declBus(c+19,"TestAccel vta_accel ce_io_vals_3",-1,31,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel ce_io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+22,"TestAccel vta_accel ce_io_ptrs_1",-1,63,0);
	vcdp->declQuad(c+24,"TestAccel vta_accel ce_io_ptrs_2",-1,63,0);
	vcdp->declBit(c+4,"TestAccel vta_accel ce_io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel ce_io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel ce_io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel ce_io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce_io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel ce_io_mem_rd_ready",-1);
	vcdp->declBit(c+60,"TestAccel vta_accel ce_io_mem_rd_valid",-1);
	vcdp->declQuad(c+61,"TestAccel vta_accel ce_io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+64,"TestAccel vta_accel rf clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel rf reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel rf io_launch",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel rf io_finish",-1);
	vcdp->declBit(c+14,"TestAccel vta_accel rf io_ecnt_0_valid",-1);
	vcdp->declBus(c+15,"TestAccel vta_accel rf io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel rf io_vals_0",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel rf io_vals_1",-1,31,0);
	vcdp->declBus(c+18,"TestAccel vta_accel rf io_vals_2",-1,31,0);
	vcdp->declBus(c+19,"TestAccel vta_accel rf io_vals_3",-1,31,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel rf io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+22,"TestAccel vta_accel rf io_ptrs_1",-1,63,0);
	vcdp->declQuad(c+24,"TestAccel vta_accel rf io_ptrs_2",-1,63,0);
	vcdp->declBit(c+56,"TestAccel vta_accel rf io_host_req_valid",-1);
	vcdp->declBit(c+57,"TestAccel vta_accel rf io_host_req_opcode",-1);
	vcdp->declBus(c+58,"TestAccel vta_accel rf io_host_req_addr",-1,7,0);
	vcdp->declBus(c+59,"TestAccel vta_accel rf io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel rf io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel rf io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel rf io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+2,"TestAccel vta_accel rf state",-1);
	// Tracing: TestAccel vta_accel rf _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:121
	// Tracing: TestAccel vta_accel rf _T_74 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:122
	// Tracing: TestAccel vta_accel rf _T_76 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:123
	// Tracing: TestAccel vta_accel rf _T_77 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:124
	// Tracing: TestAccel vta_accel rf _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:125
	// Tracing: TestAccel vta_accel rf _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:126
	// Tracing: TestAccel vta_accel rf _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:127
	// Tracing: TestAccel vta_accel rf _T_79 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:128
	// Tracing: TestAccel vta_accel rf _T_80 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:129
	vcdp->declBus(c+26,"TestAccel vta_accel rf reg_0",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:131
	vcdp->declBus(c+27,"TestAccel vta_accel rf reg_1",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:133
	vcdp->declBus(c+16,"TestAccel vta_accel rf reg_2",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:135
	vcdp->declBus(c+17,"TestAccel vta_accel rf reg_3",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:137
	vcdp->declBus(c+18,"TestAccel vta_accel rf reg_4",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:139
	vcdp->declBus(c+19,"TestAccel vta_accel rf reg_5",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:141
	vcdp->declBus(c+28,"TestAccel vta_accel rf reg_6",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:143
	vcdp->declBus(c+29,"TestAccel vta_accel rf reg_7",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:145
	vcdp->declBus(c+30,"TestAccel vta_accel rf reg_8",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:147
	vcdp->declBus(c+31,"TestAccel vta_accel rf reg_9",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:149
	vcdp->declBus(c+32,"TestAccel vta_accel rf reg_10",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:151
	vcdp->declBus(c+33,"TestAccel vta_accel rf reg_11",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:153
	// Tracing: TestAccel vta_accel rf _T_156 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:154
	// Tracing: TestAccel vta_accel rf _T_158 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:155
	// Tracing: TestAccel vta_accel rf _T_159 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:156
	// Tracing: TestAccel vta_accel rf _GEN_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:157
	// Tracing: TestAccel vta_accel rf _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:158
	// Tracing: TestAccel vta_accel rf _T_164 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:159
	// Tracing: TestAccel vta_accel rf _T_165 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:160
	// Tracing: TestAccel vta_accel rf _GEN_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:161
	// Tracing: TestAccel vta_accel rf _GEN_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:162
	// Tracing: TestAccel vta_accel rf _T_170 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:163
	// Tracing: TestAccel vta_accel rf _T_171 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:164
	// Tracing: TestAccel vta_accel rf _GEN_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:165
	// Tracing: TestAccel vta_accel rf _T_176 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:166
	// Tracing: TestAccel vta_accel rf _T_177 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:167
	// Tracing: TestAccel vta_accel rf _GEN_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:168
	// Tracing: TestAccel vta_accel rf _T_182 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:169
	// Tracing: TestAccel vta_accel rf _T_183 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:170
	// Tracing: TestAccel vta_accel rf _GEN_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:171
	// Tracing: TestAccel vta_accel rf _T_188 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:172
	// Tracing: TestAccel vta_accel rf _T_189 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:173
	// Tracing: TestAccel vta_accel rf _GEN_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:174
	// Tracing: TestAccel vta_accel rf _T_194 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:175
	// Tracing: TestAccel vta_accel rf _T_195 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:176
	// Tracing: TestAccel vta_accel rf _GEN_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:177
	// Tracing: TestAccel vta_accel rf _T_200 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:178
	// Tracing: TestAccel vta_accel rf _T_201 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:179
	// Tracing: TestAccel vta_accel rf _GEN_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:180
	// Tracing: TestAccel vta_accel rf _T_206 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:181
	// Tracing: TestAccel vta_accel rf _T_207 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:182
	// Tracing: TestAccel vta_accel rf _GEN_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:183
	// Tracing: TestAccel vta_accel rf _T_212 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:184
	// Tracing: TestAccel vta_accel rf _T_213 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:185
	// Tracing: TestAccel vta_accel rf _GEN_14 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:186
	// Tracing: TestAccel vta_accel rf _T_218 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:187
	// Tracing: TestAccel vta_accel rf _T_219 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:188
	// Tracing: TestAccel vta_accel rf _GEN_15 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:189
	// Tracing: TestAccel vta_accel rf _T_224 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:190
	// Tracing: TestAccel vta_accel rf _T_225 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:191
	// Tracing: TestAccel vta_accel rf _GEN_16 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:192
	vcdp->declBus(c+3,"TestAccel vta_accel rf rdata",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:194
	// Tracing: TestAccel vta_accel rf _T_235 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:195
	// Tracing: TestAccel vta_accel rf _T_238 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:196
	// Tracing: TestAccel vta_accel rf _T_240 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:197
	// Tracing: TestAccel vta_accel rf _T_242 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:198
	// Tracing: TestAccel vta_accel rf _T_244 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:199
	// Tracing: TestAccel vta_accel rf _T_246 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:200
	// Tracing: TestAccel vta_accel rf _T_248 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:201
	// Tracing: TestAccel vta_accel rf _T_250 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:202
	// Tracing: TestAccel vta_accel rf _T_252 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:203
	// Tracing: TestAccel vta_accel rf _T_254 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:204
	// Tracing: TestAccel vta_accel rf _T_256 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:205
	// Tracing: TestAccel vta_accel rf _T_258 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:206
	// Tracing: TestAccel vta_accel rf _T_260 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:207
	// Tracing: TestAccel vta_accel rf _GEN_17 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:208
	vcdp->declBus(c+72,"TestAccel vta_accel rf initvar",-1,31,0);
	vcdp->declBit(c+64,"TestAccel vta_accel ce clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel ce reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel ce io_launch",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel ce io_finish",-1);
	vcdp->declBit(c+14,"TestAccel vta_accel ce io_ecnt_0_valid",-1);
	vcdp->declBus(c+15,"TestAccel vta_accel ce io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel ce io_vals_0",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel ce io_vals_1",-1,31,0);
	vcdp->declBus(c+18,"TestAccel vta_accel ce io_vals_2",-1,31,0);
	vcdp->declBus(c+19,"TestAccel vta_accel ce io_vals_3",-1,31,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel ce io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+22,"TestAccel vta_accel ce io_ptrs_1",-1,63,0);
	vcdp->declQuad(c+24,"TestAccel vta_accel ce io_ptrs_2",-1,63,0);
	vcdp->declBit(c+4,"TestAccel vta_accel ce io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel ce io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel ce io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel ce io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel ce io_mem_rd_ready",-1);
	vcdp->declBit(c+60,"TestAccel vta_accel ce io_mem_rd_valid",-1);
	vcdp->declQuad(c+61,"TestAccel vta_accel ce io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+64,"TestAccel vta_accel ce sliceAccum_clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel ce sliceAccum_reset",-1);
	vcdp->declBit(c+34,"TestAccel vta_accel ce sliceAccum_io_rst",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel ce sliceAccum_io_valid",-1);
	vcdp->declBit(c+35,"TestAccel vta_accel ce sliceAccum_io_ready",-1);
	vcdp->declQuad(c+36,"TestAccel vta_accel ce sliceAccum_io_in",-1,62,0);
	vcdp->declQuad(c+38,"TestAccel vta_accel ce sliceAccum_io_sum",-1,63,0);
	vcdp->declBit(c+64,"TestAccel vta_accel ce overallAccum_clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel ce overallAccum_reset",-1);
	vcdp->declBit(c+40,"TestAccel vta_accel ce overallAccum_io_rst",-1);
	vcdp->declBit(c+41,"TestAccel vta_accel ce overallAccum_io_valid",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel ce overallAccum_io_ready",-1);
	vcdp->declQuad(c+42,"TestAccel vta_accel ce overallAccum_io_in",-1,62,0);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce overallAccum_io_sum",-1,63,0);
	vcdp->declBus(c+44,"TestAccel vta_accel ce state",-1,2,0);
	// Tracing: TestAccel vta_accel ce _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:661
	vcdp->declBus(c+15,"TestAccel vta_accel ce cycles",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:663
	vcdp->declQuad(c+45,"TestAccel vta_accel ce reg1",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:665
	vcdp->declQuad(c+47,"TestAccel vta_accel ce reg2",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:667
	vcdp->declBus(c+49,"TestAccel vta_accel ce cnt",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:669
	vcdp->declQuad(c+50,"TestAccel vta_accel ce raddr1",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:671
	vcdp->declQuad(c+52,"TestAccel vta_accel ce raddr2",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:673
	vcdp->declQuad(c+54,"TestAccel vta_accel ce waddr",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:675
	// Tracing: TestAccel vta_accel ce _T_88 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:676
	// Tracing: TestAccel vta_accel ce _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:677
	// Tracing: TestAccel vta_accel ce _T_89 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:678
	// Tracing: TestAccel vta_accel ce _T_90 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:679
	// Tracing: TestAccel vta_accel ce _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:680
	// Tracing: TestAccel vta_accel ce _T_91 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:681
	// Tracing: TestAccel vta_accel ce _T_92 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:682
	// Tracing: TestAccel vta_accel ce _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:683
	// Tracing: TestAccel vta_accel ce _T_93 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:684
	// Tracing: TestAccel vta_accel ce _T_94 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:685
	// Tracing: TestAccel vta_accel ce _T_96 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:686
	// Tracing: TestAccel vta_accel ce _T_97 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:687
	// Tracing: TestAccel vta_accel ce _T_98 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:688
	// Tracing: TestAccel vta_accel ce _T_99 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:689
	// Tracing: TestAccel vta_accel ce _GEN_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:690
	// Tracing: TestAccel vta_accel ce _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:691
	// Tracing: TestAccel vta_accel ce _GEN_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:692
	// Tracing: TestAccel vta_accel ce _GEN_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:693
	// Tracing: TestAccel vta_accel ce _GEN_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:694
	// Tracing: TestAccel vta_accel ce _GEN_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:695
	// Tracing: TestAccel vta_accel ce _GEN_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:696
	// Tracing: TestAccel vta_accel ce _GEN_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:697
	// Tracing: TestAccel vta_accel ce _T_100 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:698
	// Tracing: TestAccel vta_accel ce _T_106 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:699
	// Tracing: TestAccel vta_accel ce _T_109 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:700
	// Tracing: TestAccel vta_accel ce _T_110 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:701
	// Tracing: TestAccel vta_accel ce _GEN_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:702
	// Tracing: TestAccel vta_accel ce _T_114 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:703
	// Tracing: TestAccel vta_accel ce _T_115 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:704
	// Tracing: TestAccel vta_accel ce _T_117 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:705
	// Tracing: TestAccel vta_accel ce _T_118 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:706
	// Tracing: TestAccel vta_accel ce _GEN_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:707
	// Tracing: TestAccel vta_accel ce _GEN_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:708
	// Tracing: TestAccel vta_accel ce _T_119 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:709
	// Tracing: TestAccel vta_accel ce _T_120 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:710
	// Tracing: TestAccel vta_accel ce _T_121 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:711
	// Tracing: TestAccel vta_accel ce _T_122 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:712
	// Tracing: TestAccel vta_accel ce _T_130 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:713
	// Tracing: TestAccel vta_accel ce _T_132 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:714
	// Tracing: TestAccel vta_accel ce _T_133 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:715
	// Tracing: TestAccel vta_accel ce _T_134 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:716
	// Tracing: TestAccel vta_accel ce _T_138 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:717
	// Tracing: TestAccel vta_accel ce _T_139 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:718
	// Tracing: TestAccel vta_accel ce _T_140 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:719
	// Tracing: TestAccel vta_accel ce _T_150 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:720
	// Tracing: TestAccel vta_accel ce _T_151 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:721
	// Tracing: TestAccel vta_accel ce _GEN_21 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:722
	// Tracing: TestAccel vta_accel ce _T_152 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:723
	// Tracing: TestAccel vta_accel ce _T_158 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:724
	// Tracing: TestAccel vta_accel ce _T_159 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:725
	// Tracing: TestAccel vta_accel ce _GEN_19 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:726
	vcdp->declBus(c+73,"TestAccel vta_accel ce initvar",-1,31,0);
	vcdp->declBit(c+64,"TestAccel vta_accel ce sliceAccum clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel ce sliceAccum reset",-1);
	vcdp->declBit(c+34,"TestAccel vta_accel ce sliceAccum io_rst",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel ce sliceAccum io_valid",-1);
	vcdp->declBit(c+35,"TestAccel vta_accel ce sliceAccum io_ready",-1);
	vcdp->declQuad(c+36,"TestAccel vta_accel ce sliceAccum io_in",-1,62,0);
	vcdp->declQuad(c+38,"TestAccel vta_accel ce sliceAccum io_sum",-1,63,0);
	vcdp->declQuad(c+38,"TestAccel vta_accel ce sliceAccum reg$",-1,63,0);
	// Tracing: TestAccel vta_accel ce sliceAccum _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:536
	vcdp->declBit(c+35,"TestAccel vta_accel ce sliceAccum ready",-1);
	// Tracing: TestAccel vta_accel ce sliceAccum _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:538
	// Tracing: TestAccel vta_accel ce sliceAccum _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:539
	// Tracing: TestAccel vta_accel ce sliceAccum _T_21 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:540
	// Tracing: TestAccel vta_accel ce sliceAccum _T_26 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:541
	// Tracing: TestAccel vta_accel ce sliceAccum _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:542
	// Tracing: TestAccel vta_accel ce sliceAccum _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:543
	// Tracing: TestAccel vta_accel ce sliceAccum _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:544
	// Tracing: TestAccel vta_accel ce sliceAccum _GEN_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:545
	// Tracing: TestAccel vta_accel ce sliceAccum _GEN_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:546
	// Tracing: TestAccel vta_accel ce sliceAccum _GEN_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:547
	vcdp->declBus(c+74,"TestAccel vta_accel ce sliceAccum initvar",-1,31,0);
	vcdp->declBit(c+64,"TestAccel vta_accel ce overallAccum clock",-1);
	vcdp->declBit(c+65,"TestAccel vta_accel ce overallAccum reset",-1);
	vcdp->declBit(c+40,"TestAccel vta_accel ce overallAccum io_rst",-1);
	vcdp->declBit(c+41,"TestAccel vta_accel ce overallAccum io_valid",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel ce overallAccum io_ready",-1);
	vcdp->declQuad(c+42,"TestAccel vta_accel ce overallAccum io_in",-1,62,0);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce overallAccum io_sum",-1,63,0);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce overallAccum reg$",-1,63,0);
	// Tracing: TestAccel vta_accel ce overallAccum _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:536
	vcdp->declBit(c+13,"TestAccel vta_accel ce overallAccum ready",-1);
	// Tracing: TestAccel vta_accel ce overallAccum _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:538
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:539
	// Tracing: TestAccel vta_accel ce overallAccum _T_21 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:540
	// Tracing: TestAccel vta_accel ce overallAccum _T_26 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:541
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:542
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:543
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:544
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:545
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:546
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:547
	vcdp->declBus(c+75,"TestAccel vta_accel ce overallAccum initvar",-1,31,0);
    }
}

void VTestAccel::traceFullThis__1(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp74,127,0,4);
    VL_SIGW(__Vtemp75,127,0,4);
    VL_SIGW(__Vtemp76,127,0,4);
    VL_SIGW(__Vtemp78,319,0,10);
    VL_SIGW(__Vtemp79,319,0,10);
    // Body
    {
	vcdp->fullBit(c+1,(((~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)) 
			    & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid))));
	vcdp->fullBit(c+2,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state));
	vcdp->fullBus(c+3,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata),32);
	vcdp->fullBit(c+4,(((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_121) 
			    | (5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)))));
	vcdp->fullBit(c+5,((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vcdp->fullQuad(c+6,(((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_121)
			      ? ((1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
				  ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1
				  : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2)
			      : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr)),64);
	vcdp->fullBit(c+8,((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vcdp->fullQuad(c+9,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024),64);
	vcdp->fullBit(c+11,(((2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
			     | (4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)))));
	vcdp->fullBit(c+12,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0)));
	vcdp->fullBit(c+13,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__ready));
	vcdp->fullBit(c+14,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid));
	vcdp->fullBus(c+15,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles),32);
	vcdp->fullBus(c+16,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2),32);
	vcdp->fullBus(c+17,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3),32);
	vcdp->fullBus(c+18,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4),32);
	vcdp->fullBus(c+19,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5),32);
	vcdp->fullQuad(c+20,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7)) 
			       << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6)))),64);
	vcdp->fullQuad(c+22,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9)) 
			       << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8)))),64);
	vcdp->fullQuad(c+24,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11)) 
			       << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10)))),64);
	vcdp->fullBus(c+26,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0),32);
	vcdp->fullBus(c+27,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1),32);
	vcdp->fullBus(c+28,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6),32);
	vcdp->fullBus(c+29,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7),32);
	vcdp->fullBus(c+30,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8),32);
	vcdp->fullBus(c+31,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9),32);
	vcdp->fullBus(c+32,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10),32);
	vcdp->fullBus(c+33,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11),32);
	vcdp->fullBit(c+34,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5)));
	vcdp->fullBit(c+35,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__ready));
	VL_EXTEND_WQ(128,64, __Vtemp74, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1);
	VL_EXTEND_WQ(128,64, __Vtemp75, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2);
	VL_MUL_W(4, __Vtemp76, __Vtemp74, __Vtemp75);
	vcdp->fullQuad(c+36,((VL_ULL(0x7fffffffffffffff) 
			      & (((QData)((IData)(__Vtemp76[1U])) 
				  << 0x20U) | (QData)((IData)(
							      __Vtemp76[0U]))))),63);
	vcdp->fullQuad(c+38,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024),64);
	vcdp->fullBit(c+40,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)));
	vcdp->fullBit(c+41,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid));
	VL_EXTEND_WQ(319,64, __Vtemp78, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
	VL_SHIFTL_WWI(319,319,8, __Vtemp79, __Vtemp78, 
		      (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2));
	vcdp->fullQuad(c+42,((VL_ULL(0x7fffffffffffffff) 
			      & (((QData)((IData)(__Vtemp79[1U])) 
				  << 0x20U) | (QData)((IData)(
							      __Vtemp79[0U]))))),63);
	vcdp->fullBus(c+44,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state),3);
	vcdp->fullQuad(c+45,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1),64);
	vcdp->fullQuad(c+47,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2),64);
	vcdp->fullBus(c+49,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt),32);
	vcdp->fullQuad(c+50,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1),64);
	vcdp->fullQuad(c+52,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2),64);
	vcdp->fullQuad(c+54,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr),64);
	vcdp->fullBit(c+56,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid));
	vcdp->fullBit(c+57,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode));
	vcdp->fullBus(c+58,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr),8);
	vcdp->fullBus(c+59,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value),32);
	vcdp->fullBit(c+60,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid));
	vcdp->fullQuad(c+61,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits),64);
	vcdp->fullBit(c+63,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg));
	vcdp->fullBit(c+64,(vlTOPp->clock));
	vcdp->fullBit(c+65,(vlTOPp->reset));
	vcdp->fullBit(c+66,(vlTOPp->sim_clock));
	vcdp->fullBit(c+67,(vlTOPp->sim_wait));
	vcdp->fullBus(c+68,(0U),8);
	vcdp->fullBus(c+69,(8U),32);
	vcdp->fullBus(c+70,(0x20U),32);
	vcdp->fullBus(c+71,(0x40U),32);
	vcdp->fullBus(c+72,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__initvar),32);
	vcdp->fullBus(c+73,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__initvar),32);
	vcdp->fullBus(c+74,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__initvar),32);
	vcdp->fullBus(c+75,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__initvar),32);
    }
}
