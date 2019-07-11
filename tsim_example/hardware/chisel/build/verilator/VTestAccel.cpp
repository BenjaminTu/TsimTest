// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestAccel.h for the primary calling header

#include "VTestAccel.h"
#include "VTestAccel__Syms.h"

#include "verilated_dpi.h"


//--------------------


void VTestAccel::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestAccel::eval\n"); );
    VTestAccel__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void VTestAccel::_eval_initial_loop(VTestAccel__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestAccel::__Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI_TOP(CData& sim_wait, CData& sim_exit) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::__Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI_TOP\n"); );
    // Body
    unsigned char sim_wait__Vcvt;
    unsigned char sim_exit__Vcvt;
    VTASimDPI(&sim_wait__Vcvt, &sim_exit__Vcvt);
    sim_wait = (0xffU & sim_wait__Vcvt);
    sim_exit = (0xffU & sim_exit__Vcvt);
}

VL_INLINE_OPT void VTestAccel::__Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI_TOP(CData& req_valid, CData& req_opcode, CData& req_addr, IData& req_value, const CData req_deq, const CData resp_valid, const IData resp_value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::__Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI_TOP\n"); );
    // Body
    unsigned char req_valid__Vcvt;
    unsigned char req_opcode__Vcvt;
    unsigned char req_addr__Vcvt;
    unsigned int req_value__Vcvt;
    unsigned char req_deq__Vcvt;
    req_deq__Vcvt = req_deq;
    unsigned char resp_valid__Vcvt;
    resp_valid__Vcvt = resp_valid;
    unsigned int resp_value__Vcvt;
    resp_value__Vcvt = resp_value;
    VTAHostDPI(&req_valid__Vcvt, &req_opcode__Vcvt, &req_addr__Vcvt, &req_value__Vcvt, req_deq__Vcvt, resp_valid__Vcvt, resp_value__Vcvt);
    req_valid = (0xffU & req_valid__Vcvt);
    req_opcode = (0xffU & req_opcode__Vcvt);
    req_addr = (0xffU & req_addr__Vcvt);
    req_value = req_value__Vcvt;
}

VL_INLINE_OPT void VTestAccel::__Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI_TOP(const CData req_valid, const CData req_opcode, const CData req_len, const QData req_addr, const CData wr_valid, const QData wr_value, CData& rd_valid, QData& rd_value, const CData rd_ready) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::__Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI_TOP\n"); );
    // Body
    unsigned char req_valid__Vcvt;
    req_valid__Vcvt = req_valid;
    unsigned char req_opcode__Vcvt;
    req_opcode__Vcvt = req_opcode;
    unsigned char req_len__Vcvt;
    req_len__Vcvt = req_len;
    unsigned long long req_addr__Vcvt;
    req_addr__Vcvt = req_addr;
    unsigned char wr_valid__Vcvt;
    wr_valid__Vcvt = wr_valid;
    unsigned long long wr_value__Vcvt;
    wr_value__Vcvt = wr_value;
    unsigned char rd_valid__Vcvt;
    unsigned long long rd_value__Vcvt;
    unsigned char rd_ready__Vcvt;
    rd_ready__Vcvt = rd_ready;
    VTAMemDPI(req_valid__Vcvt, req_opcode__Vcvt, req_len__Vcvt, req_addr__Vcvt, wr_valid__Vcvt, wr_value__Vcvt, &rd_valid__Vcvt, &rd_value__Vcvt, rd_ready__Vcvt);
    rd_valid = (0xffU & rd_valid__Vcvt);
    rd_value = rd_value__Vcvt;
}

