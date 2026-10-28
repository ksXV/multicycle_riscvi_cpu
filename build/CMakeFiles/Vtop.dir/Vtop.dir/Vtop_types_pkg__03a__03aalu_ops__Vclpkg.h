// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_TYPES_PKG__03A__03AALU_OPS__VCLPKG_H_
#define VERILATED_VTOP_TYPES_PKG__03A__03AALU_OPS__VCLPKG_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_types_pkg__03a__03aalu_ops__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_types_pkg__03a__03aalu_ops__Vclpkg();
    ~Vtop_types_pkg__03a__03aalu_ops__Vclpkg();
    void ctor(Vtop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtop_types_pkg__03a__03aalu_ops__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtop__Syms;

class Vtop_types_pkg__03a__03aalu_ops : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "types_pkg::alu_ops"; }
    VlClass* clone() const { return new Vtop_types_pkg__03a__03aalu_ops(*this); }
  private:
    void _ctor_var_reset(Vtop__Syms* __restrict vlSymsp);
  public:
    Vtop_types_pkg__03a__03aalu_ops(Vtop__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtop_types_pkg__03a__03aalu_ops() {}
};


#endif  // guard
