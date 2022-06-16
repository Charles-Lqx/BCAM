// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBCAM__Syms.h"
#include "VBCAM.h"
#include "VBCAM___024root.h"

// FUNCTIONS
VBCAM__Syms::~VBCAM__Syms()
{
}

VBCAM__Syms::VBCAM__Syms(VerilatedContext* contextp, const char* namep,VBCAM* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
