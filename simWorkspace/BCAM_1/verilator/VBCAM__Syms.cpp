// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VBCAM__Syms.h"
#include "VBCAM.h"
#include "VBCAM___024root.h"
#include "VBCAM_BCAM.h"

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
    , TOP__BCAM(Verilated::catName(namep, "BCAM"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.BCAM = &TOP__BCAM;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__BCAM.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_BCAM.configure(this, name(), "BCAM", "BCAM", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_BCAM.varInsert(__Vfinal,"MaskingControl", &(TOP__BCAM.MaskingControl), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"PattToRmMuxOutput", &(TOP__BCAM.PattToRmMuxOutput), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_BCAM.varInsert(__Vfinal,"RDataForWrite", &(TOP__BCAM.RDataForWrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_BCAM.varInsert(__Vfinal,"RegWMask", &(TOP__BCAM.RegWMask), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_BCAM.varInsert(__Vfinal,"STiRAM_symbol0", &(TOP__BCAM.STiRAM_symbol0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,0,3);
        __Vscope_BCAM.varInsert(__Vfinal,"STiRAM_symbol1", &(TOP__BCAM.STiRAM_symbol1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,0,3);
        __Vscope_BCAM.varInsert(__Vfinal,"STiRAM_symbol2", &(TOP__BCAM.STiRAM_symbol2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,0,3);
        __Vscope_BCAM.varInsert(__Vfinal,"STiRAM_symbol3", &(TOP__BCAM.STiRAM_symbol3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,0,0 ,0,3);
        __Vscope_BCAM.varInsert(__Vfinal,"STiWMask", &(TOP__BCAM.STiWMask), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_BCAM.varInsert(__Vfinal,"STiWPatt", &(TOP__BCAM.STiWPatt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_BCAM.varInsert(__Vfinal,"STiWr", &(TOP__BCAM.STiWr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"SegAddr", &(TOP__BCAM.SegAddr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_BCAM.varInsert(__Vfinal,"SegRAM_symbol0", &(TOP__BCAM.SegRAM_symbol0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,1,0 ,0,3);
        __Vscope_BCAM.varInsert(__Vfinal,"SegRAM_symbol1", &(TOP__BCAM.SegRAM_symbol1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,2 ,1,0 ,0,3);
        __Vscope_BCAM.varInsert(__Vfinal,"SegWr", &(TOP__BCAM.SegWr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"halfRateMPatt_payload_mPatt", &(TOP__BCAM.halfRateMPatt_payload_mPatt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_BCAM.varInsert(__Vfinal,"halfRateMPatt_ready", &(TOP__BCAM.halfRateMPatt_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"halfRateMPatt_valid", &(TOP__BCAM.halfRateMPatt_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"mIndcStream_payload", &(TOP__BCAM.mIndcStream_payload), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_BCAM.varInsert(__Vfinal,"mIndcStream_ready", &(TOP__BCAM.mIndcStream_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"mIndcStream_valid", &(TOP__BCAM.mIndcStream_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"mPattTwoPipe_0", &(TOP__BCAM.mPattTwoPipe_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_BCAM.varInsert(__Vfinal,"mPattTwoPipe_1", &(TOP__BCAM.mPattTwoPipe_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_BCAM.varInsert(__Vfinal,"mPattTwoPipe_2", &(TOP__BCAM.mPattTwoPipe_2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_BCAM.varInsert(__Vfinal,"notErase", &(TOP__BCAM.notErase), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"ocurrIndcResults_0", &(TOP__BCAM.ocurrIndcResults_0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"ocurrIndcResults_1", &(TOP__BCAM.ocurrIndcResults_1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_BCAM.varInsert(__Vfinal,"rMatch", &(TOP__BCAM.rMatch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
