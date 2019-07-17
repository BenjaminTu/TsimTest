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
	vcdp->declBit(c+115,"clock",-1);
	vcdp->declBit(c+116,"reset",-1);
	vcdp->declBit(c+117,"sim_clock",-1);
	vcdp->declBit(c+118,"sim_wait",-1);
	vcdp->declBit(c+115,"TestAccel clock",-1);
	vcdp->declBit(c+116,"TestAccel reset",-1);
	vcdp->declBit(c+117,"TestAccel sim_clock",-1);
	vcdp->declBit(c+118,"TestAccel sim_wait",-1);
	vcdp->declBit(c+115,"TestAccel sim_shell_clock",-1);
	vcdp->declBit(c+116,"TestAccel sim_shell_reset",-1);
	vcdp->declBit(c+107,"TestAccel sim_shell_host_req_valid",-1);
	vcdp->declBit(c+108,"TestAccel sim_shell_host_req_opcode",-1);
	vcdp->declBus(c+109,"TestAccel sim_shell_host_req_addr",-1,7,0);
	vcdp->declBus(c+110,"TestAccel sim_shell_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell_host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel sim_shell_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel sim_shell_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell_mem_rd_ready",-1);
	vcdp->declBit(c+111,"TestAccel sim_shell_mem_rd_valid",-1);
	vcdp->declQuad(c+112,"TestAccel sim_shell_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+117,"TestAccel sim_shell_sim_clock",-1);
	vcdp->declBit(c+114,"TestAccel sim_shell_sim_wait",-1);
	vcdp->declBit(c+115,"TestAccel vta_accel_clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel_reset",-1);
	vcdp->declBit(c+107,"TestAccel vta_accel_io_host_req_valid",-1);
	vcdp->declBit(c+108,"TestAccel vta_accel_io_host_req_opcode",-1);
	vcdp->declBus(c+109,"TestAccel vta_accel_io_host_req_addr",-1,7,0);
	vcdp->declBus(c+110,"TestAccel vta_accel_io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel_io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel_io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel_io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel vta_accel_io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel_io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel_io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel_io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel_io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel_io_mem_rd_ready",-1);
	vcdp->declBit(c+111,"TestAccel vta_accel_io_mem_rd_valid",-1);
	vcdp->declQuad(c+112,"TestAccel vta_accel_io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+115,"TestAccel sim_shell clock",-1);
	vcdp->declBit(c+116,"TestAccel sim_shell reset",-1);
	vcdp->declBit(c+107,"TestAccel sim_shell host_req_valid",-1);
	vcdp->declBit(c+108,"TestAccel sim_shell host_req_opcode",-1);
	vcdp->declBus(c+109,"TestAccel sim_shell host_req_addr",-1,7,0);
	vcdp->declBus(c+110,"TestAccel sim_shell host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel sim_shell mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel sim_shell mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell mem_rd_ready",-1);
	vcdp->declBit(c+111,"TestAccel sim_shell mem_rd_valid",-1);
	vcdp->declQuad(c+112,"TestAccel sim_shell mem_rd_bits",-1,63,0);
	vcdp->declBit(c+117,"TestAccel sim_shell sim_clock",-1);
	vcdp->declBit(c+114,"TestAccel sim_shell sim_wait",-1);
	vcdp->declBit(c+114,"TestAccel sim_shell mod_sim_dpi_wait",-1);
	vcdp->declBit(c+116,"TestAccel sim_shell mod_sim_reset",-1);
	vcdp->declBit(c+117,"TestAccel sim_shell mod_sim_clock",-1);
	vcdp->declBit(c+107,"TestAccel sim_shell mod_host_dpi_req_valid",-1);
	vcdp->declBit(c+108,"TestAccel sim_shell mod_host_dpi_req_opcode",-1);
	vcdp->declBus(c+109,"TestAccel sim_shell mod_host_dpi_req_addr",-1,7,0);
	vcdp->declBus(c+110,"TestAccel sim_shell mod_host_dpi_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel sim_shell mod_host_dpi_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel sim_shell mod_host_dpi_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel sim_shell mod_host_dpi_resp_bits",-1,31,0);
	vcdp->declBit(c+116,"TestAccel sim_shell mod_host_reset",-1);
	vcdp->declBit(c+115,"TestAccel sim_shell mod_host_clock",-1);
	vcdp->declBit(c+4,"TestAccel sim_shell mod_mem_dpi_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell mod_mem_dpi_req_opcode",-1);
	vcdp->declBus(c+119,"TestAccel sim_shell mod_mem_dpi_req_len",-1,7,0);
	vcdp->declQuad(c+6,"TestAccel sim_shell mod_mem_dpi_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell mod_mem_dpi_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell mod_mem_dpi_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel sim_shell mod_mem_dpi_rd_ready",-1);
	vcdp->declBit(c+111,"TestAccel sim_shell mod_mem_dpi_rd_valid",-1);
	vcdp->declQuad(c+112,"TestAccel sim_shell mod_mem_dpi_rd_bits",-1,63,0);
	vcdp->declBit(c+116,"TestAccel sim_shell mod_mem_reset",-1);
	vcdp->declBit(c+115,"TestAccel sim_shell mod_mem_clock",-1);
	vcdp->declBit(c+117,"TestAccel sim_shell mod_sim clock",-1);
	vcdp->declBit(c+116,"TestAccel sim_shell mod_sim reset",-1);
	vcdp->declBit(c+114,"TestAccel sim_shell mod_sim dpi_wait",-1);
	// Tracing: TestAccel sim_shell mod_sim __reset // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:36
	// Tracing: TestAccel sim_shell mod_sim __wait // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:37
	// Tracing: TestAccel sim_shell mod_sim __exit // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:38
	vcdp->declBit(c+114,"TestAccel sim_shell mod_sim wait_reg",-1);
	vcdp->declBus(c+120,"TestAccel sim_shell mod_host ADDR_BITS",-1,31,0);
	vcdp->declBus(c+121,"TestAccel sim_shell mod_host DATA_BITS",-1,31,0);
	vcdp->declBit(c+115,"TestAccel sim_shell mod_host clock",-1);
	vcdp->declBit(c+116,"TestAccel sim_shell mod_host reset",-1);
	vcdp->declBit(c+107,"TestAccel sim_shell mod_host dpi_req_valid",-1);
	vcdp->declBit(c+108,"TestAccel sim_shell mod_host dpi_req_opcode",-1);
	vcdp->declBus(c+109,"TestAccel sim_shell mod_host dpi_req_addr",-1,7,0);
	vcdp->declBus(c+110,"TestAccel sim_shell mod_host dpi_req_value",-1,31,0);
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
	vcdp->declBus(c+120,"TestAccel sim_shell mod_mem LEN_BITS",-1,31,0);
	vcdp->declBus(c+122,"TestAccel sim_shell mod_mem ADDR_BITS",-1,31,0);
	vcdp->declBus(c+122,"TestAccel sim_shell mod_mem DATA_BITS",-1,31,0);
	vcdp->declBit(c+115,"TestAccel sim_shell mod_mem clock",-1);
	vcdp->declBit(c+116,"TestAccel sim_shell mod_mem reset",-1);
	vcdp->declBit(c+4,"TestAccel sim_shell mod_mem dpi_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel sim_shell mod_mem dpi_req_opcode",-1);
	vcdp->declBus(c+119,"TestAccel sim_shell mod_mem dpi_req_len",-1,7,0);
	vcdp->declQuad(c+6,"TestAccel sim_shell mod_mem dpi_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel sim_shell mod_mem dpi_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel sim_shell mod_mem dpi_wr_bits",-1,63,0);
	vcdp->declBit(c+111,"TestAccel sim_shell mod_mem dpi_rd_valid",-1);
	vcdp->declQuad(c+112,"TestAccel sim_shell mod_mem dpi_rd_bits",-1,63,0);
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
	vcdp->declBit(c+115,"TestAccel vta_accel clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel reset",-1);
	vcdp->declBit(c+107,"TestAccel vta_accel io_host_req_valid",-1);
	vcdp->declBit(c+108,"TestAccel vta_accel io_host_req_opcode",-1);
	vcdp->declBus(c+109,"TestAccel vta_accel io_host_req_addr",-1,7,0);
	vcdp->declBus(c+110,"TestAccel vta_accel io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+4,"TestAccel vta_accel io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel io_mem_rd_ready",-1);
	vcdp->declBit(c+111,"TestAccel vta_accel io_mem_rd_valid",-1);
	vcdp->declQuad(c+112,"TestAccel vta_accel io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+115,"TestAccel vta_accel rf_clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel rf_reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel rf_io_launch",-1);
	vcdp->declBit(c+8,"TestAccel vta_accel rf_io_finish",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel rf_io_ecnt_0_valid",-1);
	vcdp->declBus(c+14,"TestAccel vta_accel rf_io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+15,"TestAccel vta_accel rf_io_vals_0",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel rf_io_vals_1",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel rf_io_vals_2",-1,31,0);
	vcdp->declQuad(c+18,"TestAccel vta_accel rf_io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel rf_io_ptrs_1",-1,63,0);
	vcdp->declQuad(c+22,"TestAccel vta_accel rf_io_ptrs_2",-1,63,0);
	vcdp->declBit(c+107,"TestAccel vta_accel rf_io_host_req_valid",-1);
	vcdp->declBit(c+108,"TestAccel vta_accel rf_io_host_req_opcode",-1);
	vcdp->declBus(c+109,"TestAccel vta_accel rf_io_host_req_addr",-1,7,0);
	vcdp->declBus(c+110,"TestAccel vta_accel rf_io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel rf_io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel rf_io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel rf_io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+115,"TestAccel vta_accel ce_clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel ce_reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel ce_io_launch",-1);
	vcdp->declBit(c+8,"TestAccel vta_accel ce_io_finish",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel ce_io_ecnt_0_valid",-1);
	vcdp->declBus(c+14,"TestAccel vta_accel ce_io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+15,"TestAccel vta_accel ce_io_vals_0",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel ce_io_vals_1",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel ce_io_vals_2",-1,31,0);
	vcdp->declQuad(c+18,"TestAccel vta_accel ce_io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel ce_io_ptrs_1",-1,63,0);
	vcdp->declQuad(c+22,"TestAccel vta_accel ce_io_ptrs_2",-1,63,0);
	vcdp->declBit(c+4,"TestAccel vta_accel ce_io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel ce_io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel ce_io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel ce_io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce_io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel ce_io_mem_rd_ready",-1);
	vcdp->declBit(c+111,"TestAccel vta_accel ce_io_mem_rd_valid",-1);
	vcdp->declQuad(c+112,"TestAccel vta_accel ce_io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+115,"TestAccel vta_accel rf clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel rf reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel rf io_launch",-1);
	vcdp->declBit(c+8,"TestAccel vta_accel rf io_finish",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel rf io_ecnt_0_valid",-1);
	vcdp->declBus(c+14,"TestAccel vta_accel rf io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+15,"TestAccel vta_accel rf io_vals_0",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel rf io_vals_1",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel rf io_vals_2",-1,31,0);
	vcdp->declQuad(c+18,"TestAccel vta_accel rf io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel rf io_ptrs_1",-1,63,0);
	vcdp->declQuad(c+22,"TestAccel vta_accel rf io_ptrs_2",-1,63,0);
	vcdp->declBit(c+107,"TestAccel vta_accel rf io_host_req_valid",-1);
	vcdp->declBit(c+108,"TestAccel vta_accel rf io_host_req_opcode",-1);
	vcdp->declBus(c+109,"TestAccel vta_accel rf io_host_req_addr",-1,7,0);
	vcdp->declBus(c+110,"TestAccel vta_accel rf io_host_req_value",-1,31,0);
	vcdp->declBit(c+1,"TestAccel vta_accel rf io_host_req_deq",-1);
	vcdp->declBit(c+2,"TestAccel vta_accel rf io_host_resp_valid",-1);
	vcdp->declBus(c+3,"TestAccel vta_accel rf io_host_resp_bits",-1,31,0);
	vcdp->declBit(c+2,"TestAccel vta_accel rf state",-1);
	// Tracing: TestAccel vta_accel rf _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:120
	// Tracing: TestAccel vta_accel rf _T_74 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:121
	// Tracing: TestAccel vta_accel rf _T_76 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:122
	// Tracing: TestAccel vta_accel rf _T_77 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:123
	// Tracing: TestAccel vta_accel rf _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:124
	// Tracing: TestAccel vta_accel rf _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:125
	// Tracing: TestAccel vta_accel rf _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:126
	// Tracing: TestAccel vta_accel rf _T_79 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:127
	// Tracing: TestAccel vta_accel rf _T_80 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:128
	vcdp->declBus(c+24,"TestAccel vta_accel rf reg_0",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:130
	vcdp->declBus(c+25,"TestAccel vta_accel rf reg_1",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:132
	vcdp->declBus(c+15,"TestAccel vta_accel rf reg_2",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:134
	vcdp->declBus(c+16,"TestAccel vta_accel rf reg_3",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:136
	vcdp->declBus(c+17,"TestAccel vta_accel rf reg_4",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:138
	vcdp->declBus(c+26,"TestAccel vta_accel rf reg_5",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:140
	vcdp->declBus(c+27,"TestAccel vta_accel rf reg_6",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:142
	vcdp->declBus(c+28,"TestAccel vta_accel rf reg_7",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:144
	vcdp->declBus(c+29,"TestAccel vta_accel rf reg_8",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:146
	vcdp->declBus(c+30,"TestAccel vta_accel rf reg_9",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:148
	vcdp->declBus(c+31,"TestAccel vta_accel rf reg_10",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:150
	vcdp->declBus(c+32,"TestAccel vta_accel rf reg_11",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:152
	// Tracing: TestAccel vta_accel rf _T_156 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:153
	// Tracing: TestAccel vta_accel rf _T_158 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:154
	// Tracing: TestAccel vta_accel rf _T_159 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:155
	// Tracing: TestAccel vta_accel rf _GEN_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:156
	// Tracing: TestAccel vta_accel rf _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:157
	// Tracing: TestAccel vta_accel rf _T_164 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:158
	// Tracing: TestAccel vta_accel rf _T_165 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:159
	// Tracing: TestAccel vta_accel rf _GEN_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:160
	// Tracing: TestAccel vta_accel rf _GEN_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:161
	// Tracing: TestAccel vta_accel rf _T_170 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:162
	// Tracing: TestAccel vta_accel rf _T_171 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:163
	// Tracing: TestAccel vta_accel rf _GEN_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:164
	// Tracing: TestAccel vta_accel rf _T_176 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:165
	// Tracing: TestAccel vta_accel rf _T_177 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:166
	// Tracing: TestAccel vta_accel rf _GEN_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:167
	// Tracing: TestAccel vta_accel rf _T_182 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:168
	// Tracing: TestAccel vta_accel rf _T_183 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:169
	// Tracing: TestAccel vta_accel rf _GEN_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:170
	// Tracing: TestAccel vta_accel rf _T_188 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:171
	// Tracing: TestAccel vta_accel rf _T_189 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:172
	// Tracing: TestAccel vta_accel rf _GEN_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:173
	// Tracing: TestAccel vta_accel rf _T_194 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:174
	// Tracing: TestAccel vta_accel rf _T_195 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:175
	// Tracing: TestAccel vta_accel rf _GEN_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:176
	// Tracing: TestAccel vta_accel rf _T_200 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:177
	// Tracing: TestAccel vta_accel rf _T_201 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:178
	// Tracing: TestAccel vta_accel rf _GEN_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:179
	// Tracing: TestAccel vta_accel rf _T_206 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:180
	// Tracing: TestAccel vta_accel rf _T_207 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:181
	// Tracing: TestAccel vta_accel rf _GEN_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:182
	// Tracing: TestAccel vta_accel rf _T_212 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:183
	// Tracing: TestAccel vta_accel rf _T_213 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:184
	// Tracing: TestAccel vta_accel rf _GEN_14 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:185
	// Tracing: TestAccel vta_accel rf _T_218 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:186
	// Tracing: TestAccel vta_accel rf _T_219 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:187
	// Tracing: TestAccel vta_accel rf _GEN_15 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:188
	// Tracing: TestAccel vta_accel rf _T_224 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:189
	// Tracing: TestAccel vta_accel rf _T_225 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:190
	// Tracing: TestAccel vta_accel rf _GEN_16 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:191
	vcdp->declBus(c+3,"TestAccel vta_accel rf rdata",-1,31,0);
	// Tracing: TestAccel vta_accel rf _RAND_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:193
	// Tracing: TestAccel vta_accel rf _T_235 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:194
	// Tracing: TestAccel vta_accel rf _T_238 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:195
	// Tracing: TestAccel vta_accel rf _T_240 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:196
	// Tracing: TestAccel vta_accel rf _T_242 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:197
	// Tracing: TestAccel vta_accel rf _T_244 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:198
	// Tracing: TestAccel vta_accel rf _T_246 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:199
	// Tracing: TestAccel vta_accel rf _T_248 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:200
	// Tracing: TestAccel vta_accel rf _T_250 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:201
	// Tracing: TestAccel vta_accel rf _T_252 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:202
	// Tracing: TestAccel vta_accel rf _T_254 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:203
	// Tracing: TestAccel vta_accel rf _T_256 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:204
	// Tracing: TestAccel vta_accel rf _T_258 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:205
	// Tracing: TestAccel vta_accel rf _T_260 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:206
	// Tracing: TestAccel vta_accel rf _GEN_17 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:207
	vcdp->declBus(c+123,"TestAccel vta_accel rf initvar",-1,31,0);
	vcdp->declBit(c+115,"TestAccel vta_accel ce clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel ce reset",-1);
	vcdp->declBit(c+12,"TestAccel vta_accel ce io_launch",-1);
	vcdp->declBit(c+8,"TestAccel vta_accel ce io_finish",-1);
	vcdp->declBit(c+13,"TestAccel vta_accel ce io_ecnt_0_valid",-1);
	vcdp->declBus(c+14,"TestAccel vta_accel ce io_ecnt_0_bits",-1,31,0);
	vcdp->declBus(c+15,"TestAccel vta_accel ce io_vals_0",-1,31,0);
	vcdp->declBus(c+16,"TestAccel vta_accel ce io_vals_1",-1,31,0);
	vcdp->declBus(c+17,"TestAccel vta_accel ce io_vals_2",-1,31,0);
	vcdp->declQuad(c+18,"TestAccel vta_accel ce io_ptrs_0",-1,63,0);
	vcdp->declQuad(c+20,"TestAccel vta_accel ce io_ptrs_1",-1,63,0);
	vcdp->declQuad(c+22,"TestAccel vta_accel ce io_ptrs_2",-1,63,0);
	vcdp->declBit(c+4,"TestAccel vta_accel ce io_mem_req_valid",-1);
	vcdp->declBit(c+5,"TestAccel vta_accel ce io_mem_req_opcode",-1);
	vcdp->declQuad(c+6,"TestAccel vta_accel ce io_mem_req_addr",-1,63,0);
	vcdp->declBit(c+8,"TestAccel vta_accel ce io_mem_wr_valid",-1);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce io_mem_wr_bits",-1,63,0);
	vcdp->declBit(c+11,"TestAccel vta_accel ce io_mem_rd_ready",-1);
	vcdp->declBit(c+111,"TestAccel vta_accel ce io_mem_rd_valid",-1);
	vcdp->declQuad(c+112,"TestAccel vta_accel ce io_mem_rd_bits",-1,63,0);
	vcdp->declBit(c+115,"TestAccel vta_accel ce dot_clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel ce dot_reset",-1);
	vcdp->declBit(c+33,"TestAccel vta_accel ce dot_io_start",-1);
	vcdp->declBus(c+34,"TestAccel vta_accel ce dot_io_arrA_0",-1,7,0);
	vcdp->declBus(c+35,"TestAccel vta_accel ce dot_io_arrA_1",-1,7,0);
	vcdp->declBus(c+36,"TestAccel vta_accel ce dot_io_arrA_2",-1,7,0);
	vcdp->declBus(c+37,"TestAccel vta_accel ce dot_io_arrA_3",-1,7,0);
	vcdp->declBus(c+38,"TestAccel vta_accel ce dot_io_arrA_4",-1,7,0);
	vcdp->declBus(c+39,"TestAccel vta_accel ce dot_io_arrA_5",-1,7,0);
	vcdp->declBus(c+40,"TestAccel vta_accel ce dot_io_arrA_6",-1,7,0);
	vcdp->declBus(c+41,"TestAccel vta_accel ce dot_io_arrA_7",-1,7,0);
	vcdp->declBus(c+42,"TestAccel vta_accel ce dot_io_arrB_0",-1,7,0);
	vcdp->declBus(c+43,"TestAccel vta_accel ce dot_io_arrB_1",-1,7,0);
	vcdp->declBus(c+44,"TestAccel vta_accel ce dot_io_arrB_2",-1,7,0);
	vcdp->declBus(c+45,"TestAccel vta_accel ce dot_io_arrB_3",-1,7,0);
	vcdp->declBus(c+46,"TestAccel vta_accel ce dot_io_arrB_4",-1,7,0);
	vcdp->declBus(c+47,"TestAccel vta_accel ce dot_io_arrB_5",-1,7,0);
	vcdp->declBus(c+48,"TestAccel vta_accel ce dot_io_arrB_6",-1,7,0);
	vcdp->declBus(c+49,"TestAccel vta_accel ce dot_io_arrB_7",-1,7,0);
	vcdp->declBit(c+50,"TestAccel vta_accel ce dot_io_valid",-1);
	vcdp->declBus(c+51,"TestAccel vta_accel ce dot_io_res",-1,22,0);
	vcdp->declBit(c+115,"TestAccel vta_accel ce overallAccum_clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel ce overallAccum_reset",-1);
	vcdp->declBit(c+52,"TestAccel vta_accel ce overallAccum_io_rst",-1);
	vcdp->declBit(c+53,"TestAccel vta_accel ce overallAccum_io_valid",-1);
	vcdp->declBit(c+8,"TestAccel vta_accel ce overallAccum_io_ready",-1);
	vcdp->declQuad(c+54,"TestAccel vta_accel ce overallAccum_io_in",-1,62,0);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce overallAccum_io_sum",-1,63,0);
	vcdp->declBus(c+56,"TestAccel vta_accel ce state",-1,2,0);
	// Tracing: TestAccel vta_accel ce _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1003
	vcdp->declBus(c+57,"TestAccel vta_accel ce shift",-1,7,0);
	vcdp->declBus(c+14,"TestAccel vta_accel ce cycles",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1006
	vcdp->declBus(c+58,"TestAccel vta_accel ce reg1_0",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1008
	vcdp->declBus(c+59,"TestAccel vta_accel ce reg1_1",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1010
	vcdp->declBus(c+60,"TestAccel vta_accel ce reg1_2",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1012
	vcdp->declBus(c+61,"TestAccel vta_accel ce reg1_3",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1014
	vcdp->declBus(c+62,"TestAccel vta_accel ce reg1_4",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1016
	vcdp->declBus(c+63,"TestAccel vta_accel ce reg1_5",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1018
	vcdp->declBus(c+64,"TestAccel vta_accel ce reg1_6",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1020
	vcdp->declBus(c+65,"TestAccel vta_accel ce reg1_7",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1022
	vcdp->declBus(c+66,"TestAccel vta_accel ce reg2_0",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1024
	vcdp->declBus(c+67,"TestAccel vta_accel ce reg2_1",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1026
	vcdp->declBus(c+68,"TestAccel vta_accel ce reg2_2",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1028
	vcdp->declBus(c+69,"TestAccel vta_accel ce reg2_3",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1030
	vcdp->declBus(c+70,"TestAccel vta_accel ce reg2_4",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_14 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1032
	vcdp->declBus(c+71,"TestAccel vta_accel ce reg2_5",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_15 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1034
	vcdp->declBus(c+72,"TestAccel vta_accel ce reg2_6",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_16 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1036
	vcdp->declBus(c+73,"TestAccel vta_accel ce reg2_7",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_17 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1038
	vcdp->declBus(c+74,"TestAccel vta_accel ce cnt",-1,31,0);
	// Tracing: TestAccel vta_accel ce _RAND_18 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1040
	vcdp->declQuad(c+75,"TestAccel vta_accel ce raddr1",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_19 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1042
	vcdp->declQuad(c+77,"TestAccel vta_accel ce raddr2",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_20 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1044
	vcdp->declQuad(c+79,"TestAccel vta_accel ce waddr",-1,63,0);
	// Tracing: TestAccel vta_accel ce _RAND_21 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1046
	// Tracing: TestAccel vta_accel ce _T_112 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1047
	// Tracing: TestAccel vta_accel ce _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1048
	// Tracing: TestAccel vta_accel ce _T_113 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1049
	// Tracing: TestAccel vta_accel ce _T_114 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1050
	// Tracing: TestAccel vta_accel ce _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1051
	// Tracing: TestAccel vta_accel ce _T_115 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1052
	// Tracing: TestAccel vta_accel ce _T_116 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1053
	// Tracing: TestAccel vta_accel ce _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1054
	// Tracing: TestAccel vta_accel ce _T_117 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1055
	// Tracing: TestAccel vta_accel ce _T_118 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1056
	// Tracing: TestAccel vta_accel ce _T_120 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1057
	// Tracing: TestAccel vta_accel ce _T_121 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1058
	// Tracing: TestAccel vta_accel ce _T_122 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1059
	// Tracing: TestAccel vta_accel ce _T_123 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1060
	// Tracing: TestAccel vta_accel ce _GEN_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1061
	// Tracing: TestAccel vta_accel ce _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1062
	// Tracing: TestAccel vta_accel ce _GEN_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1063
	// Tracing: TestAccel vta_accel ce _GEN_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1064
	// Tracing: TestAccel vta_accel ce _GEN_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1065
	// Tracing: TestAccel vta_accel ce _GEN_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1066
	// Tracing: TestAccel vta_accel ce _GEN_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1067
	// Tracing: TestAccel vta_accel ce _GEN_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1068
	// Tracing: TestAccel vta_accel ce _T_124 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1069
	vcdp->declBit(c+81,"TestAccel vta_accel ce last",-1);
	// Tracing: TestAccel vta_accel ce _T_130 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1071
	// Tracing: TestAccel vta_accel ce _T_133 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1072
	// Tracing: TestAccel vta_accel ce _T_134 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1073
	// Tracing: TestAccel vta_accel ce _GEN_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1074
	// Tracing: TestAccel vta_accel ce _T_138 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1075
	// Tracing: TestAccel vta_accel ce _T_139 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1076
	// Tracing: TestAccel vta_accel ce _T_141 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1077
	// Tracing: TestAccel vta_accel ce _T_142 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1078
	// Tracing: TestAccel vta_accel ce _GEN_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1079
	// Tracing: TestAccel vta_accel ce _GEN_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1080
	// Tracing: TestAccel vta_accel ce _T_143 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1081
	// Tracing: TestAccel vta_accel ce _T_144 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1082
	// Tracing: TestAccel vta_accel ce _T_145 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1083
	// Tracing: TestAccel vta_accel ce _T_146 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1084
	// Tracing: TestAccel vta_accel ce _T_154 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1085
	// Tracing: TestAccel vta_accel ce _T_156 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1086
	// Tracing: TestAccel vta_accel ce _T_157 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1087
	// Tracing: TestAccel vta_accel ce _T_158 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1088
	// Tracing: TestAccel vta_accel ce _T_162 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1089
	// Tracing: TestAccel vta_accel ce _T_163 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1090
	// Tracing: TestAccel vta_accel ce _T_168 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1091
	// Tracing: TestAccel vta_accel ce _T_173 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1092
	// Tracing: TestAccel vta_accel ce _T_178 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1093
	// Tracing: TestAccel vta_accel ce _T_183 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1094
	// Tracing: TestAccel vta_accel ce _T_188 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1095
	// Tracing: TestAccel vta_accel ce _T_193 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1096
	// Tracing: TestAccel vta_accel ce _T_198 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1097
	// Tracing: TestAccel vta_accel ce _T_199 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1098
	// Tracing: TestAccel vta_accel ce _GEN_35 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1099
	vcdp->declArray(c+82,"TestAccel vta_accel ce shiftReg",-1,277,0);
	// Tracing: TestAccel vta_accel ce _RAND_22 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1101
	vcdp->declBit(c+53,"TestAccel vta_accel ce validReg",-1);
	// Tracing: TestAccel vta_accel ce _RAND_23 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1103
	// Tracing: TestAccel vta_accel ce _T_252 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1104
	// Tracing: TestAccel vta_accel ce _T_253 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1105
	// Tracing: TestAccel vta_accel ce _GEN_33 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1106
	vcdp->declBus(c+124,"TestAccel vta_accel ce initvar",-1,31,0);
	vcdp->declBit(c+115,"TestAccel vta_accel ce dot clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel ce dot reset",-1);
	vcdp->declBit(c+33,"TestAccel vta_accel ce dot io_start",-1);
	vcdp->declBus(c+34,"TestAccel vta_accel ce dot io_arrA_0",-1,7,0);
	vcdp->declBus(c+35,"TestAccel vta_accel ce dot io_arrA_1",-1,7,0);
	vcdp->declBus(c+36,"TestAccel vta_accel ce dot io_arrA_2",-1,7,0);
	vcdp->declBus(c+37,"TestAccel vta_accel ce dot io_arrA_3",-1,7,0);
	vcdp->declBus(c+38,"TestAccel vta_accel ce dot io_arrA_4",-1,7,0);
	vcdp->declBus(c+39,"TestAccel vta_accel ce dot io_arrA_5",-1,7,0);
	vcdp->declBus(c+40,"TestAccel vta_accel ce dot io_arrA_6",-1,7,0);
	vcdp->declBus(c+41,"TestAccel vta_accel ce dot io_arrA_7",-1,7,0);
	vcdp->declBus(c+42,"TestAccel vta_accel ce dot io_arrB_0",-1,7,0);
	vcdp->declBus(c+43,"TestAccel vta_accel ce dot io_arrB_1",-1,7,0);
	vcdp->declBus(c+44,"TestAccel vta_accel ce dot io_arrB_2",-1,7,0);
	vcdp->declBus(c+45,"TestAccel vta_accel ce dot io_arrB_3",-1,7,0);
	vcdp->declBus(c+46,"TestAccel vta_accel ce dot io_arrB_4",-1,7,0);
	vcdp->declBus(c+47,"TestAccel vta_accel ce dot io_arrB_5",-1,7,0);
	vcdp->declBus(c+48,"TestAccel vta_accel ce dot io_arrB_6",-1,7,0);
	vcdp->declBus(c+49,"TestAccel vta_accel ce dot io_arrB_7",-1,7,0);
	vcdp->declBit(c+50,"TestAccel vta_accel ce dot io_valid",-1);
	vcdp->declBus(c+51,"TestAccel vta_accel ce dot io_res",-1,22,0);
	vcdp->declBus(c+91,"TestAccel vta_accel ce dot product_0",-1,15,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:548
	vcdp->declBus(c+92,"TestAccel vta_accel ce dot product_1",-1,15,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:550
	vcdp->declBus(c+93,"TestAccel vta_accel ce dot product_2",-1,15,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:552
	vcdp->declBus(c+94,"TestAccel vta_accel ce dot product_3",-1,15,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:554
	vcdp->declBus(c+95,"TestAccel vta_accel ce dot product_4",-1,15,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:556
	vcdp->declBus(c+96,"TestAccel vta_accel ce dot product_5",-1,15,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:558
	vcdp->declBus(c+97,"TestAccel vta_accel ce dot product_6",-1,15,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:560
	vcdp->declBus(c+98,"TestAccel vta_accel ce dot product_7",-1,15,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:562
	vcdp->declBus(c+99,"TestAccel vta_accel ce dot accum_0",-1,22,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:564
	vcdp->declBus(c+100,"TestAccel vta_accel ce dot accum_1",-1,22,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:566
	vcdp->declBus(c+101,"TestAccel vta_accel ce dot accum_2",-1,22,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:568
	vcdp->declBus(c+102,"TestAccel vta_accel ce dot accum_3",-1,22,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:570
	vcdp->declBus(c+103,"TestAccel vta_accel ce dot accum_4",-1,22,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:572
	vcdp->declBus(c+104,"TestAccel vta_accel ce dot accum_5",-1,22,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:574
	vcdp->declBus(c+105,"TestAccel vta_accel ce dot accum_6",-1,22,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_14 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:576
	vcdp->declBus(c+51,"TestAccel vta_accel ce dot accum_7",-1,22,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_15 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:578
	vcdp->declBus(c+106,"TestAccel vta_accel ce dot cnt",-1,3,0);
	// Tracing: TestAccel vta_accel ce dot _RAND_16 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:580
	// Tracing: TestAccel vta_accel ce dot _T_206 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:581
	// Tracing: TestAccel vta_accel ce dot _T_207 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:582
	// Tracing: TestAccel vta_accel ce dot _GEN_17 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:583
	// Tracing: TestAccel vta_accel ce dot _T_208 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:584
	// Tracing: TestAccel vta_accel ce dot _T_209 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:585
	// Tracing: TestAccel vta_accel ce dot _GEN_18 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:586
	// Tracing: TestAccel vta_accel ce dot _T_210 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:587
	// Tracing: TestAccel vta_accel ce dot _T_211 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:588
	// Tracing: TestAccel vta_accel ce dot _GEN_19 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:589
	// Tracing: TestAccel vta_accel ce dot _T_212 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:590
	// Tracing: TestAccel vta_accel ce dot _T_213 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:591
	// Tracing: TestAccel vta_accel ce dot _GEN_20 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:592
	// Tracing: TestAccel vta_accel ce dot _T_214 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:593
	// Tracing: TestAccel vta_accel ce dot _T_215 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:594
	// Tracing: TestAccel vta_accel ce dot _GEN_21 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:595
	// Tracing: TestAccel vta_accel ce dot _T_216 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:596
	// Tracing: TestAccel vta_accel ce dot _T_217 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:597
	// Tracing: TestAccel vta_accel ce dot _GEN_22 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:598
	// Tracing: TestAccel vta_accel ce dot _T_218 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:599
	// Tracing: TestAccel vta_accel ce dot _T_219 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:600
	// Tracing: TestAccel vta_accel ce dot _GEN_23 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:601
	// Tracing: TestAccel vta_accel ce dot _T_220 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:602
	// Tracing: TestAccel vta_accel ce dot _T_222 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:603
	// Tracing: TestAccel vta_accel ce dot _T_223 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:604
	// Tracing: TestAccel vta_accel ce dot _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:605
	// Tracing: TestAccel vta_accel ce dot _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:606
	// Tracing: TestAccel vta_accel ce dot _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:607
	// Tracing: TestAccel vta_accel ce dot _GEN_3 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:608
	// Tracing: TestAccel vta_accel ce dot _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:609
	// Tracing: TestAccel vta_accel ce dot _GEN_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:610
	// Tracing: TestAccel vta_accel ce dot _GEN_6 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:611
	// Tracing: TestAccel vta_accel ce dot _GEN_7 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:612
	// Tracing: TestAccel vta_accel ce dot _GEN_8 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:613
	// Tracing: TestAccel vta_accel ce dot _GEN_9 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:614
	// Tracing: TestAccel vta_accel ce dot _GEN_10 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:615
	// Tracing: TestAccel vta_accel ce dot _GEN_11 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:616
	// Tracing: TestAccel vta_accel ce dot _GEN_12 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:617
	// Tracing: TestAccel vta_accel ce dot _GEN_13 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:618
	// Tracing: TestAccel vta_accel ce dot _GEN_14 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:619
	// Tracing: TestAccel vta_accel ce dot _GEN_15 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:620
	// Tracing: TestAccel vta_accel ce dot _GEN_16 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:621
	vcdp->declBus(c+125,"TestAccel vta_accel ce dot initvar",-1,31,0);
	vcdp->declBit(c+115,"TestAccel vta_accel ce overallAccum clock",-1);
	vcdp->declBit(c+116,"TestAccel vta_accel ce overallAccum reset",-1);
	vcdp->declBit(c+52,"TestAccel vta_accel ce overallAccum io_rst",-1);
	vcdp->declBit(c+53,"TestAccel vta_accel ce overallAccum io_valid",-1);
	vcdp->declBit(c+8,"TestAccel vta_accel ce overallAccum io_ready",-1);
	vcdp->declQuad(c+54,"TestAccel vta_accel ce overallAccum io_in",-1,62,0);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce overallAccum io_sum",-1,63,0);
	vcdp->declQuad(c+9,"TestAccel vta_accel ce overallAccum reg$",-1,63,0);
	// Tracing: TestAccel vta_accel ce overallAccum _RAND_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:879
	vcdp->declBit(c+8,"TestAccel vta_accel ce overallAccum ready",-1);
	// Tracing: TestAccel vta_accel ce overallAccum _RAND_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:881
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_2 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:882
	// Tracing: TestAccel vta_accel ce overallAccum _T_19 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:883
	// Tracing: TestAccel vta_accel ce overallAccum _T_23 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:884
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_0 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:885
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_1 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:886
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_4 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:887
	// Tracing: TestAccel vta_accel ce overallAccum _GEN_5 // Ignored: Inlined leading underscore at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:888
	vcdp->declBus(c+126,"TestAccel vta_accel ce overallAccum initvar",-1,31,0);
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
	vcdp->fullBit(c+4,(((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_145) 
			    | (5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)))));
	vcdp->fullBit(c+5,((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vcdp->fullQuad(c+6,(((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_145)
			      ? ((1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
				  ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1
				  : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2)
			      : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr)),64);
	vcdp->fullBit(c+8,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__ready));
	vcdp->fullQuad(c+9,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024),64);
	vcdp->fullBit(c+11,(((2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
			     | (4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)))));
	vcdp->fullBit(c+12,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0)));
	vcdp->fullBit(c+13,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid));
	vcdp->fullBus(c+14,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles),32);
	vcdp->fullBus(c+15,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2),32);
	vcdp->fullBus(c+16,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3),32);
	vcdp->fullBus(c+17,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4),32);
	vcdp->fullQuad(c+18,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7)) 
			       << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6)))),64);
	vcdp->fullQuad(c+20,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9)) 
			       << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8)))),64);
	vcdp->fullQuad(c+22,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11)) 
			       << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10)))),64);
	vcdp->fullBus(c+24,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0),32);
	vcdp->fullBus(c+25,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1),32);
	vcdp->fullBus(c+26,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5),32);
	vcdp->fullBus(c+27,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6),32);
	vcdp->fullBus(c+28,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7),32);
	vcdp->fullBus(c+29,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8),32);
	vcdp->fullBus(c+30,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9),32);
	vcdp->fullBus(c+31,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10),32);
	vcdp->fullBus(c+32,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11),32);
	vcdp->fullBit(c+33,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start));
	vcdp->fullBus(c+34,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_0)),8);
	vcdp->fullBus(c+35,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_1)),8);
	vcdp->fullBus(c+36,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_2)),8);
	vcdp->fullBus(c+37,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_3)),8);
	vcdp->fullBus(c+38,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_4)),8);
	vcdp->fullBus(c+39,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_5)),8);
	vcdp->fullBus(c+40,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_6)),8);
	vcdp->fullBus(c+41,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_7)),8);
	vcdp->fullBus(c+42,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_0)),8);
	vcdp->fullBus(c+43,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_1)),8);
	vcdp->fullBus(c+44,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_2)),8);
	vcdp->fullBus(c+45,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_3)),8);
	vcdp->fullBus(c+46,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_4)),8);
	vcdp->fullBus(c+47,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_5)),8);
	vcdp->fullBus(c+48,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_6)),8);
	vcdp->fullBus(c+49,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_7)),8);
	vcdp->fullBit(c+50,((8U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__cnt))));
	vcdp->fullBus(c+51,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_7),23);
	vcdp->fullBit(c+52,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)));
	vcdp->fullBit(c+53,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__validReg));
	vcdp->fullQuad(c+54,((VL_ULL(0x7fffffffffffffff) 
			      & (((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[1U])) 
				  << 0x20U) | (QData)((IData)(
							      vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[0U]))))),63);
	vcdp->fullBus(c+56,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state),3);
	vcdp->fullBus(c+57,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2)),8);
	vcdp->fullBus(c+58,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_0),32);
	vcdp->fullBus(c+59,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_1),32);
	vcdp->fullBus(c+60,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_2),32);
	vcdp->fullBus(c+61,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_3),32);
	vcdp->fullBus(c+62,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_4),32);
	vcdp->fullBus(c+63,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_5),32);
	vcdp->fullBus(c+64,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_6),32);
	vcdp->fullBus(c+65,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_7),32);
	vcdp->fullBus(c+66,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_0),32);
	vcdp->fullBus(c+67,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_1),32);
	vcdp->fullBus(c+68,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_2),32);
	vcdp->fullBus(c+69,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_3),32);
	vcdp->fullBus(c+70,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_4),32);
	vcdp->fullBus(c+71,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_5),32);
	vcdp->fullBus(c+72,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_6),32);
	vcdp->fullBus(c+73,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_7),32);
	vcdp->fullBus(c+74,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt),32);
	vcdp->fullQuad(c+75,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1),64);
	vcdp->fullQuad(c+77,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2),64);
	vcdp->fullQuad(c+79,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr),64);
	vcdp->fullBit(c+81,(((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
			     & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_123))));
	vcdp->fullArray(c+82,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg),278);
	vcdp->fullBus(c+91,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_0),16);
	vcdp->fullBus(c+92,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_1),16);
	vcdp->fullBus(c+93,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_2),16);
	vcdp->fullBus(c+94,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_3),16);
	vcdp->fullBus(c+95,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_4),16);
	vcdp->fullBus(c+96,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_5),16);
	vcdp->fullBus(c+97,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_6),16);
	vcdp->fullBus(c+98,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_7),16);
	vcdp->fullBus(c+99,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_0),23);
	vcdp->fullBus(c+100,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_1),23);
	vcdp->fullBus(c+101,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_2),23);
	vcdp->fullBus(c+102,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_3),23);
	vcdp->fullBus(c+103,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_4),23);
	vcdp->fullBus(c+104,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_5),23);
	vcdp->fullBus(c+105,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_6),23);
	vcdp->fullBus(c+106,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__cnt),4);
	vcdp->fullBit(c+107,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid));
	vcdp->fullBit(c+108,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode));
	vcdp->fullBus(c+109,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr),8);
	vcdp->fullBus(c+110,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value),32);
	vcdp->fullBit(c+111,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid));
	vcdp->fullQuad(c+112,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits),64);
	vcdp->fullBit(c+114,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg));
	vcdp->fullBit(c+115,(vlTOPp->clock));
	vcdp->fullBit(c+116,(vlTOPp->reset));
	vcdp->fullBit(c+117,(vlTOPp->sim_clock));
	vcdp->fullBit(c+118,(vlTOPp->sim_wait));
	vcdp->fullBus(c+119,(0U),8);
	vcdp->fullBus(c+120,(8U),32);
	vcdp->fullBus(c+121,(0x20U),32);
	vcdp->fullBus(c+122,(0x40U),32);
	vcdp->fullBus(c+123,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__initvar),32);
	vcdp->fullBus(c+124,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__initvar),32);
	vcdp->fullBus(c+125,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__initvar),32);
	vcdp->fullBus(c+126,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__initvar),32);
    }
}
