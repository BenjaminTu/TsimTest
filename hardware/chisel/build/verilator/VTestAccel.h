// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTestAccel_H_
#define _VTestAccel_H_

#include "verilated.h"
#include "VTestAccel__Dpi.h"

class VTestAccel__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTestAccel) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(clock,0,0);
    VL_IN8(sim_clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(sim_wait,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
	// Begin mtask footprint  all: 
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_valid,0,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_opcode,0,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_addr,7,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_valid,0,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Freset,0,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fwait,7,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_sim__DOT_____05Fexit,7,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__wait_reg,0,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freset,0,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_valid,7,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_opcode,7,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_addr,7,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Freset,0,0);
	VL_SIG8(TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_valid,7,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce_io_ecnt_0_valid,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT__state,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_74,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_77,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_80,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_156,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_159,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_165,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_171,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_177,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_183,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_189,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_195,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_201,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_207,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_213,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_219,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_225,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__rf__DOT___T_235,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot_io_start,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__state,2,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_112,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_113,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_114,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_115,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_116,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_117,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_118,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_123,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_145,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_157,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_167,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__validReg,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__state,1,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__cnt,2,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_206,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_207,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_210,0,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___T_216,2,0);
	VL_SIG8(TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__ready,0,0);
	VL_SIG16(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_0,15,0);
	VL_SIG16(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_1,15,0);
	VL_SIG16(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_2,15,0);
	VL_SIG16(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_3,15,0);
	VL_SIG16(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_4,15,0);
	VL_SIG16(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_5,15,0);
	VL_SIG16(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_6,15,0);
	VL_SIG16(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__product_7,15,0);
	VL_SIG(TestAccel__DOT__sim_shell__DOT__mod_host_dpi_req_value,31,0);
	VL_SIG(TestAccel__DOT__sim_shell__DOT__mod_host__DOT_____05Freq_value,31,0);
    };
    struct {
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_0,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_0,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_1,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_1,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_2,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_2,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_3,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_3,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_4,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_4,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_5,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_5,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_6,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_6,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_7,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_7,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_8,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_8,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_9,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_9,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_10,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_10,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_11,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__reg_11,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_12,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__rdata,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT___RAND_13,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__rf__DOT__initvar,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_0,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__cycles,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_1,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_0,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_2,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_1,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_3,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_2,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_4,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_3,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_5,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_4,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_6,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_5,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_7,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_6,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_8,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg1_7,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_9,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_0,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_10,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_1,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_11,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_2,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_12,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_3,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_13,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_4,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_14,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_5,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_15,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_6,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_16,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__reg2_7,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_17,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__cnt,31,0);
    };
    struct {
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_18,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_134,31,0);
	VL_SIGW(TestAccel__DOT__vta_accel__DOT__ce__DOT__shiftReg,277,0,9);
	VL_SIGW(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_22,287,0,9);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_23,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_188,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__initvar,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_0,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_1,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_2,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_3,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_4,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_5,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_6,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_7,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_8,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_0,22,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_9,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_1,22,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_10,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_2,22,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_11,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_3,22,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_12,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_4,22,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_13,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_5,22,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_14,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_6,22,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_15,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__accum_7,22,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_16,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT___RAND_17,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__dot__DOT__initvar,31,0);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_1,31,0);
	VL_SIGW(TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___GEN_1,64,0,3);
	VL_SIG(TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__initvar,31,0);
	VL_SIG64(TestAccel__DOT__sim_shell__DOT__mod_mem_dpi_rd_bits,63,0);
	VL_SIG64(TestAccel__DOT__sim_shell__DOT__mod_mem__DOT_____05Frd_value,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr1,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_19,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT__raddr2,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_20,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT__waddr,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT___RAND_21,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_139,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT___T_142,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT__reg__024,63,0);
	VL_SIG64(TestAccel__DOT__vta_accel__DOT__ce__DOT__overallAccum__DOT___RAND_0,63,0);
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    VL_SIG8(__Vclklast__TOP__sim_clock,0,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTestAccel__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTestAccel);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTestAccel(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTestAccel();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTestAccel__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTestAccel__Syms* symsp, bool first);
    void __Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_host__DOT__VTAHostDPI_TOP(CData& req_valid, CData& req_opcode, CData& req_addr, IData& req_value, const CData req_deq, const CData resp_valid, const IData resp_value);
    void __Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_mem__DOT__VTAMemDPI_TOP(const CData req_valid, const CData req_opcode, const CData req_len, const QData req_addr, const CData wr_valid, const QData wr_value, CData& rd_valid, QData& rd_value, const CData rd_ready);
    void __Vdpiimwrap_TestAccel__DOT__sim_shell__DOT__mod_sim__DOT__VTASimDPI_TOP(CData& sim_wait, CData& sim_exit);
  private:
    static QData _change_request(VTestAccel__Syms* __restrict vlSymsp);
    static QData _change_request_1(VTestAccel__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VTestAccel__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VTestAccel__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTestAccel__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__4(VTestAccel__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VTestAccel__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VTestAccel__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VTestAccel__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(VTestAccel__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VTestAccel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
