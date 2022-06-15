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
    CData/*3:0*/ BCAM__DOT___zz___05Fzz_1_port0;
    CData/*3:0*/ BCAM__DOT___zz___05Fzz_2_port0;
    CData/*3:0*/ BCAM__DOT___zz___05Fzz_2_port1;
    CData/*0:0*/ BCAM__DOT___zz___05Fzz_1_port_1;
    CData/*0:0*/ BCAM__DOT___zz___05Fzz_1_port_3;
    CData/*0:0*/ BCAM__DOT___zz___05Fzz_2_port_2;
    CData/*0:0*/ BCAM__DOT__when_BCAM_l139;
    CData/*0:0*/ BCAM__DOT__when_BCAM_l212;
    CData/*0:0*/ BCAM__DOT___zz_3;
    CData/*2:0*/ BCAM__DOT___zz_switch_Misc_l211;
    CData/*1:0*/ BCAM__DOT___zz_4;
    CData/*0:0*/ BCAM__DOT__io_WStream_fire;
    CData/*0:0*/ BCAM__DOT___zz_when_BCAM_l196;
    CData/*0:0*/ BCAM__DOT___zz_5;
    CData/*0:0*/ BCAM__DOT__when_BCAM_l162;
    CData/*0:0*/ BCAM__DOT___zz_io_MAddrStream_valid;
    CData/*3:0*/ BCAM__DOT___zz_io_MAddrStream_payload_MAddr_2;
    CData/*1:0*/ BCAM__DOT___zz_io_MAddrStream_payload_MAddr_6;
    CData/*1:0*/ BCAM__DOT___zz_io_MAddrStream_payload_MAddr_7;
    CData/*0:0*/ BCAM__DOT___zz_io_MAddrStream_payload_Match;
    CData/*1:0*/ BCAM__DOT___zz_when_BCAM_l172_1;
    CData/*1:0*/ BCAM__DOT___zz_when_BCAM_l172_2;
    CData/*0:0*/ BCAM__DOT___zz_io_MAddrStream_payload_MAddr_8;
    CData/*0:0*/ BCAM__DOT___zz_io_MAddrStream_payload_MAddr_9;
    CData/*1:0*/ BCAM__DOT___zz_io_MAddrStream_payload_MAddr_10;
    CData/*0:0*/ BCAM__DOT___zz_when_BCAM_l196_2;
    CData/*1:0*/ BCAM__DOT___zz_when_BCAM_l196_4;
    CData/*1:0*/ BCAM__DOT___zz_7;
    CData/*1:0*/ BCAM__DOT___zz_when_BCAM_l214_3;
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
    VlUnpacked<CData/*1:0*/, 4> BCAM__DOT___zz_2_symbol1;
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
