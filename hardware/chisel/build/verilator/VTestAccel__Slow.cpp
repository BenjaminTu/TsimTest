// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestAccel.h for the primary calling header

#include "VTestAccel.h"
#include "VTestAccel__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTestAccel) {
    VTestAccel__Syms* __restrict vlSymsp = __VlSymsp = new VTestAccel__Syms(this, name());
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTestAccel::__Vconfigure(VTestAccel__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTestAccel::~VTestAccel() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VTestAccel::_settle__TOP__3(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_settle__TOP__3\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sim_wait = vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_77 
	= ((IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid) 
	   & (~ (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode)));
}

void VTestAccel::_initial__TOP__4(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_initial__TOP__4\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:296
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_0 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state 
	= (1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_0);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_1 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_1;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_2 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_2;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_3 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_3;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_4 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_4;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_5 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_5;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_6 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_6;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_7 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_7;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_8 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_8;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_9 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_9;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_10 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_10;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_11 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_11;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_12 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_12;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_13 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_13;
    // INITIAL at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:915
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_0 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_0;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_1 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__ready 
	= (1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_1);
    // INITIAL at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:1246
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_0 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state 
	= (7U & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_0);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_1 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_1;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_2 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_0 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_2;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_3 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_1 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_3;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_4 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_2 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_4;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_5 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_3 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_5;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_6 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_4 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_6;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_7 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_5 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_7;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_8 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_6 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_8;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_9 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_7 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_9;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_10 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_0 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_10;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_11 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_1 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_11;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_12 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_2 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_12;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_13 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_3 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_13;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_14 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_4 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_14;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_15 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_5 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_15;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_16 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_6 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_16;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_17 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_7 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_17;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_18 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_18;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_19 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_19;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_20 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_20;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_21 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_21;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[0U] 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[1U] 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[2U] 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[3U] 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[4U] 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[5U] 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[6U] 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[7U] 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[8U] 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[0U] 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[0U];
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[1U] 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[1U];
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[2U] 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[2U];
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[3U] 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[3U];
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[4U] 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[4U];
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[5U] 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[5U];
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[6U] 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[6U];
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[7U] 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[7U];
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[8U] 
	= (0x3fffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22[8U]);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_23 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__validReg 
	= (1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_23);
    // INITIAL at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:682
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_0 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_0 
	= (0xffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_0);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_1 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_1 
	= (0xffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_1);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_2 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_2 
	= (0xffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_2);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_3 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_3 
	= (0xffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_3);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_4 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_4 
	= (0xffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_4);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_5 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_5 
	= (0xffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_5);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_6 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_6 
	= (0xffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_6);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_7 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_7 
	= (0xffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_7);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_8 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_0 
	= (0x7fffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_8);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_9 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_1 
	= (0x7fffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_9);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_10 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_2 
	= (0x7fffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_10);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_11 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_3 
	= (0x7fffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_11);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_12 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_4 
	= (0x7fffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_12);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_13 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_5 
	= (0x7fffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_13);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_14 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_6 
	= (0x7fffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_14);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_15 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_7 
	= (0x7fffffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_15);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_16 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__cnt 
	= (0xfU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_16);
}

void VTestAccel::_settle__TOP__5(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_settle__TOP__5\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp26,95,0,3);
    VL_SIGW(__Vtemp27,95,0,3);
    VL_SIGW(__Vtemp28,95,0,3);
    VL_SIGW(__Vtemp29,95,0,3);
    // Body
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_74 
	= (1U & (~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80 
	= ((~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_134 
	= ((IData)(1U) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_139 
	= (VL_ULL(8) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_142 
	= (VL_ULL(8) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_206 
	= (0xffffU & ((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_0) 
		      * (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_0)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_207 
	= (0xffffU & ((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_1) 
		      * (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_1)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_209 
	= (0xffffU & ((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_2) 
		      * (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_2)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_211 
	= (0xffffU & ((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_3) 
		      * (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_3)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_213 
	= (0xffffU & ((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_4) 
		      * (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_4)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_215 
	= (0xffffU & ((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_5) 
		      * (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_5)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_217 
	= (0xffffU & ((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_6) 
		      * (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_6)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_219 
	= (0xffffU & ((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_7) 
		      * (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_7)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_112 
	= (0U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_113 
	= (1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_114 
	= (2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_115 
	= (3U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_116 
	= (4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_117 
	= (5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_118 
	= (6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_145 
	= ((1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   | (3U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_157 
	= ((2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_199 
	= ((4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_253 
	= ((IData)(1U) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_123 
	= (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt 
	   == (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3 
	       - (IData)(1U)));
    VL_EXTEND_WQ(65,64, __Vtemp26, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024);
    VL_EXTEND_WQ(65,63, __Vtemp27, (VL_ULL(0x7fffffffffffffff) 
				    & (((QData)((IData)(
							vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[1U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[0U])))));
    VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
    VL_EXTEND_WQ(65,64, __Vtemp29, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1[0U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)
	    ? 0U : ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__validReg)
		     ? __Vtemp28[0U] : __Vtemp29[0U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1[1U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)
	    ? 0U : ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__validReg)
		     ? __Vtemp28[1U] : __Vtemp29[1U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1[2U] 
	= (1U & ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)
		  ? 0U : ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__validReg)
			   ? __Vtemp28[2U] : __Vtemp29[2U])));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_223 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__cnt)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_235 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80) 
	   & (~ (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80) 
	   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid 
	= ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_123));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start 
	= ((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   & ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	      & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_123)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_159 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_165 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (4U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_171 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (8U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_177 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0xcU == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_183 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0x10U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_189 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0x14U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_195 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0x18U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_201 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0x1cU == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_207 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0x20U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_213 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0x24U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_219 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0x28U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_225 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156) 
	   & (0x2cU == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_4 
	= (0xffffffU & ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start)
			 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_1
			 : (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_0 
			    + (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_1))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_6 
	= (0xffffffU & ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start)
			 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_2
			 : (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_1 
			    + (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_2))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_8 
	= (0xffffffU & ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start)
			 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_3
			 : (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_2 
			    + (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_3))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_10 
	= (0xffffffU & ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start)
			 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_4
			 : (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_3 
			    + (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_4))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_12 
	= (0xffffffU & ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start)
			 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_5
			 : (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_4 
			    + (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_5))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_14 
	= (0xffffffU & ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start)
			 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_6
			 : (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_5 
			    + (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_6))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_16 
	= (0xffffffU & ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start)
			 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_7
			 : (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_6 
			    + (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_7))));
}

void VTestAccel::_eval_initial(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_eval_initial\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__sim_clock = vlTOPp->sim_clock;
    vlTOPp->_initial__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VTestAccel::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::final\n"); );
    // Variables
    VTestAccel__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTestAccel::_eval_settle(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_eval_settle\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

void VTestAccel::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    sim_clock = VL_RAND_RESET_I(1);
    sim_wait = VL_RAND_RESET_I(1);
    TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid = VL_RAND_RESET_I(1);
    TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode = VL_RAND_RESET_I(1);
    TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr = VL_RAND_RESET_I(8);
    TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value = VL_RAND_RESET_I(32);
    TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid = VL_RAND_RESET_I(1);
    TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits = VL_RAND_RESET_Q(64);
    TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Freset = VL_RAND_RESET_I(1);
    TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fwait = VL_RAND_RESET_I(8);
    TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fexit = VL_RAND_RESET_I(8);
    TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg = VL_RAND_RESET_I(1);
    TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freset = VL_RAND_RESET_I(1);
    TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_valid = VL_RAND_RESET_I(8);
    TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_opcode = VL_RAND_RESET_I(8);
    TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_addr = VL_RAND_RESET_I(8);
    TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_value = VL_RAND_RESET_I(32);
    TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Freset = VL_RAND_RESET_I(1);
    TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_valid = VL_RAND_RESET_I(8);
    TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_value = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__state = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_0 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_74 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_77 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_1 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_2 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_3 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_4 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_5 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_6 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_7 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_8 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_9 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_10 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_11 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_12 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_159 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_165 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_171 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_177 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_183 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_189 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_195 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_201 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_207 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_213 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_219 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_225 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_13 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__rf__DOT___T_235 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__rf__DOT__initvar = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__state = VL_RAND_RESET_I(3);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_0 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_1 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_0 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_2 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_1 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_3 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_2 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_4 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_3 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_5 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_4 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_6 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_5 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_7 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_6 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_8 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_7 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_9 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_0 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_10 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_1 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_11 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_2 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_12 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_3 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_13 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_4 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_14 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_5 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_15 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_6 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_16 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_7 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_17 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_18 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_19 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_20 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_21 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_112 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_113 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_114 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_115 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_116 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_117 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_118 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_123 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_134 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_139 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_142 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_145 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_157 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_199 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(278,TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg);
    VL_RAND_RESET_W(288,TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__validReg = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_23 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_253 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__initvar = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_0 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_0 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_1 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_1 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_2 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_2 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_3 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_3 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_4 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_4 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_5 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_5 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_6 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_6 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_7 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_7 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_0 = VL_RAND_RESET_I(23);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_8 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_1 = VL_RAND_RESET_I(23);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_9 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_2 = VL_RAND_RESET_I(23);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_10 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_3 = VL_RAND_RESET_I(23);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_11 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_4 = VL_RAND_RESET_I(23);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_12 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_5 = VL_RAND_RESET_I(23);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_13 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_6 = VL_RAND_RESET_I(23);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_14 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_7 = VL_RAND_RESET_I(23);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_15 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__cnt = VL_RAND_RESET_I(4);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_16 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_206 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_207 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_209 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_211 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_213 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_215 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_217 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_219 = VL_RAND_RESET_I(16);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_223 = VL_RAND_RESET_I(4);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_4 = VL_RAND_RESET_I(24);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_6 = VL_RAND_RESET_I(24);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_8 = VL_RAND_RESET_I(24);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_10 = VL_RAND_RESET_I(24);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_12 = VL_RAND_RESET_I(24);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_14 = VL_RAND_RESET_I(24);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___GEN_16 = VL_RAND_RESET_I(24);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__initvar = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_0 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__ready = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65,TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__initvar = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
