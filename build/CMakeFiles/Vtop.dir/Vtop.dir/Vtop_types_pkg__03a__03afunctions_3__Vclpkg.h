// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TYPES_PKG__03A__03AFUNCTIONS_3__VCLPKG_H_
#define VERILATED_VTOP_TYPES_PKG__03A__03AFUNCTIONS_3__VCLPKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_types_pkg__03a__03afunctions_3__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_types_pkg__03a__03afunctions_3__Vclpkg();
    ~Vtop_types_pkg__03a__03afunctions_3__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_types_pkg__03a__03afunctions_3__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop_types_pkg__03a__03afunctions_3 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "types_pkg::functions_3"; }
    VlClass* clone() const { return new Vtop_types_pkg__03a__03afunctions_3(*this); }
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop_types_pkg__03a__03afunctions_3(Vtop__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop_types_pkg__03a__03afunctions_3() {}
};


#endif  // guard
