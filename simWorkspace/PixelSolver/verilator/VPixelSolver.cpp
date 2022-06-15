// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPixelSolver.h"
#include "VPixelSolver__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPixelSolver::VPixelSolver(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VPixelSolver__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_cmd_valid{vlSymsp->TOP.io_cmd_valid}
    , io_cmd_ready{vlSymsp->TOP.io_cmd_ready}
    , io_rsp_valid{vlSymsp->TOP.io_rsp_valid}
    , io_rsp_ready{vlSymsp->TOP.io_rsp_ready}
    , io_rsp_payload_iteration{vlSymsp->TOP.io_rsp_payload_iteration}
    , io_cmd_payload_x{vlSymsp->TOP.io_cmd_payload_x}
    , io_cmd_payload_y{vlSymsp->TOP.io_cmd_payload_y}
    , rootp{&(vlSymsp->TOP)}
{
}

VPixelSolver::VPixelSolver(const char* _vcname__)
    : VPixelSolver(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VPixelSolver::~VPixelSolver() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VPixelSolver___024root___eval_initial(VPixelSolver___024root* vlSelf);
void VPixelSolver___024root___eval_settle(VPixelSolver___024root* vlSelf);
void VPixelSolver___024root___eval(VPixelSolver___024root* vlSelf);
#ifdef VL_DEBUG
void VPixelSolver___024root___eval_debug_assertions(VPixelSolver___024root* vlSelf);
#endif  // VL_DEBUG
void VPixelSolver___024root___final(VPixelSolver___024root* vlSelf);

static void _eval_initial_loop(VPixelSolver__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VPixelSolver___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VPixelSolver___024root___eval_settle(&(vlSymsp->TOP));
        VPixelSolver___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VPixelSolver::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPixelSolver::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPixelSolver___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VPixelSolver___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VPixelSolver::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VPixelSolver::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VPixelSolver::final() {
    VPixelSolver___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VPixelSolver___024root__trace_init_top(VPixelSolver___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPixelSolver___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPixelSolver___024root*>(voidSelf);
    VPixelSolver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPixelSolver___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPixelSolver___024root__trace_register(VPixelSolver___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPixelSolver::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPixelSolver___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
