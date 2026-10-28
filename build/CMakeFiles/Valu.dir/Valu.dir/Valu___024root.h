// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"
class Valu_types_pkg;
class Valu_types_pkg__03a__03aalu_ops__Vclpkg;
class Valu_types_pkg__03a__03afunctions_3__Vclpkg;
class Valu_types_pkg__03a__03ainstruction_type__Vclpkg;


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu___024root final {
  public:
    // CELLS
    Valu_types_pkg* __PVT__types_pkg;
    Valu_types_pkg__03a__03afunctions_3__Vclpkg* types_pkg__03a__03afunctions_3__Vclpkg;
    Valu_types_pkg__03a__03aalu_ops__Vclpkg* types_pkg__03a__03aalu_ops__Vclpkg;
    Valu_types_pkg__03a__03ainstruction_type__Vclpkg* types_pkg__03a__03ainstruction_type__Vclpkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(ops,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    VL_IN(operand_1_i,31,0);
    VL_IN(operand_2_i,31,0);
    VL_OUT(result_o,31,0);
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* namep);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
