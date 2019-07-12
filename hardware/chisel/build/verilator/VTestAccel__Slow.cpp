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

void VTestAccel::_initial__TOP__3(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_initial__TOP__3\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:576
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___RAND_0 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___RAND_0;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___RAND_1 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__ready 
	= (1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___RAND_1);
    // INITIAL at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:834
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_0 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state 
	= (7U & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_0);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_1 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_1;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_2 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_2;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_3 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_3;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_4 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_4;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_5 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_5;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_6 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_6;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_7 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_7;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_8 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__ready 
	= (1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_8);
    // INITIAL at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:576
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_0 
	= (((QData)((IData)(VL_RANDOM_I(32))) << 0x20U) 
	   | (QData)((IData)(VL_RANDOM_I(32))));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_0;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_1 
	= VL_RANDOM_I(32);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__ready 
	= (1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_1);
    // INITIAL at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:298
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
}

void VTestAccel::_settle__TOP__4(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_settle__TOP__4\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp48,95,0,3);
    VL_SIGW(__Vtemp49,127,0,4);
    VL_SIGW(__Vtemp50,127,0,4);
    VL_SIGW(__Vtemp51,127,0,4);
    VL_SIGW(__Vtemp52,95,0,3);
    VL_SIGW(__Vtemp53,95,0,3);
    VL_SIGW(__Vtemp54,95,0,3);
    VL_SIGW(__Vtemp62,95,0,3);
    VL_SIGW(__Vtemp64,319,0,10);
    VL_SIGW(__Vtemp65,319,0,10);
    VL_SIGW(__Vtemp67,95,0,3);
    VL_SIGW(__Vtemp68,95,0,3);
    VL_SIGW(__Vtemp69,95,0,3);
    // Body
    vlTOPp->sim_wait = vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_77 
	= ((IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid) 
	   & (~ (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_110 
	= ((IData)(1U) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_115 
	= (VL_ULL(1) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_118 
	= (VL_ULL(1) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_159 
	= ((IData)(1U) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_88 
	= (0U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_89 
	= (1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_90 
	= (2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_91 
	= (3U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_92 
	= (4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_93 
	= (5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_94 
	= (6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_121 
	= ((1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   | (3U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)));
    VL_EXTEND_WQ(65,64, __Vtemp48, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
    VL_EXTEND_WQ(128,64, __Vtemp49, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1);
    VL_EXTEND_WQ(128,64, __Vtemp50, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2);
    VL_MUL_W(4, __Vtemp51, __Vtemp49, __Vtemp50);
    VL_EXTEND_WQ(65,63, __Vtemp52, (VL_ULL(0x7fffffffffffffff) 
				    & (((QData)((IData)(
							__Vtemp51[1U])) 
					<< 0x20U) | (QData)((IData)(
								    __Vtemp51[0U])))));
    VL_ADD_W(3, __Vtemp53, __Vtemp48, __Vtemp52);
    VL_EXTEND_WQ(65,64, __Vtemp54, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___GEN_2[0U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5)
	    ? 0U : ((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
		     ? __Vtemp53[0U] : __Vtemp54[0U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___GEN_2[1U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5)
	    ? 0U : ((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
		     ? __Vtemp53[1U] : __Vtemp54[1U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___GEN_2[2U] 
	= (1U & ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5)
		  ? 0U : ((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
			   ? __Vtemp53[2U] : __Vtemp54[2U])));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99 
	= (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt 
	   == (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3 
	       - (IData)(1U)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_74 
	= (1U & (~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80 
	= ((~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid 
	= ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid 
	= ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_235 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80) 
	   & (~ (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80) 
	   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode));
    VL_EXTEND_WQ(65,64, __Vtemp62, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024);
    VL_EXTEND_WQ(319,64, __Vtemp64, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
    VL_SHIFTL_WWI(319,319,8, __Vtemp65, __Vtemp64, 
		  (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2));
    VL_EXTEND_WQ(65,63, __Vtemp67, (VL_ULL(0x7fffffffffffffff) 
				    & (((QData)((IData)(
							__Vtemp65[1U])) 
					<< 0x20U) | (QData)((IData)(
								    __Vtemp65[0U])))));
    VL_ADD_W(3, __Vtemp68, __Vtemp62, __Vtemp67);
    VL_EXTEND_WQ(65,64, __Vtemp69, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_2[0U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)
	    ? 0U : ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid)
		     ? __Vtemp68[0U] : __Vtemp69[0U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_2[1U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)
	    ? 0U : ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid)
		     ? __Vtemp68[1U] : __Vtemp69[1U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_2[2U] 
	= (1U & ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)
		  ? 0U : ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid)
			   ? __Vtemp68[2U] : __Vtemp69[2U])));
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
}

void VTestAccel::_eval_initial(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_eval_initial\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__sim_clock = vlTOPp->sim_clock;
    vlTOPp->_initial__TOP__3(vlSymsp);
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
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
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
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__state = VL_RAND_RESET_I(3);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_0 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_1 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_2 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_3 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_4 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_5 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_6 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_7 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_88 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_89 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_90 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_91 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_92 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_93 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_94 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_110 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_115 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_118 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_121 = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___T_159 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__ready = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_8 = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__initvar = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___RAND_0 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__ready = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___RAND_1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65,TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___GEN_2);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__initvar = VL_RAND_RESET_I(32);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_0 = VL_RAND_RESET_Q(64);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__ready = VL_RAND_RESET_I(1);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65,TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_2);
    TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__initvar = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
