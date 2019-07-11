// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VTestAccel__Syms_H_
#define _VTestAccel__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VTestAccel.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VTestAccel__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VTestAccel*                    TOPp;
    
    // CREATORS
    VTestAccel__Syms(VTestAccel* topp, const char* namep);
    ~VTestAccel__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
