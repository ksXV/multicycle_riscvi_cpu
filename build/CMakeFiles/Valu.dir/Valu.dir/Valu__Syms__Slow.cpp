// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Valu__pch.h"

Valu__Syms::Valu__Syms(VerilatedContext* contextp, const char* namep, Valu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(156);
    // Setup sub module instances
    TOP__types_pkg.ctor(this, "types_pkg");
    TOP__types_pkg__03a__03aalu_ops__Vclpkg.ctor(this, "types_pkg::alu_ops__Vclpkg");
    TOP__types_pkg__03a__03afunctions_3__Vclpkg.ctor(this, "types_pkg::functions_3__Vclpkg");
    TOP__types_pkg__03a__03ainstruction_type__Vclpkg.ctor(this, "types_pkg::instruction_type__Vclpkg");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__types_pkg = &TOP__types_pkg;
    TOP.types_pkg__03a__03aalu_ops__Vclpkg = &TOP__types_pkg__03a__03aalu_ops__Vclpkg;
    TOP.types_pkg__03a__03afunctions_3__Vclpkg = &TOP__types_pkg__03a__03afunctions_3__Vclpkg;
    TOP.types_pkg__03a__03ainstruction_type__Vclpkg = &TOP__types_pkg__03a__03ainstruction_type__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__types_pkg.__Vconfigure(true);
    TOP__types_pkg__03a__03aalu_ops__Vclpkg.__Vconfigure(true);
    TOP__types_pkg__03a__03afunctions_3__Vclpkg.__Vconfigure(true);
    TOP__types_pkg__03a__03ainstruction_type__Vclpkg.__Vconfigure(true);
    // Setup scopes
}

Valu__Syms::~Valu__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__types_pkg__03a__03ainstruction_type__Vclpkg.dtor();
    TOP__types_pkg__03a__03afunctions_3__Vclpkg.dtor();
    TOP__types_pkg__03a__03aalu_ops__Vclpkg.dtor();
    TOP__types_pkg.dtor();
}