VL_INLINE_OPT void VTestAccel::_sequent__TOP__1(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_sequent__TOP__1\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_valid,7,0);
    VL_SIG8(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_opcode,7,0);
    VL_SIG8(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_addr,7,0);
    VL_SIG8(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI__2__rd_valid,7,0);
    VL_SIG8(__Vdly__TestAccel__DOT__vta_accel__DOT__rf__DOT__state,0,0);
    VL_SIG8(__Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state,2,0);
    VL_SIG(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_value,31,0);
    VL_SIGW(__Vtemp2,95,0,3);
    VL_SIGW(__Vtemp4,319,0,10);
    VL_SIGW(__Vtemp5,319,0,10);
    VL_SIGW(__Vtemp7,95,0,3);
    VL_SIGW(__Vtemp8,95,0,3);
    VL_SIGW(__Vtemp9,95,0,3);
    VL_SIGW(__Vtemp11,95,0,3);
    VL_SIGW(__Vtemp12,127,0,4);
    VL_SIGW(__Vtemp13,127,0,4);
    VL_SIGW(__Vtemp14,127,0,4);
    VL_SIGW(__Vtemp15,95,0,3);
    VL_SIGW(__Vtemp16,95,0,3);
    VL_SIGW(__Vtemp17,95,0,3);
    VL_SIGW(__Vtemp20,95,0,3);
    VL_SIGW(__Vtemp21,127,0,4);
    VL_SIGW(__Vtemp22,127,0,4);
    VL_SIGW(__Vtemp23,127,0,4);
    VL_SIGW(__Vtemp24,95,0,3);
    VL_SIGW(__Vtemp25,95,0,3);
    VL_SIGW(__Vtemp26,95,0,3);
    VL_SIGW(__Vtemp34,95,0,3);
    VL_SIGW(__Vtemp36,319,0,10);
    VL_SIGW(__Vtemp37,319,0,10);
    VL_SIGW(__Vtemp39,95,0,3);
    VL_SIGW(__Vtemp40,95,0,3);
    VL_SIGW(__Vtemp41,95,0,3);
    VL_SIG64(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI__2__rd_value,63,0);
    // Body
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:581
    if (VL_UNLIKELY((((~ vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4) 
		      & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid)) 
		     & (~ (IData)(vlTOPp->reset))))) {
	VL_EXTEND_WQ(65,64, __Vtemp2, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024);
	VL_EXTEND_WQ(319,64, __Vtemp4, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
	VL_SHIFTL_WWI(319,319,8, __Vtemp5, __Vtemp4, 
		      (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2));
	VL_EXTEND_WQ(65,63, __Vtemp7, (VL_ULL(0x7fffffffffffffff) 
				       & (((QData)((IData)(
							   __Vtemp5[1U])) 
					   << 0x20U) 
					  | (QData)((IData)(
							    __Vtemp5[0U])))));
	VL_ADD_W(3, __Vtemp8, __Vtemp2, __Vtemp7);
	__Vtemp9[0U] = __Vtemp8[0U];
	__Vtemp9[1U] = __Vtemp8[1U];
	__Vtemp9[2U] = (1U & __Vtemp8[2U]);
	VL_FWRITEF(0x80000002U,"slice sum: %20# \n",
		   65,__Vtemp9);
    }
    __Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state;
    __Vdly__TestAccel__DOT__vta_accel__DOT__rf__DOT__state 
	= vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state;
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:581
    if (VL_UNLIKELY((((~ vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5) 
		      & (5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))) 
		     & (~ (IData)(vlTOPp->reset))))) {
	VL_EXTEND_WQ(65,64, __Vtemp11, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
	VL_EXTEND_WQ(128,64, __Vtemp12, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1);
	VL_EXTEND_WQ(128,64, __Vtemp13, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2);
	VL_MUL_W(4, __Vtemp14, __Vtemp12, __Vtemp13);
	VL_EXTEND_WQ(65,63, __Vtemp15, (VL_ULL(0x7fffffffffffffff) 
					& (((QData)((IData)(
							    __Vtemp14[1U])) 
					    << 0x20U) 
					   | (QData)((IData)(
							     __Vtemp14[0U])))));
	VL_ADD_W(3, __Vtemp16, __Vtemp11, __Vtemp15);
	__Vtemp17[0U] = __Vtemp16[0U];
	__Vtemp17[1U] = __Vtemp16[1U];
	__Vtemp17[2U] = (1U & __Vtemp16[2U]);
	VL_FWRITEF(0x80000002U,"slice sum: %20# \n",
		   65,__Vtemp17);
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:88
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Freset))) {
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_valid = 0U;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_value = VL_ULL(0);
    } else {
	vlTOPp->__Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI_TOP(
										((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_121) 
										| (5U 
										== (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))), 
										(5U 
										== (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)), 0U, 
										((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_121)
										 ? 
										((1U 
										== (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
										 ? vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1
										 : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2)
										 : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr), 
										(6U 
										== (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)), vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024, __Vtask_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI__2__rd_valid, __Vtask_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI__2__rd_value, 
										((2U 
										== (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
										| (4U 
										== (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))));
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_valid 
	    = __Vtask_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI__2__rd_valid;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_value 
	    = __Vtask_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI__2__rd_value;
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    if (VL_UNLIKELY((((2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
		      & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid)) 
		     & (~ (IData)(vlTOPp->reset))))) {
	VL_FWRITEF(0x80000002U,"slice inputs1: %3# \n",
		   8,(0xffU & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits)));
    }
    if (VL_UNLIKELY((((4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
		      & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid)) 
		     & (~ (IData)(vlTOPp->reset))))) {
	VL_FWRITEF(0x80000002U,"slice inputs2: %3#\n\n",
		   8,(0xffU & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits)));
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:79
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freset))) {
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_valid = 0U;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_opcode = 0U;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_addr = 0U;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_value = 0U;
    } else {
	vlTOPp->__Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI_TOP(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_valid, __Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_opcode, __Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_addr, __Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_value, 
										((~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)) 
										& (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid)), (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state), vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata);
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_valid 
	    = __Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_valid;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_opcode 
	    = __Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_opcode;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_addr 
	    = __Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_addr;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_value 
	    = __Vtask_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI__1__req_value;
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:67
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode 
	= (1U & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_opcode));
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    if ((0U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt = 0U;
    } else {
	if ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt 
		= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_159;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    if (vlTOPp->reset) {
	__Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_88) {
	    if ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0)) {
		__Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state = 1U;
	    }
	} else {
	    if (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_89) {
		__Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state = 2U;
	    } else {
		if (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_90) {
		    if (vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid) {
			__Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state = 3U;
		    }
		} else {
		    if (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_91) {
			__Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state = 4U;
		    } else {
			if (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_92) {
			    if (vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid) {
				__Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state = 5U;
			    }
			} else {
			    if (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_93) {
				__Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state = 6U;
			    } else {
				if (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_94) {
				    __Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state 
					= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99)
					    ? 0U : 1U);
				}
			    }
			}
		    }
		}
	    }
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	__Vdly__TestAccel__DOT__vta_accel__DOT__rf__DOT__state = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_74) {
	    if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_77) {
		__Vdly__TestAccel__DOT__vta_accel__DOT__rf__DOT__state = 1U;
	    }
	} else {
	    if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state) {
		__Vdly__TestAccel__DOT__vta_accel__DOT__rf__DOT__state = 0U;
	    }
	}
    }
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state 
	= __Vdly__TestAccel__DOT__vta_accel__DOT__rf__DOT__state;
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:581
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024 
	= ((IData)(vlTOPp->reset) ? VL_ULL(0) : (((QData)((IData)(
								  vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___GEN_1[1U])) 
						  << 0x20U) 
						 | (QData)((IData)(
								   vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___GEN_1[0U]))));
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    if (((2U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	 & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid))) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1 
	    = (QData)((IData)((0xffU & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits))));
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    if (((4U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	 & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid))) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2 
	    = (QData)((IData)((0xffU & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits))));
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:68
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Freset 
	= vlTOPp->reset;
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:581
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024 
	= ((IData)(vlTOPp->reset) ? VL_ULL(0) : (((QData)((IData)(
								  vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1[1U])) 
						  << 0x20U) 
						 | (QData)((IData)(
								   vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1[0U]))));
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    if ((0U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr 
	    = (((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11)) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10)));
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    if ((0U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1 
	    = (((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7)) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6)));
    } else {
	if ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1 
		= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_115;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    if ((0U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2 
	    = (((QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9)) 
		<< 0x20U) | (QData)((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8)));
    } else {
	if ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2 
		= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_118;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:61
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freset 
	= vlTOPp->reset;
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:67
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid 
	= (1U & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_valid));
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_235) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata 
		= ((0U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
		    ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0
		    : ((4U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
		        ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1
		        : ((8U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
			    ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2
			    : ((0xcU == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
			        ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3
			        : ((0x10U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
				    ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4
				    : ((0x14U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
				        ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5
				        : ((0x18U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
					    ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6
					    : ((0x1cU 
						== (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
					        ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7
					        : (
						   (0x20U 
						    == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
						    ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8
						    : 
						   ((0x24U 
						     == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
						     ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9
						     : 
						    ((0x28U 
						      == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
						      ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10
						      : 
						     ((0x2cU 
						       == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr))
						       ? vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11
						       : 0U))))))))))));
	}
    }
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_159 
	= ((IData)(1U) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_74 
	= (1U & (~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)));
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:74
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits 
	= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_value;
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAMemDPI.v:74
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid 
	= (1U & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_valid));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_115 
	= (VL_ULL(1) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_118 
	= (VL_ULL(1) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_77 
	= ((IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid) 
	   & (~ (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80 
	= ((~ (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid));
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_195) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_201) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_207) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_213) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_219) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_225) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_171) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_183) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_189) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:67
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr 
	= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_addr;
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_177) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3 
		= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1 
		= vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles;
	} else {
	    if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_165) {
		vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1 
		    = vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	    }
	}
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:363
    if (vlTOPp->reset) {
	vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0 = 0U;
    } else {
	if (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__ready) {
	    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0 = 2U;
	} else {
	    if (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_159) {
		vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0 
		    = vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value;
	    }
	}
    }
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_235 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80) 
	   & (~ (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156 
	= ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80) 
	   & (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode));
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
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles 
	= ((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
					   ? 0U : vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_110));
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTAHostDPI.v:67
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value 
	= vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_value;
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/TestAccel.v:852
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__ready 
	= ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99 
	= (vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt 
	   == (vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3 
	       - (IData)(1U)));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state 
	= __Vdly__TestAccel__DOT__vta_accel__DOT__ce__DOT__state;
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_110 
	= ((IData)(1U) + vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles);
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
    VL_EXTEND_WQ(65,64, __Vtemp20, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
    VL_EXTEND_WQ(128,64, __Vtemp21, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1);
    VL_EXTEND_WQ(128,64, __Vtemp22, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2);
    VL_MUL_W(4, __Vtemp23, __Vtemp21, __Vtemp22);
    VL_EXTEND_WQ(65,63, __Vtemp24, (VL_ULL(0x7fffffffffffffff) 
				    & (((QData)((IData)(
							__Vtemp23[1U])) 
					<< 0x20U) | (QData)((IData)(
								    __Vtemp23[0U])))));
    VL_ADD_W(3, __Vtemp25, __Vtemp20, __Vtemp24);
    VL_EXTEND_WQ(65,64, __Vtemp26, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___GEN_1[0U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5)
	    ? 0U : ((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
		     ? __Vtemp25[0U] : __Vtemp26[0U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___GEN_1[1U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5)
	    ? 0U : ((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
		     ? __Vtemp25[1U] : __Vtemp26[1U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT___GEN_1[2U] 
	= (1U & ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5)
		  ? 0U : ((5U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state))
			   ? __Vtemp25[2U] : __Vtemp26[2U])));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid 
	= ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid 
	= ((6U == (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__state)) 
	   & (IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT___T_99));
    VL_EXTEND_WQ(65,64, __Vtemp34, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024);
    VL_EXTEND_WQ(319,64, __Vtemp36, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__sliceAccum__DOT__reg__024);
    VL_SHIFTL_WWI(319,319,8, __Vtemp37, __Vtemp36, 
		  (0xffU & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2));
    VL_EXTEND_WQ(65,63, __Vtemp39, (VL_ULL(0x7fffffffffffffff) 
				    & (((QData)((IData)(
							__Vtemp37[1U])) 
					<< 0x20U) | (QData)((IData)(
								    __Vtemp37[0U])))));
    VL_ADD_W(3, __Vtemp40, __Vtemp34, __Vtemp39);
    VL_EXTEND_WQ(65,64, __Vtemp41, vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024);
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1[0U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)
	    ? 0U : ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid)
		     ? __Vtemp40[0U] : __Vtemp41[0U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1[1U] 
	= ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)
	    ? 0U : ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid)
		     ? __Vtemp40[1U] : __Vtemp41[1U]));
    vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1[2U] 
	= (1U & ((1U & vlTOPp->TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4)
		  ? 0U : ((IData)(vlTOPp->TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum_io_valid)
			   ? __Vtemp40[2U] : __Vtemp41[2U])));
}

VL_INLINE_OPT void VTestAccel::_sequent__TOP__2(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_sequent__TOP__2\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI__0__sim_wait,7,0);
    VL_SIG8(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI__0__sim_exit,7,0);
    // Body
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:72
    if (VL_UNLIKELY((1U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fexit)))) {
	VL_FINISH_MT("/Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v",74,"");
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:46
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Freset))) {
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fwait = 0U;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fexit = 0U;
    } else {
	vlTOPp->__Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI_TOP(__Vtask_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI__0__sim_wait, __Vtask_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI__0__sim_exit);
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fwait 
	    = __Vtask_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI__0__sim_wait;
	vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fexit 
	    = __Vtask_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI__0__sim_exit;
    }
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:60
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg 
	= ((~ ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Freset))) 
	   & (1U == (IData)(vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fwait)));
    vlTOPp->sim_wait = vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg;
    // ALWAYS at /Users/benjamintu/Desktop/research/tvm/vta/apps/tsim_example/hardware/chisel/build/chisel/VTASimDPI.v:41
    vlTOPp->TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Freset 
	= vlTOPp->reset;
}

void VTestAccel::_eval(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_eval\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->sim_clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__sim_clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
    vlTOPp->__Vclklast__TOP__sim_clock = vlTOPp->sim_clock;
}

VL_INLINE_OPT QData VTestAccel::_change_request(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_change_request\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTestAccel::_change_request_1(VTestAccel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_change_request_1\n"); );
    VTestAccel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTestAccel::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestAccel::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
	Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((sim_clock & 0xfeU))) {
	Verilated::overWidthError("sim_clock");}
}
#endif // VL_DEBUG
