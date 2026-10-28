// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU_TYPES_PKG__03A__03AINSTRUCTION_TYPE__VCLPKG_H_
#define VERILATED_VALU_TYPES_PKG__03A__03AINSTRUCTION_TYPE__VCLPKG_H_  // guard

#include "verilated.h"


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_types_pkg__03a__03ainstruction_type__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Valu_types_pkg__03a__03ainstruction_type__Vclpkg();
    ~Valu_types_pkg__03a__03ainstruction_type__Vclpkg();
    void ctor(Valu__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Valu_types_pkg__03a__03ainstruction_type__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Valu__Syms;

class Valu_types_pkg__03a__03ainstruction_type : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "types_pkg::instruction_type"; }
    VlClass* clone() const { return new Valu_types_pkg__03a__03ainstruction_type(*this); }
  private:
    void _ctor_var_reset(Valu__Syms* __restrict vlSymsp);
  public:
    Valu_types_pkg__03a__03ainstruction_type(Valu__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Valu_types_pkg__03a__03ainstruction_type() {}
};


#endif  // guard
