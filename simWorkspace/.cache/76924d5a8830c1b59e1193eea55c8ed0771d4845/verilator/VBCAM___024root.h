// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBCAM.h for the primary calling header

#ifndef VERILATED_VBCAM___024ROOT_H_
#define VERILATED_VBCAM___024ROOT_H_  // guard

#include "verilated.h"

class VBCAM__Syms;
class VBCAM_BCAM;

VL_MODULE(VBCAM___024root) {
  public:
    // CELLS
    VBCAM_BCAM* BCAM;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_wStream_valid,0,0);
    VL_OUT8(io_wStream_ready,0,0);
    VL_IN8(io_wStream_payload_wAddr,3,0);
    VL_IN8(io_wStream_payload_wPatt,2,0);
    VL_IN8(io_wStream_payload_wr,0,0);
    VL_IN8(io_mPattStream_valid,0,0);
    VL_OUT8(io_mPattStream_ready,0,0);
    VL_IN8(io_mPattStream_payload_mPatt,2,0);
    VL_OUT8(io_mAddrStream_valid,0,0);
    VL_IN8(io_mAddrStream_ready,0,0);
    VL_OUT8(io_mAddrStream_payload_mAddr,3,0);
    VL_OUT8(io_mAddrStream_payload_matchFlag,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VBCAM__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBCAM___024root(const char* name);
    ~VBCAM___024root();
    VL_UNCOPYABLE(VBCAM___024root);

    // INTERNAL METHODS
    void __Vconfigure(VBCAM__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
