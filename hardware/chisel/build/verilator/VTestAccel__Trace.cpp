// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestAccel__Syms.h"


//======================

void VTestAccel::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTestAccel* t=(VTestAccel*)userthis;
    VTestAccel__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTestAccel::traceChgThis(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTestAccel::traceChgThis__2(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp81,127,0,4);
    VL_SIGW(__Vtemp82,127,0,4);
    VL_SIGW(__Vtemp83,127,0,4);
    VL_SIGW(__Vtemp85,319,0,10);
    VL_SIGW(__Vtemp86,319,0,10);
    // Body
    {
	vcdp->chgBit(c+1,(((~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)) 
			   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid))));
	vcdp->chgBit(c+2,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state));
	vcdp->chgBus(c+3,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata),32);
	vcdp->chgBit(c+4,(((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_121) 
			   | (5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)))));
	vcdp->chgBit(c+5,((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vcdp->chgQuad(c+6,(((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_121)
			     ? ((1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
				 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1
				 : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2)
			     : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr)),64);
	vcdp->chgBit(c+8,((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vcdp->chgQuad(c+9,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024),64);
	vcdp->chgBit(c+11,(((2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
			    | (4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)))));
	vcdp->chgBit(c+12,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0)));
	vcdp->chgBit(c+13,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_finish));
	vcdp->chgBit(c+14,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid));
	vcdp->chgBus(c+15,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles),32);
	vcdp->chgBus(c+16,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2),32);
	vcdp->chgBus(c+17,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3),32);
	vcdp->chgBus(c+18,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4),32);
	vcdp->chgBus(c+19,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5),32);
	vcdp->chgQuad(c+20,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7)) 
			      << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6)))),64);
	vcdp->chgQuad(c+22,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9)) 
			      << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8)))),64);
	vcdp->chgQuad(c+24,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11)) 
			      << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10)))),64);
	vcdp->chgBus(c+26,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0),32);
	vcdp->chgBus(c+27,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1),32);
	vcdp->chgBus(c+28,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6),32);
	vcdp->chgBus(c+29,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7),32);
	vcdp->chgBus(c+30,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8),32);
	vcdp->chgBus(c+31,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9),32);
	vcdp->chgBus(c+32,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10),32);
	vcdp->chgBus(c+33,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11),32);
	vcdp->chgBit(c+34,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5)));
	VL_EXTEND_WQ(128,64, __Vtemp81, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1);
	VL_EXTEND_WQ(128,64, __Vtemp82, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2);
	VL_MUL_W(4, __Vtemp83, __Vtemp81, __Vtemp82);
	vcdp->chgQuad(c+35,((VL_ULL(0x7fffffffffffffff) 
			     & (((QData)((IData)(__Vtemp83[1U])) 
				 << 0x20U) | (QData)((IData)(
							     __Vtemp83[0U]))))),63);
	vcdp->chgQuad(c+37,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024),64);
	vcdp->chgBit(c+39,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)));
	vcdp->chgBit(c+40,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid));
	VL_EXTEND_WQ(319,64, __Vtemp85, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
	VL_SHIFTL_WWI(319,319,8, __Vtemp86, __Vtemp85, 
		      (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2));
	vcdp->chgQuad(c+41,((VL_ULL(0x7fffffffffffffff) 
			     & (((QData)((IData)(__Vtemp86[1U])) 
				 << 0x20U) | (QData)((IData)(
							     __Vtemp86[0U]))))),63);
	vcdp->chgBus(c+43,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state),3);
	vcdp->chgQuad(c+44,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1),64);
	vcdp->chgQuad(c+46,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2),64);
	vcdp->chgBus(c+48,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt),32);
	vcdp->chgQuad(c+49,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1),64);
	vcdp->chgQuad(c+51,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2),64);
	vcdp->chgQuad(c+53,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr),64);
	vcdp->chgBit(c+55,(((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
			    & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99))));
    }
}

void VTestAccel::traceChgThis__3(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+56,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid));
	vcdp->chgBit(c+57,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode));
	vcdp->chgBus(c+58,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr),8);
	vcdp->chgBus(c+59,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value),32);
	vcdp->chgBit(c+60,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid));
	vcdp->chgQuad(c+61,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits),64);
    }
}

void VTestAccel::traceChgThis__4(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+63,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg));
    }
}

void VTestAccel::traceChgThis__5(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+64,(vlTOPp->clock));
	vcdp->chgBit(c+65,(vlTOPp->reset));
	vcdp->chgBit(c+66,(vlTOPp->sim_clock));
	vcdp->chgBit(c+67,(vlTOPp->sim_wait));
    }
}
