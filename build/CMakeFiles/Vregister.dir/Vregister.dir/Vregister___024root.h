// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024ROOT_H_
#define VERILATED_VREGISTER___024ROOT_H_  // guard

#include "verilated.h"
class Vregister_types_pkg;
class Vregister_types_pkg__03a__03aalu_ops__Vclpkg;
class Vregister_types_pkg__03a__03afunctions_3__Vclpkg;
class Vregister_types_pkg__03a__03ainstruction_type__Vclpkg;


class Vregister__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister___024root final {
  public:
    // CELLS
    Vregister_types_pkg* __PVT__types_pkg;
    Vregister_types_pkg__03a__03afunctions_3__Vclpkg* types_pkg__03a__03afunctions_3__Vclpkg;
    Vregister_types_pkg__03a__03aalu_ops__Vclpkg* types_pkg__03a__03aalu_ops__Vclpkg;
    Vregister_types_pkg__03a__03ainstruction_type__Vclpkg* types_pkg__03a__03ainstruction_type__Vclpkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(reset_i,0,0);
    VL_IN8(write_enable_i,0,0);
    VL_IN8(read_enable_i,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_i__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN(data_i,31,0);
    VL_OUT(data_o,31,0);
    IData/*31:0*/ register__DOT__data;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregister__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister___024root(Vregister__Syms* symsp, const char* namep);
    ~Vregister___024root();
    VL_UNCOPYABLE(Vregister___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
