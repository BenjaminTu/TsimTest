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
    // Body
    {
	vcdp->chgBit(c+1,(((~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)) 
			   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid))));
	vcdp->chgBit(c+2,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state));
	vcdp->chgBus(c+3,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata),32);
	vcdp->chgBit(c+4,(((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_145) 
			   | (5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)))));
	vcdp->chgBit(c+5,((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vcdp->chgQuad(c+6,(((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_145)
			     ? ((1U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
				 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1
				 : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2)
			     : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr)),64);
	vcdp->chgBit(c+8,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__ready));
	vcdp->chgQuad(c+9,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024),64);
	vcdp->chgBit(c+11,(((2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
			    | (4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)))));
	vcdp->chgBit(c+12,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0)));
	vcdp->chgBit(c+13,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid));
	vcdp->chgBus(c+14,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles),32);
	vcdp->chgBus(c+15,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2),32);
	vcdp->chgBus(c+16,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3),32);
	vcdp->chgBus(c+17,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4),32);
	vcdp->chgQuad(c+18,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7)) 
			      << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6)))),64);
	vcdp->chgQuad(c+20,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9)) 
			      << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8)))),64);
	vcdp->chgQuad(c+22,((((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11)) 
			      << 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10)))),64);
	vcdp->chgBus(c+24,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0),32);
	vcdp->chgBus(c+25,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1),32);
	vcdp->chgBus(c+26,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5),32);
	vcdp->chgBus(c+27,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6),32);
	vcdp->chgBus(c+28,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7),32);
	vcdp->chgBus(c+29,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8),32);
	vcdp->chgBus(c+30,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9),32);
	vcdp->chgBus(c+31,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10),32);
	vcdp->chgBus(c+32,(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11),32);
	vcdp->chgBit(c+33,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start));
	vcdp->chgBus(c+34,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_0)),8);
	vcdp->chgBus(c+35,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_1)),8);
	vcdp->chgBus(c+36,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_2)),8);
	vcdp->chgBus(c+37,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_3)),8);
	vcdp->chgBus(c+38,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_4)),8);
	vcdp->chgBus(c+39,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_5)),8);
	vcdp->chgBus(c+40,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_6)),8);
	vcdp->chgBus(c+41,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_7)),8);
	vcdp->chgBus(c+42,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_0)),8);
	vcdp->chgBus(c+43,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_1)),8);
	vcdp->chgBus(c+44,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_2)),8);
	vcdp->chgBus(c+45,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_3)),8);
	vcdp->chgBus(c+46,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_4)),8);
	vcdp->chgBus(c+47,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_5)),8);
	vcdp->chgBus(c+48,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_6)),8);
	vcdp->chgBus(c+49,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_7)),8);
	vcdp->chgBit(c+50,((8U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__cnt))));
	vcdp->chgBus(c+51,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_7),23);
	vcdp->chgBit(c+52,((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)));
	vcdp->chgBit(c+53,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__validReg));
	vcdp->chgQuad(c+54,((VL_ULL(0x7fffffffffffffff) 
			     & (((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[1U])) 
				 << 0x20U) | (QData)((IData)(
							     vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg[0U]))))),63);
	vcdp->chgBus(c+56,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state),3);
	vcdp->chgBus(c+57,((0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2)),8);
	vcdp->chgBus(c+58,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_0),32);
	vcdp->chgBus(c+59,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_1),32);
	vcdp->chgBus(c+60,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_2),32);
	vcdp->chgBus(c+61,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_3),32);
	vcdp->chgBus(c+62,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_4),32);
	vcdp->chgBus(c+63,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_5),32);
	vcdp->chgBus(c+64,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_6),32);
	vcdp->chgBus(c+65,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_7),32);
	vcdp->chgBus(c+66,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_0),32);
	vcdp->chgBus(c+67,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_1),32);
	vcdp->chgBus(c+68,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_2),32);
	vcdp->chgBus(c+69,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_3),32);
	vcdp->chgBus(c+70,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_4),32);
	vcdp->chgBus(c+71,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_5),32);
	vcdp->chgBus(c+72,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_6),32);
	vcdp->chgBus(c+73,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_7),32);
	vcdp->chgBus(c+74,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt),32);
	vcdp->chgQuad(c+75,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1),64);
	vcdp->chgQuad(c+77,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2),64);
	vcdp->chgQuad(c+79,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr),64);
	vcdp->chgBit(c+81,(((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
			    & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_123))));
	vcdp->chgArray(c+82,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg),278);
	vcdp->chgBus(c+91,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_0),16);
	vcdp->chgBus(c+92,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_1),16);
	vcdp->chgBus(c+93,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_2),16);
	vcdp->chgBus(c+94,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_3),16);
	vcdp->chgBus(c+95,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_4),16);
	vcdp->chgBus(c+96,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_5),16);
	vcdp->chgBus(c+97,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_6),16);
	vcdp->chgBus(c+98,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_7),16);
	vcdp->chgBus(c+99,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_0),23);
	vcdp->chgBus(c+100,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_1),23);
	vcdp->chgBus(c+101,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_2),23);
	vcdp->chgBus(c+102,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_3),23);
	vcdp->chgBus(c+103,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_4),23);
	vcdp->chgBus(c+104,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_5),23);
	vcdp->chgBus(c+105,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_6),23);
	vcdp->chgBus(c+106,(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__cnt),4);
    }
}

void VTestAccel::traceChgThis__3(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+107,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid));
	vcdp->chgBit(c+108,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode));
	vcdp->chgBus(c+109,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr),8);
	vcdp->chgBus(c+110,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value),32);
	vcdp->chgBit(c+111,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid));
	vcdp->chgQuad(c+112,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits),64);
    }
}

void VTestAccel::traceChgThis__4(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+114,(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg));
    }
}

void VTestAccel::traceChgThis__5(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+115,(vlTOPp->clock));
	vcdp->chgBit(c+116,(vlTOPp->reset));
	vcdp->chgBit(c+117,(vlTOPp->sim_clock));
	vcdp->chgBit(c+118,(vlTOPp->sim_wait));
    }
}
