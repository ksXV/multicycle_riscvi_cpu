// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VREGISTER__SYMS_H_
#define VERILATED_VREGISTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vregister.h"

// INCLUDE MODULE CLASSES
#include "Vregister___024root.h"
#include "Vregister_types_pkg.h"
#include "Vregister_types_pkg__03a__03afunctions_3__Vclpkg.h"
#include "Vregister_types_pkg__03a__03aalu_ops__Vclpkg.h"
#include "Vregister_types_pkg__03a__03ainstruction_type__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vregister__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vregister* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vregister___024root            TOP;
    Vregister_types_pkg            TOP__types_pkg;
    Vregister_types_pkg__03a__03aalu_ops__Vclpkg TOP__types_pkg__03a__03aalu_ops__Vclpkg;
    Vregister_types_pkg__03a__03afunctions_3__Vclpkg TOP__types_pkg__03a__03afunctions_3__Vclpkg;
    Vregister_types_pkg__03a__03ainstruction_type__Vclpkg TOP__types_pkg__03a__03ainstruction_type__Vclpkg;

    // CONSTRUCTORS
    Vregister__Syms(VerilatedContext* contextp, const char* namep, Vregister* modelp);
    ~Vregister__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
