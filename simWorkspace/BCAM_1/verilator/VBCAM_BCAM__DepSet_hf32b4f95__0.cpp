// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBCAM.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VBCAM_BCAM.h"

VL_INLINE_OPT void VBCAM_BCAM___sequent__TOP__BCAM__3(VBCAM_BCAM* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBCAM_BCAM___sequent__TOP__BCAM__3\n"); );
    // Init
    CData/*0:0*/ __PVT___zz_io_mAddrStream_payload_mAddr_1;
    CData/*1:0*/ __PVT___zz_MaskingControl;
    // Body
    __PVT___zz_io_mAddrStream_payload_mAddr_1 = 0U;
    if (((3U & ((IData)(vlSelf->__PVT___zz_SegRAM_port0) 
                >> 2U)) == (IData)(vlSelf->mPattTwoPipe_2))) {
        __PVT___zz_io_mAddrStream_payload_mAddr_1 = 1U;
    }
    vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr_2 
        = (((IData)(__PVT___zz_io_mAddrStream_payload_mAddr_1) 
            << 1U) | (IData)(vlSelf->__PVT___zz_io_mAddrStream_payload_mAddr));
    vlSelf->STiWMask = (0xfU & ((IData)(1U) << (3U 
                                                & ((IData)(vlSelf->__PVT__io_wStream_rData_wAddr) 
                                                   >> 1U))));
    vlSelf->RegWMask = (3U & ((IData)(1U) << (1U & (IData)(vlSelf->__PVT__io_wStream_rData_wAddr))));
    vlSelf->PattToRmMuxOutput = (3U & ((1U & (IData)(vlSelf->__PVT__io_wStream_rData_wAddr))
                                        ? ((IData)(vlSelf->RDataForWrite) 
                                           >> 2U) : (IData)(vlSelf->RDataForWrite)));
    vlSelf->ocurrIndcResults_0 = 0U;
    if (((3U & (IData)(vlSelf->RDataForWrite)) == (IData)(vlSelf->PattToRmMuxOutput))) {
        vlSelf->ocurrIndcResults_0 = 1U;
    }
    vlSelf->ocurrIndcResults_1 = 0U;
    if (((3U & ((IData)(vlSelf->RDataForWrite) >> 2U)) 
         == (IData)(vlSelf->PattToRmMuxOutput))) {
        vlSelf->ocurrIndcResults_1 = 1U;
    }
    __PVT___zz_MaskingControl = ((((IData)(vlSelf->ocurrIndcResults_1) 
                                   << 1U) | (IData)(vlSelf->ocurrIndcResults_0)) 
                                 & (~ (IData)(vlSelf->RegWMask)));
    vlSelf->MaskingControl = (IData)((0U != (IData)(__PVT___zz_MaskingControl)));
}

VL_INLINE_OPT void VBCAM_BCAM___sequent__TOP__BCAM__7(VBCAM_BCAM* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VBCAM_BCAM___sequent__TOP__BCAM__7\n"); );
    // Body
    vlSelf->SegAddr = (((IData)((0U != (0xcU & (IData)(vlSelf->__PVT__mIndcStream_payload_ohFirst_masked)))) 
                        << 1U) | (IData)((0U != (0xaU 
                                                 & (IData)(vlSelf->__PVT__mIndcStream_payload_ohFirst_masked)))));
}
