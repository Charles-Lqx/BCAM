// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBCAM.h"
#include "VBCAM__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VBCAM::VBCAM(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VBCAM__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_wStream_valid{vlSymsp->TOP.io_wStream_valid}
    , io_wStream_ready{vlSymsp->TOP.io_wStream_ready}
    , io_wStream_payload_wAddr{vlSymsp->TOP.io_wStream_payload_wAddr}
    , io_wStream_payload_wPatt{vlSymsp->TOP.io_wStream_payload_wPatt}
    , io_wStream_payload_wr{vlSymsp->TOP.io_wStream_payload_wr}
    , io_mPattStream_valid{vlSymsp->TOP.io_mPattStream_valid}
    , io_mPattStream_ready{vlSymsp->TOP.io_mPattStream_ready}
    , io_mPattStream_payload_mPatt{vlSymsp->TOP.io_mPattStream_payload_mPatt}
    , io_mAddrStream_valid{vlSymsp->TOP.io_mAddrStream_valid}
    , io_mAddrStream_ready{vlSymsp->TOP.io_mAddrStream_ready}
    , io_mAddrStream_payload_mAddr{vlSymsp->TOP.io_mAddrStream_payload_mAddr}
    , io_mAddrStream_payload_matchFlag{vlSymsp->TOP.io_mAddrStream_payload_matchFlag}
    , rootp{&(vlSymsp->TOP)}
{
}

VBCAM::VBCAM(const char* _vcname__)
    : VBCAM(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VBCAM::~VBCAM() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBCAM___024root___eval_initial(VBCAM___024root* vlSelf);
void VBCAM___024root___eval_settle(VBCAM___024root* vlSelf);
void VBCAM___024root___eval(VBCAM___024root* vlSelf);
#ifdef VL_DEBUG
void VBCAM___024root___eval_debug_assertions(VBCAM___024root* vlSelf);
#endif  // VL_DEBUG
void VBCAM___024root___final(VBCAM___024root* vlSelf);

static void _eval_initial_loop(VBCAM__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBCAM___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBCAM___024root___eval_settle(&(vlSymsp->TOP));
        VBCAM___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VBCAM::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBCAM::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBCAM___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBCAM___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VBCAM::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VBCAM::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBCAM::final() {
    VBCAM___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VBCAM___024root__trace_init_top(VBCAM___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBCAM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBCAM___024root*>(voidSelf);
    VBCAM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBCAM___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBCAM___024root__trace_register(VBCAM___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VBCAM::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBCAM___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
