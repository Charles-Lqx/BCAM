// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBCAM.h for the primary calling header

#ifndef VERILATED_VBCAM___024ROOT_H_
#define VERILATED_VBCAM___024ROOT_H_  // guard

#include "verilated.h"

class VBCAM__Syms;
VL_MODULE(VBCAM___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_wStream_valid,0,0);
        VL_OUT8(io_wStream_ready,0,0);
        VL_IN8(io_wStream_payload_wAddr,2,0);
        VL_IN8(io_wStream_payload_wPatt,1,0);
        VL_IN8(io_wStream_payload_wr,0,0);
        VL_IN8(io_mPattStream_valid,0,0);
        VL_OUT8(io_mPattStream_ready,0,0);
        VL_IN8(io_mPattStream_payload_mPatt,1,0);
        VL_OUT8(io_mAddrStream_valid,0,0);
        VL_IN8(io_mAddrStream_ready,0,0);
        VL_OUT8(io_mAddrStream_payload_mAddr,2,0);
        VL_OUT8(io_mAddrStream_payload_matchFlag,0,0);
        CData/*3:0*/ BCAM__DOT___zz___05Fzz_1_port0;
        CData/*3:0*/ BCAM__DOT___zz___05Fzz_2_port0;
        CData/*3:0*/ BCAM__DOT___zz___05Fzz_2_port1;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1_port_1;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1_port_3;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_2_port_2;
        CData/*0:0*/ BCAM__DOT__io_wStream_rValid;
        CData/*0:0*/ BCAM__DOT__halfRateWStream_fire;
        CData/*2:0*/ BCAM__DOT__io_wStream_rData_wAddr;
        CData/*1:0*/ BCAM__DOT__io_wStream_rData_wPatt;
        CData/*0:0*/ BCAM__DOT__io_wStream_rData_wr;
        CData/*0:0*/ BCAM__DOT__continueWr;
        CData/*0:0*/ BCAM__DOT___zz_3;
        CData/*0:0*/ BCAM__DOT___zz_4;
        CData/*0:0*/ BCAM__DOT__io_mPattStream_rValid;
        CData/*0:0*/ BCAM__DOT__io_mPattStream_halfPipe_fire;
        CData/*1:0*/ BCAM__DOT__io_mPattStream_rData_mPatt;
        CData/*1:0*/ BCAM__DOT___zz_when_BCAM_l129_1;
        CData/*1:0*/ BCAM__DOT___zz_when_BCAM_l129_2;
        CData/*0:0*/ BCAM__DOT__io_mPattStream_halfPipe_translated_ready;
        CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_valid_1;
        CData/*3:0*/ BCAM__DOT___zz_io_mAddrStream_payload_mAddr_2;
        CData/*1:0*/ BCAM__DOT___zz_io_mAddrStream_payload_mAddr_6;
        CData/*1:0*/ BCAM__DOT___zz_io_mAddrStream_payload_mAddr_7;
        CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_payload_matchFlag;
        CData/*0:0*/ BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_1;
        CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_valid_3;
        CData/*0:0*/ BCAM__DOT___zz_io_mPattStream_halfPipe_translated_ready_3;
        CData/*1:0*/ BCAM__DOT___zz_io_mAddrStream_payload_mAddr_10;
        CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_valid_5;
        CData/*2:0*/ BCAM__DOT___zz_io_mAddrStream_payload_mAddr_12;
        CData/*0:0*/ BCAM__DOT___zz_io_mAddrStream_payload_matchFlag_1;
        CData/*1:0*/ BCAM__DOT___zz_when_BCAM_l171_2;
        CData/*1:0*/ BCAM__DOT___zz_7;
        CData/*1:0*/ BCAM__DOT___zz_10;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_1;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_2;
        CData/*0:0*/ BCAM__DOT___zz___05Fzz_1symbol_read_3;
        CData/*1:0*/ BCAM__DOT___zz___05Fzz_2symbol_read;
        CData/*1:0*/ BCAM__DOT___zz___05Fzz_2symbol_read_1;
        CData/*1:0*/ BCAM__DOT___zz___05Fzz_2symbol_read_2;
        CData/*1:0*/ BCAM__DOT___zz___05Fzz_2symbol_read_3;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__reset;
        VlUnpacked<CData/*0:0*/, 4> BCAM__DOT___zz_1_symbol0;
        VlUnpacked<CData/*0:0*/, 4> BCAM__DOT___zz_1_symbol1;
        VlUnpacked<CData/*0:0*/, 4> BCAM__DOT___zz_1_symbol2;
        VlUnpacked<CData/*0:0*/, 4> BCAM__DOT___zz_1_symbol3;
        VlUnpacked<CData/*1:0*/, 4> BCAM__DOT___zz_2_symbol0;
    };
    struct {
        VlUnpacked<CData/*1:0*/, 4> BCAM__DOT___zz_2_symbol1;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

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
