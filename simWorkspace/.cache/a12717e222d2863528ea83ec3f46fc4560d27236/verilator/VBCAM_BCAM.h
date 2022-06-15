// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBCAM.h for the primary calling header

#ifndef VERILATED_VBCAM_BCAM_H_
#define VERILATED_VBCAM_BCAM_H_  // guard

#include "verilated.h"

class VBCAM__Syms;
VL_MODULE(VBCAM_BCAM) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_WStream_valid,0,0);
    VL_OUT8(io_WStream_ready,0,0);
    VL_IN8(io_WStream_payload_WAddr,2,0);
    VL_IN8(io_WStream_payload_WPatt,1,0);
    VL_IN8(io_WStream_payload_Wr,0,0);
    VL_IN8(io_MPattStream_valid,0,0);
    VL_OUT8(io_MPattStream_ready,0,0);
    VL_IN8(io_MPattStream_payload_MPatt,1,0);
    VL_OUT8(io_MAddrStream_valid,0,0);
    VL_IN8(io_MAddrStream_ready,0,0);
    VL_OUT8(io_MAddrStream_payload_MAddr,2,0);
    VL_OUT8(io_MAddrStream_payload_Match,0,0);
    CData/*3:0*/ __PVT___zz___05Fzz_1_port0;
    CData/*3:0*/ __PVT___zz___05Fzz_2_port0;
    CData/*3:0*/ __PVT___zz___05Fzz_2_port1;
    CData/*0:0*/ __PVT___zz___05Fzz_1_port_1;
    CData/*0:0*/ __PVT___zz___05Fzz_1_port_3;
    CData/*0:0*/ __PVT___zz___05Fzz_2_port_2;
    CData/*0:0*/ __PVT__when_BCAM_l140;
    CData/*0:0*/ __PVT__when_BCAM_l213;
    CData/*0:0*/ __PVT___zz_3;
    CData/*2:0*/ __PVT___zz_switch_Misc_l211;
    CData/*1:0*/ __PVT___zz_4;
    CData/*0:0*/ __PVT__io_WStream_fire;
    CData/*0:0*/ SegWr;
    CData/*0:0*/ STiWr;
    CData/*0:0*/ __PVT__when_BCAM_l163;
    CData/*0:0*/ __PVT___zz_io_MAddrStream_valid;
    CData/*0:0*/ __PVT__io_MAddrStream_isFree;
    CData/*3:0*/ __PVT___zz_io_MAddrStream_payload_MAddr_2;
    CData/*1:0*/ __PVT___zz_io_MAddrStream_payload_MAddr_6;
    CData/*1:0*/ __PVT___zz_io_MAddrStream_payload_MAddr_7;
    CData/*0:0*/ __PVT___zz_io_MAddrStream_payload_Match;
    CData/*1:0*/ __PVT___zz_when_BCAM_l173_1;
    CData/*1:0*/ __PVT___zz_when_BCAM_l173_2;
    CData/*0:0*/ __PVT___zz_io_MAddrStream_payload_MAddr_8;
    CData/*0:0*/ __PVT___zz_io_MAddrStream_payload_MAddr_9;
    CData/*1:0*/ __PVT___zz_io_MAddrStream_payload_MAddr_10;
    CData/*0:0*/ __PVT___zz_when_BCAM_l197_1;
    CData/*1:0*/ __PVT___zz_when_BCAM_l197_3;
    CData/*1:0*/ __PVT___zz_6;
    CData/*1:0*/ __PVT___zz_when_BCAM_l215_3;
    CData/*0:0*/ __PVT___zz___05Fzz_1symbol_read;
    CData/*0:0*/ __PVT___zz___05Fzz_1symbol_read_1;
    CData/*0:0*/ __PVT___zz___05Fzz_1symbol_read_2;
    CData/*0:0*/ __PVT___zz___05Fzz_1symbol_read_3;
    CData/*1:0*/ __PVT___zz___05Fzz_2symbol_read;
    CData/*1:0*/ __PVT___zz___05Fzz_2symbol_read_1;
    CData/*1:0*/ __PVT___zz___05Fzz_2symbol_read_2;
    CData/*1:0*/ __PVT___zz___05Fzz_2symbol_read_3;
    VlUnpacked<CData/*0:0*/, 4> __PVT___zz_1_symbol0;
    VlUnpacked<CData/*0:0*/, 4> __PVT___zz_1_symbol1;
    VlUnpacked<CData/*0:0*/, 4> __PVT___zz_1_symbol2;
    VlUnpacked<CData/*0:0*/, 4> __PVT___zz_1_symbol3;
    VlUnpacked<CData/*1:0*/, 4> __PVT___zz_2_symbol0;
    VlUnpacked<CData/*1:0*/, 4> __PVT___zz_2_symbol1;

    // INTERNAL VARIABLES
    VBCAM__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VBCAM_BCAM(const char* name);
    ~VBCAM_BCAM();
    VL_UNCOPYABLE(VBCAM_BCAM);

    // INTERNAL METHODS
    void __Vconfigure(VBCAM__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
