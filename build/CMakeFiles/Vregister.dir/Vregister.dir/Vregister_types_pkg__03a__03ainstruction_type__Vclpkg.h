// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister.h for the primary calling header

#ifndef VERILATED_VREGISTER_TYPES_PKG__03A__03AINSTRUCTION_TYPE__VCLPKG_H_
#define VERILATED_VREGISTER_TYPES_PKG__03A__03AINSTRUCTION_TYPE__VCLPKG_H_  // guard

#include "verilated.h"


class Vregister__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_types_pkg__03a__03ainstruction_type__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vregister__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister_types_pkg__03a__03ainstruction_type__Vclpkg();
    ~Vregister_types_pkg__03a__03ainstruction_type__Vclpkg();
    void ctor(Vregister__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vregister_types_pkg__03a__03ainstruction_type__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vregister__Syms;

class Vregister_types_pkg__03a__03ainstruction_type : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "types_pkg::instruction_type"; }
    VlClass* clone() const { return new Vregister_types_pkg__03a__03ainstruction_type(*this); }
  private:
    void _ctor_var_reset(Vregister__Syms* __restrict vlSymsp);
  public:
    Vregister_types_pkg__03a__03ainstruction_type(Vregister__Syms* __restrict vlSymsp);
    virtual std::string to_string() const;
    std::string to_string_middle() const;
    ~Vregister_types_pkg__03a__03ainstruction_type() {}
};


#endif  // guard
