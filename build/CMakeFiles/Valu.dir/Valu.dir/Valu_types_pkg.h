// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU_TYPES_PKG_H_
#define VERILATED_VALU_TYPES_PKG_H_  // guard

#include "verilated.h"


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_types_pkg final {
  public:

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Valu_types_pkg();
    ~Valu_types_pkg();
    void ctor(Valu__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Valu_types_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
