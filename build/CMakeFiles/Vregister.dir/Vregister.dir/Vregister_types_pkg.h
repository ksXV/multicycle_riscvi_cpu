// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister.h for the primary calling header

#ifndef VERILATED_VREGISTER_TYPES_PKG_H_
#define VERILATED_VREGISTER_TYPES_PKG_H_  // guard

#include "verilated.h"


class Vregister__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_types_pkg final {
  public:

    // INTERNAL VARIABLES
    Vregister__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vregister_types_pkg();
    ~Vregister_types_pkg();
    void ctor(Vregister__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vregister_types_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
