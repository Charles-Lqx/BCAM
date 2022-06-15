// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : PixelSolverPipelined
// Git hash  : 5877b7d3b2efe562a8be9ec1a5d1d250c31f7010

`timescale 1ns/1ps

module PixelSolverPipelined (
  input               io_cmd_valid,
  output              io_cmd_ready,
  input      [27:0]   io_cmd_payload_x,
  input      [27:0]   io_cmd_payload_y,
  output              io_rsp_valid,
  input               io_rsp_ready,
  output     [3:0]    io_rsp_payload_iteration,
  input               clk,
  input               reset
);

  wire                streamArbiter_1_io_output_ready;
  wire       [0:0]    streamDemux_1_io_select;
  wire                streamArbiter_1_io_inputs_0_ready;
  wire                streamArbiter_1_io_inputs_1_ready;
  wire                streamArbiter_1_io_output_valid;
  wire       [2:0]    streamArbiter_1_io_output_payload_id;
  wire       [27:0]   streamArbiter_1_io_output_payload_x0;
  wire       [27:0]   streamArbiter_1_io_output_payload_y0;
  wire       [3:0]    streamArbiter_1_io_output_payload_iteration;
  wire                streamArbiter_1_io_output_payload_done;
  wire       [27:0]   streamArbiter_1_io_output_payload_x;
  wire       [27:0]   streamArbiter_1_io_output_payload_y;
  wire       [0:0]    streamArbiter_1_io_chosen;
  wire       [1:0]    streamArbiter_1_io_chosenOH;
  wire                streamDemux_1_io_input_ready;
  wire                streamDemux_1_io_outputs_0_valid;
  wire       [2:0]    streamDemux_1_io_outputs_0_payload_id;
  wire       [27:0]   streamDemux_1_io_outputs_0_payload_x0;
  wire       [27:0]   streamDemux_1_io_outputs_0_payload_y0;
  wire       [3:0]    streamDemux_1_io_outputs_0_payload_iteration;
  wire                streamDemux_1_io_outputs_0_payload_done;
  wire       [27:0]   streamDemux_1_io_outputs_0_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_0_payload_y;
  wire                streamDemux_1_io_outputs_1_valid;
  wire       [2:0]    streamDemux_1_io_outputs_1_payload_id;
  wire       [27:0]   streamDemux_1_io_outputs_1_payload_x0;
  wire       [27:0]   streamDemux_1_io_outputs_1_payload_y0;
  wire       [3:0]    streamDemux_1_io_outputs_1_payload_iteration;
  wire                streamDemux_1_io_outputs_1_payload_done;
  wire       [27:0]   streamDemux_1_io_outputs_1_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_1_payload_y;
  wire       [2:0]    _zz_inserter_freeId_valueNext;
  wire       [0:0]    _zz_inserter_freeId_valueNext_1;
  wire       [35:0]   _zz_mulStage_output_payload_xx;
  wire       [55:0]   _zz_mulStage_output_payload_xx_1;
  wire       [35:0]   _zz_mulStage_output_payload_yy;
  wire       [55:0]   _zz_mulStage_output_payload_yy_1;
  wire       [35:0]   _zz_mulStage_output_payload_xy;
  wire       [55:0]   _zz_mulStage_output_payload_xy_1;
  wire       [27:0]   _zz_addStage_output_payload_x;
  wire       [28:0]   _zz_addStage_output_payload_y;
  wire       [28:0]   _zz_addStage_output_payload_y_1;
  wire       [28:0]   _zz_addStage_output_payload_y_2;
  wire       [27:0]   _zz_addStage_output_payload_done;
  wire       [27:0]   _zz_addStage_output_payload_done_1;
  wire       [3:0]    _zz_addStage_output_payload_iteration;
  wire       [0:0]    _zz_addStage_output_payload_iteration_1;
  wire       [2:0]    _zz_router_wantedId_valueNext;
  wire       [0:0]    _zz_router_wantedId_valueNext_1;
  wire                inserter_loopback_valid;
  wire                inserter_loopback_ready;
  wire       [2:0]    inserter_loopback_payload_id;
  wire       [27:0]   inserter_loopback_payload_x0;
  wire       [27:0]   inserter_loopback_payload_y0;
  wire       [3:0]    inserter_loopback_payload_iteration;
  wire                inserter_loopback_payload_done;
  wire       [27:0]   inserter_loopback_payload_x;
  wire       [27:0]   inserter_loopback_payload_y;
  wire                io_cmd_fire;
  reg                 inserter_freeId_willIncrement;
  wire                inserter_freeId_willClear;
  reg        [2:0]    inserter_freeId_valueNext;
  reg        [2:0]    inserter_freeId_value;
  wire                inserter_freeId_willOverflowIfInc;
  wire                inserter_freeId_willOverflow;
  wire                inserter_cmdContext_valid;
  wire                inserter_cmdContext_ready;
  wire       [2:0]    inserter_cmdContext_payload_id;
  wire       [27:0]   inserter_cmdContext_payload_x0;
  wire       [27:0]   inserter_cmdContext_payload_y0;
  wire       [3:0]    inserter_cmdContext_payload_iteration;
  wire                inserter_cmdContext_payload_done;
  wire       [27:0]   inserter_cmdContext_payload_x;
  wire       [27:0]   inserter_cmdContext_payload_y;
  wire                streamArbiter_1_io_output_s2mPipe_valid;
  reg                 streamArbiter_1_io_output_s2mPipe_ready;
  wire       [2:0]    streamArbiter_1_io_output_s2mPipe_payload_id;
  wire       [27:0]   streamArbiter_1_io_output_s2mPipe_payload_x0;
  wire       [27:0]   streamArbiter_1_io_output_s2mPipe_payload_y0;
  wire       [3:0]    streamArbiter_1_io_output_s2mPipe_payload_iteration;
  wire                streamArbiter_1_io_output_s2mPipe_payload_done;
  wire       [27:0]   streamArbiter_1_io_output_s2mPipe_payload_x;
  wire       [27:0]   streamArbiter_1_io_output_s2mPipe_payload_y;
  reg                 streamArbiter_1_io_output_rValid;
  reg        [2:0]    streamArbiter_1_io_output_rData_id;
  reg        [27:0]   streamArbiter_1_io_output_rData_x0;
  reg        [27:0]   streamArbiter_1_io_output_rData_y0;
  reg        [3:0]    streamArbiter_1_io_output_rData_iteration;
  reg                 streamArbiter_1_io_output_rData_done;
  reg        [27:0]   streamArbiter_1_io_output_rData_x;
  reg        [27:0]   streamArbiter_1_io_output_rData_y;
  wire       [3:0]    _zz_payload_iteration;
  wire                _zz_payload_done;
  wire                mulStage_input_valid;
  wire                mulStage_input_ready;
  wire       [2:0]    mulStage_input_payload_id;
  wire       [27:0]   mulStage_input_payload_x0;
  wire       [27:0]   mulStage_input_payload_y0;
  wire       [3:0]    mulStage_input_payload_iteration;
  wire                mulStage_input_payload_done;
  wire       [27:0]   mulStage_input_payload_x;
  wire       [27:0]   mulStage_input_payload_y;
  reg                 streamArbiter_1_io_output_s2mPipe_rValid;
  reg        [2:0]    streamArbiter_1_io_output_s2mPipe_rData_id;
  reg        [27:0]   streamArbiter_1_io_output_s2mPipe_rData_x0;
  reg        [27:0]   streamArbiter_1_io_output_s2mPipe_rData_y0;
  reg        [3:0]    streamArbiter_1_io_output_s2mPipe_rData_iteration;
  reg                 streamArbiter_1_io_output_s2mPipe_rData_done;
  reg        [27:0]   streamArbiter_1_io_output_s2mPipe_rData_x;
  reg        [27:0]   streamArbiter_1_io_output_s2mPipe_rData_y;
  wire                when_Stream_l368;
  wire                mulStage_output_valid;
  reg                 mulStage_output_ready;
  wire       [2:0]    mulStage_output_payload_id;
  wire       [27:0]   mulStage_output_payload_x0;
  wire       [27:0]   mulStage_output_payload_y0;
  wire       [3:0]    mulStage_output_payload_iteration;
  wire                mulStage_output_payload_done;
  wire       [27:0]   mulStage_output_payload_xx;
  wire       [27:0]   mulStage_output_payload_yy;
  wire       [27:0]   mulStage_output_payload_xy;
  wire                mulStage_output_m2sPipe_valid;
  reg                 mulStage_output_m2sPipe_ready;
  wire       [2:0]    mulStage_output_m2sPipe_payload_id;
  wire       [27:0]   mulStage_output_m2sPipe_payload_x0;
  wire       [27:0]   mulStage_output_m2sPipe_payload_y0;
  wire       [3:0]    mulStage_output_m2sPipe_payload_iteration;
  wire                mulStage_output_m2sPipe_payload_done;
  wire       [27:0]   mulStage_output_m2sPipe_payload_xx;
  wire       [27:0]   mulStage_output_m2sPipe_payload_yy;
  wire       [27:0]   mulStage_output_m2sPipe_payload_xy;
  reg                 mulStage_output_rValid;
  reg        [2:0]    mulStage_output_rData_id;
  reg        [27:0]   mulStage_output_rData_x0;
  reg        [27:0]   mulStage_output_rData_y0;
  reg        [3:0]    mulStage_output_rData_iteration;
  reg                 mulStage_output_rData_done;
  reg        [27:0]   mulStage_output_rData_xx;
  reg        [27:0]   mulStage_output_rData_yy;
  reg        [27:0]   mulStage_output_rData_xy;
  wire                when_Stream_l368_1;
  wire                addStage_input_valid;
  wire                addStage_input_ready;
  wire       [2:0]    addStage_input_payload_id;
  wire       [27:0]   addStage_input_payload_x0;
  wire       [27:0]   addStage_input_payload_y0;
  wire       [3:0]    addStage_input_payload_iteration;
  wire                addStage_input_payload_done;
  wire       [27:0]   addStage_input_payload_xx;
  wire       [27:0]   addStage_input_payload_yy;
  wire       [27:0]   addStage_input_payload_xy;
  reg                 mulStage_output_m2sPipe_rValid;
  reg        [2:0]    mulStage_output_m2sPipe_rData_id;
  reg        [27:0]   mulStage_output_m2sPipe_rData_x0;
  reg        [27:0]   mulStage_output_m2sPipe_rData_y0;
  reg        [3:0]    mulStage_output_m2sPipe_rData_iteration;
  reg                 mulStage_output_m2sPipe_rData_done;
  reg        [27:0]   mulStage_output_m2sPipe_rData_xx;
  reg        [27:0]   mulStage_output_m2sPipe_rData_yy;
  reg        [27:0]   mulStage_output_m2sPipe_rData_xy;
  wire                when_Stream_l368_2;
  wire                addStage_output_valid;
  reg                 addStage_output_ready;
  wire       [2:0]    addStage_output_payload_id;
  wire       [27:0]   addStage_output_payload_x0;
  wire       [27:0]   addStage_output_payload_y0;
  reg        [3:0]    addStage_output_payload_iteration;
  reg                 addStage_output_payload_done;
  wire       [27:0]   addStage_output_payload_x;
  wire       [27:0]   addStage_output_payload_y;
  wire                router_input_valid;
  wire                router_input_ready;
  wire       [2:0]    router_input_payload_id;
  wire       [27:0]   router_input_payload_x0;
  wire       [27:0]   router_input_payload_y0;
  wire       [3:0]    router_input_payload_iteration;
  wire                router_input_payload_done;
  wire       [27:0]   router_input_payload_x;
  wire       [27:0]   router_input_payload_y;
  reg                 addStage_output_rValid;
  reg        [2:0]    addStage_output_rData_id;
  reg        [27:0]   addStage_output_rData_x0;
  reg        [27:0]   addStage_output_rData_y0;
  reg        [3:0]    addStage_output_rData_iteration;
  reg                 addStage_output_rData_done;
  reg        [27:0]   addStage_output_rData_x;
  reg        [27:0]   addStage_output_rData_y;
  wire                when_Stream_l368_3;
  wire                io_rsp_fire;
  reg                 router_wantedId_willIncrement;
  wire                router_wantedId_willClear;
  reg        [2:0]    router_wantedId_valueNext;
  reg        [2:0]    router_wantedId_value;
  wire                router_wantedId_willOverflowIfInc;
  wire                router_wantedId_willOverflow;
  wire                router_rspValid;

  assign _zz_inserter_freeId_valueNext_1 = inserter_freeId_willIncrement;
  assign _zz_inserter_freeId_valueNext = {2'd0, _zz_inserter_freeId_valueNext_1};
  assign _zz_mulStage_output_payload_xx = (_zz_mulStage_output_payload_xx_1 >>> 20);
  assign _zz_mulStage_output_payload_xx_1 = ($signed(mulStage_input_payload_x) * $signed(mulStage_input_payload_x));
  assign _zz_mulStage_output_payload_yy = (_zz_mulStage_output_payload_yy_1 >>> 20);
  assign _zz_mulStage_output_payload_yy_1 = ($signed(mulStage_input_payload_y) * $signed(mulStage_input_payload_y));
  assign _zz_mulStage_output_payload_xy = (_zz_mulStage_output_payload_xy_1 >>> 20);
  assign _zz_mulStage_output_payload_xy_1 = ($signed(mulStage_input_payload_x) * $signed(mulStage_input_payload_y));
  assign _zz_addStage_output_payload_x = ($signed(addStage_input_payload_xx) - $signed(addStage_input_payload_yy));
  assign _zz_addStage_output_payload_y = ($signed(_zz_addStage_output_payload_y_1) + $signed(_zz_addStage_output_payload_y_2));
  assign _zz_addStage_output_payload_y_1 = ({1'd0,addStage_input_payload_xy} <<< 1);
  assign _zz_addStage_output_payload_y_2 = {{1{addStage_input_payload_y0[27]}}, addStage_input_payload_y0};
  assign _zz_addStage_output_payload_done = 28'h0400000;
  assign _zz_addStage_output_payload_done_1 = ($signed(addStage_input_payload_xx) + $signed(addStage_input_payload_yy));
  assign _zz_addStage_output_payload_iteration_1 = (! addStage_output_payload_done);
  assign _zz_addStage_output_payload_iteration = {3'd0, _zz_addStage_output_payload_iteration_1};
  assign _zz_router_wantedId_valueNext_1 = router_wantedId_willIncrement;
  assign _zz_router_wantedId_valueNext = {2'd0, _zz_router_wantedId_valueNext_1};
  StreamArbiter streamArbiter_1 (
    .io_inputs_0_valid             (inserter_loopback_valid                         ), //i
    .io_inputs_0_ready             (streamArbiter_1_io_inputs_0_ready               ), //o
    .io_inputs_0_payload_id        (inserter_loopback_payload_id[2:0]               ), //i
    .io_inputs_0_payload_x0        (inserter_loopback_payload_x0[27:0]              ), //i
    .io_inputs_0_payload_y0        (inserter_loopback_payload_y0[27:0]              ), //i
    .io_inputs_0_payload_iteration (inserter_loopback_payload_iteration[3:0]        ), //i
    .io_inputs_0_payload_done      (inserter_loopback_payload_done                  ), //i
    .io_inputs_0_payload_x         (inserter_loopback_payload_x[27:0]               ), //i
    .io_inputs_0_payload_y         (inserter_loopback_payload_y[27:0]               ), //i
    .io_inputs_1_valid             (inserter_cmdContext_valid                       ), //i
    .io_inputs_1_ready             (streamArbiter_1_io_inputs_1_ready               ), //o
    .io_inputs_1_payload_id        (inserter_cmdContext_payload_id[2:0]             ), //i
    .io_inputs_1_payload_x0        (inserter_cmdContext_payload_x0[27:0]            ), //i
    .io_inputs_1_payload_y0        (inserter_cmdContext_payload_y0[27:0]            ), //i
    .io_inputs_1_payload_iteration (inserter_cmdContext_payload_iteration[3:0]      ), //i
    .io_inputs_1_payload_done      (inserter_cmdContext_payload_done                ), //i
    .io_inputs_1_payload_x         (inserter_cmdContext_payload_x[27:0]             ), //i
    .io_inputs_1_payload_y         (inserter_cmdContext_payload_y[27:0]             ), //i
    .io_output_valid               (streamArbiter_1_io_output_valid                 ), //o
    .io_output_ready               (streamArbiter_1_io_output_ready                 ), //i
    .io_output_payload_id          (streamArbiter_1_io_output_payload_id[2:0]       ), //o
    .io_output_payload_x0          (streamArbiter_1_io_output_payload_x0[27:0]      ), //o
    .io_output_payload_y0          (streamArbiter_1_io_output_payload_y0[27:0]      ), //o
    .io_output_payload_iteration   (streamArbiter_1_io_output_payload_iteration[3:0]), //o
    .io_output_payload_done        (streamArbiter_1_io_output_payload_done          ), //o
    .io_output_payload_x           (streamArbiter_1_io_output_payload_x[27:0]       ), //o
    .io_output_payload_y           (streamArbiter_1_io_output_payload_y[27:0]       ), //o
    .io_chosen                     (streamArbiter_1_io_chosen                       ), //o
    .io_chosenOH                   (streamArbiter_1_io_chosenOH[1:0]                ), //o
    .clk                           (clk                                             ), //i
    .reset                         (reset                                           )  //i
  );
  StreamDemux streamDemux_1 (
    .io_select                      (streamDemux_1_io_select                          ), //i
    .io_input_valid                 (router_input_valid                               ), //i
    .io_input_ready                 (streamDemux_1_io_input_ready                     ), //o
    .io_input_payload_id            (router_input_payload_id[2:0]                     ), //i
    .io_input_payload_x0            (router_input_payload_x0[27:0]                    ), //i
    .io_input_payload_y0            (router_input_payload_y0[27:0]                    ), //i
    .io_input_payload_iteration     (router_input_payload_iteration[3:0]              ), //i
    .io_input_payload_done          (router_input_payload_done                        ), //i
    .io_input_payload_x             (router_input_payload_x[27:0]                     ), //i
    .io_input_payload_y             (router_input_payload_y[27:0]                     ), //i
    .io_outputs_0_valid             (streamDemux_1_io_outputs_0_valid                 ), //o
    .io_outputs_0_ready             (inserter_loopback_ready                          ), //i
    .io_outputs_0_payload_id        (streamDemux_1_io_outputs_0_payload_id[2:0]       ), //o
    .io_outputs_0_payload_x0        (streamDemux_1_io_outputs_0_payload_x0[27:0]      ), //o
    .io_outputs_0_payload_y0        (streamDemux_1_io_outputs_0_payload_y0[27:0]      ), //o
    .io_outputs_0_payload_iteration (streamDemux_1_io_outputs_0_payload_iteration[3:0]), //o
    .io_outputs_0_payload_done      (streamDemux_1_io_outputs_0_payload_done          ), //o
    .io_outputs_0_payload_x         (streamDemux_1_io_outputs_0_payload_x[27:0]       ), //o
    .io_outputs_0_payload_y         (streamDemux_1_io_outputs_0_payload_y[27:0]       ), //o
    .io_outputs_1_valid             (streamDemux_1_io_outputs_1_valid                 ), //o
    .io_outputs_1_ready             (io_rsp_ready                                     ), //i
    .io_outputs_1_payload_id        (streamDemux_1_io_outputs_1_payload_id[2:0]       ), //o
    .io_outputs_1_payload_x0        (streamDemux_1_io_outputs_1_payload_x0[27:0]      ), //o
    .io_outputs_1_payload_y0        (streamDemux_1_io_outputs_1_payload_y0[27:0]      ), //o
    .io_outputs_1_payload_iteration (streamDemux_1_io_outputs_1_payload_iteration[3:0]), //o
    .io_outputs_1_payload_done      (streamDemux_1_io_outputs_1_payload_done          ), //o
    .io_outputs_1_payload_x         (streamDemux_1_io_outputs_1_payload_x[27:0]       ), //o
    .io_outputs_1_payload_y         (streamDemux_1_io_outputs_1_payload_y[27:0]       )  //o
  );
  assign io_cmd_fire = (io_cmd_valid && io_cmd_ready);
  always @(*) begin
    inserter_freeId_willIncrement = 1'b0;
    if(io_cmd_fire) begin
      inserter_freeId_willIncrement = 1'b1;
    end
  end

  assign inserter_freeId_willClear = 1'b0;
  assign inserter_freeId_willOverflowIfInc = (inserter_freeId_value == 3'b111);
  assign inserter_freeId_willOverflow = (inserter_freeId_willOverflowIfInc && inserter_freeId_willIncrement);
  always @(*) begin
    inserter_freeId_valueNext = (inserter_freeId_value + _zz_inserter_freeId_valueNext);
    if(inserter_freeId_willClear) begin
      inserter_freeId_valueNext = 3'b000;
    end
  end

  assign inserter_cmdContext_valid = io_cmd_valid;
  assign io_cmd_ready = inserter_cmdContext_ready;
  assign inserter_cmdContext_payload_id = inserter_freeId_value;
  assign inserter_cmdContext_payload_x0 = io_cmd_payload_x;
  assign inserter_cmdContext_payload_y0 = io_cmd_payload_y;
  assign inserter_cmdContext_payload_x = 28'h0;
  assign inserter_cmdContext_payload_y = 28'h0;
  assign inserter_loopback_ready = streamArbiter_1_io_inputs_0_ready;
  assign inserter_cmdContext_ready = streamArbiter_1_io_inputs_1_ready;
  assign streamArbiter_1_io_output_ready = (! streamArbiter_1_io_output_rValid);
  assign streamArbiter_1_io_output_s2mPipe_valid = (streamArbiter_1_io_output_valid || streamArbiter_1_io_output_rValid);
  assign _zz_payload_iteration = (streamArbiter_1_io_output_rValid ? streamArbiter_1_io_output_rData_iteration : streamArbiter_1_io_output_payload_iteration);
  assign _zz_payload_done = (streamArbiter_1_io_output_rValid ? streamArbiter_1_io_output_rData_done : streamArbiter_1_io_output_payload_done);
  assign streamArbiter_1_io_output_s2mPipe_payload_id = (streamArbiter_1_io_output_rValid ? streamArbiter_1_io_output_rData_id : streamArbiter_1_io_output_payload_id);
  assign streamArbiter_1_io_output_s2mPipe_payload_x0 = (streamArbiter_1_io_output_rValid ? streamArbiter_1_io_output_rData_x0 : streamArbiter_1_io_output_payload_x0);
  assign streamArbiter_1_io_output_s2mPipe_payload_y0 = (streamArbiter_1_io_output_rValid ? streamArbiter_1_io_output_rData_y0 : streamArbiter_1_io_output_payload_y0);
  assign streamArbiter_1_io_output_s2mPipe_payload_iteration = _zz_payload_iteration;
  assign streamArbiter_1_io_output_s2mPipe_payload_done = _zz_payload_done;
  assign streamArbiter_1_io_output_s2mPipe_payload_x = (streamArbiter_1_io_output_rValid ? streamArbiter_1_io_output_rData_x : streamArbiter_1_io_output_payload_x);
  assign streamArbiter_1_io_output_s2mPipe_payload_y = (streamArbiter_1_io_output_rValid ? streamArbiter_1_io_output_rData_y : streamArbiter_1_io_output_payload_y);
  always @(*) begin
    streamArbiter_1_io_output_s2mPipe_ready = mulStage_input_ready;
    if(when_Stream_l368) begin
      streamArbiter_1_io_output_s2mPipe_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! mulStage_input_valid);
  assign mulStage_input_valid = streamArbiter_1_io_output_s2mPipe_rValid;
  assign mulStage_input_payload_id = streamArbiter_1_io_output_s2mPipe_rData_id;
  assign mulStage_input_payload_x0 = streamArbiter_1_io_output_s2mPipe_rData_x0;
  assign mulStage_input_payload_y0 = streamArbiter_1_io_output_s2mPipe_rData_y0;
  assign mulStage_input_payload_iteration = streamArbiter_1_io_output_s2mPipe_rData_iteration;
  assign mulStage_input_payload_done = streamArbiter_1_io_output_s2mPipe_rData_done;
  assign mulStage_input_payload_x = streamArbiter_1_io_output_s2mPipe_rData_x;
  assign mulStage_input_payload_y = streamArbiter_1_io_output_s2mPipe_rData_y;
  assign mulStage_output_valid = mulStage_input_valid;
  assign mulStage_input_ready = mulStage_output_ready;
  assign mulStage_output_payload_id = mulStage_input_payload_id;
  assign mulStage_output_payload_x0 = mulStage_input_payload_x0;
  assign mulStage_output_payload_y0 = mulStage_input_payload_y0;
  assign mulStage_output_payload_iteration = mulStage_input_payload_iteration;
  assign mulStage_output_payload_done = mulStage_input_payload_done;
  assign mulStage_output_payload_xx = _zz_mulStage_output_payload_xx[27:0];
  assign mulStage_output_payload_yy = _zz_mulStage_output_payload_yy[27:0];
  assign mulStage_output_payload_xy = _zz_mulStage_output_payload_xy[27:0];
  always @(*) begin
    mulStage_output_ready = mulStage_output_m2sPipe_ready;
    if(when_Stream_l368_1) begin
      mulStage_output_ready = 1'b1;
    end
  end

  assign when_Stream_l368_1 = (! mulStage_output_m2sPipe_valid);
  assign mulStage_output_m2sPipe_valid = mulStage_output_rValid;
  assign mulStage_output_m2sPipe_payload_id = mulStage_output_rData_id;
  assign mulStage_output_m2sPipe_payload_x0 = mulStage_output_rData_x0;
  assign mulStage_output_m2sPipe_payload_y0 = mulStage_output_rData_y0;
  assign mulStage_output_m2sPipe_payload_iteration = mulStage_output_rData_iteration;
  assign mulStage_output_m2sPipe_payload_done = mulStage_output_rData_done;
  assign mulStage_output_m2sPipe_payload_xx = mulStage_output_rData_xx;
  assign mulStage_output_m2sPipe_payload_yy = mulStage_output_rData_yy;
  assign mulStage_output_m2sPipe_payload_xy = mulStage_output_rData_xy;
  always @(*) begin
    mulStage_output_m2sPipe_ready = addStage_input_ready;
    if(when_Stream_l368_2) begin
      mulStage_output_m2sPipe_ready = 1'b1;
    end
  end

  assign when_Stream_l368_2 = (! addStage_input_valid);
  assign addStage_input_valid = mulStage_output_m2sPipe_rValid;
  assign addStage_input_payload_id = mulStage_output_m2sPipe_rData_id;
  assign addStage_input_payload_x0 = mulStage_output_m2sPipe_rData_x0;
  assign addStage_input_payload_y0 = mulStage_output_m2sPipe_rData_y0;
  assign addStage_input_payload_iteration = mulStage_output_m2sPipe_rData_iteration;
  assign addStage_input_payload_done = mulStage_output_m2sPipe_rData_done;
  assign addStage_input_payload_xx = mulStage_output_m2sPipe_rData_xx;
  assign addStage_input_payload_yy = mulStage_output_m2sPipe_rData_yy;
  assign addStage_input_payload_xy = mulStage_output_m2sPipe_rData_xy;
  assign addStage_output_valid = addStage_input_valid;
  assign addStage_input_ready = addStage_output_ready;
  assign addStage_output_payload_id = addStage_input_payload_id;
  assign addStage_output_payload_x0 = addStage_input_payload_x0;
  assign addStage_output_payload_y0 = addStage_input_payload_y0;
  always @(*) begin
    addStage_output_payload_iteration = addStage_input_payload_iteration;
    addStage_output_payload_iteration = (addStage_input_payload_iteration + _zz_addStage_output_payload_iteration);
  end

  always @(*) begin
    addStage_output_payload_done = addStage_input_payload_done;
    addStage_output_payload_done = ((addStage_input_payload_done || ($signed(_zz_addStage_output_payload_done) <= $signed(_zz_addStage_output_payload_done_1))) || (addStage_input_payload_iteration == 4'b1111));
  end

  assign addStage_output_payload_x = ($signed(_zz_addStage_output_payload_x) + $signed(addStage_input_payload_x0));
  assign addStage_output_payload_y = _zz_addStage_output_payload_y[27:0];
  always @(*) begin
    addStage_output_ready = router_input_ready;
    if(when_Stream_l368_3) begin
      addStage_output_ready = 1'b1;
    end
  end

  assign when_Stream_l368_3 = (! router_input_valid);
  assign router_input_valid = addStage_output_rValid;
  assign router_input_payload_id = addStage_output_rData_id;
  assign router_input_payload_x0 = addStage_output_rData_x0;
  assign router_input_payload_y0 = addStage_output_rData_y0;
  assign router_input_payload_iteration = addStage_output_rData_iteration;
  assign router_input_payload_done = addStage_output_rData_done;
  assign router_input_payload_x = addStage_output_rData_x;
  assign router_input_payload_y = addStage_output_rData_y;
  assign io_rsp_fire = (io_rsp_valid && io_rsp_ready);
  always @(*) begin
    router_wantedId_willIncrement = 1'b0;
    if(io_rsp_fire) begin
      router_wantedId_willIncrement = 1'b1;
    end
  end

  assign router_wantedId_willClear = 1'b0;
  assign router_wantedId_willOverflowIfInc = (router_wantedId_value == 3'b111);
  assign router_wantedId_willOverflow = (router_wantedId_willOverflowIfInc && router_wantedId_willIncrement);
  always @(*) begin
    router_wantedId_valueNext = (router_wantedId_value + _zz_router_wantedId_valueNext);
    if(router_wantedId_willClear) begin
      router_wantedId_valueNext = 3'b000;
    end
  end

  assign router_rspValid = ((router_input_valid && router_input_payload_done) && (router_wantedId_value == router_input_payload_id));
  assign router_input_ready = streamDemux_1_io_input_ready;
  assign streamDemux_1_io_select = router_rspValid;
  assign io_rsp_valid = streamDemux_1_io_outputs_1_valid;
  assign io_rsp_payload_iteration = router_input_payload_iteration;
  assign inserter_loopback_valid = streamDemux_1_io_outputs_0_valid;
  assign inserter_loopback_payload_id = streamDemux_1_io_outputs_0_payload_id;
  assign inserter_loopback_payload_x0 = streamDemux_1_io_outputs_0_payload_x0;
  assign inserter_loopback_payload_y0 = streamDemux_1_io_outputs_0_payload_y0;
  assign inserter_loopback_payload_iteration = streamDemux_1_io_outputs_0_payload_iteration;
  assign inserter_loopback_payload_done = streamDemux_1_io_outputs_0_payload_done;
  assign inserter_loopback_payload_x = streamDemux_1_io_outputs_0_payload_x;
  assign inserter_loopback_payload_y = streamDemux_1_io_outputs_0_payload_y;
  assign inserter_cmdContext_payload_iteration = 4'b0000;
  assign inserter_cmdContext_payload_done = 1'b0;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      inserter_freeId_value <= 3'b000;
      streamArbiter_1_io_output_rValid <= 1'b0;
      streamArbiter_1_io_output_s2mPipe_rValid <= 1'b0;
      mulStage_output_rValid <= 1'b0;
      mulStage_output_m2sPipe_rValid <= 1'b0;
      addStage_output_rValid <= 1'b0;
      router_wantedId_value <= 3'b000;
    end else begin
      inserter_freeId_value <= inserter_freeId_valueNext;
      if(streamArbiter_1_io_output_valid) begin
        streamArbiter_1_io_output_rValid <= 1'b1;
      end
      if(streamArbiter_1_io_output_s2mPipe_ready) begin
        streamArbiter_1_io_output_rValid <= 1'b0;
      end
      if(streamArbiter_1_io_output_s2mPipe_ready) begin
        streamArbiter_1_io_output_s2mPipe_rValid <= streamArbiter_1_io_output_s2mPipe_valid;
      end
      if(mulStage_output_ready) begin
        mulStage_output_rValid <= mulStage_output_valid;
      end
      if(mulStage_output_m2sPipe_ready) begin
        mulStage_output_m2sPipe_rValid <= mulStage_output_m2sPipe_valid;
      end
      if(addStage_output_ready) begin
        addStage_output_rValid <= addStage_output_valid;
      end
      router_wantedId_value <= router_wantedId_valueNext;
    end
  end

  always @(posedge clk) begin
    if(streamArbiter_1_io_output_ready) begin
      streamArbiter_1_io_output_rData_id <= streamArbiter_1_io_output_payload_id;
      streamArbiter_1_io_output_rData_x0 <= streamArbiter_1_io_output_payload_x0;
      streamArbiter_1_io_output_rData_y0 <= streamArbiter_1_io_output_payload_y0;
      streamArbiter_1_io_output_rData_iteration <= streamArbiter_1_io_output_payload_iteration;
      streamArbiter_1_io_output_rData_done <= streamArbiter_1_io_output_payload_done;
      streamArbiter_1_io_output_rData_x <= streamArbiter_1_io_output_payload_x;
      streamArbiter_1_io_output_rData_y <= streamArbiter_1_io_output_payload_y;
    end
    if(streamArbiter_1_io_output_s2mPipe_ready) begin
      streamArbiter_1_io_output_s2mPipe_rData_id <= streamArbiter_1_io_output_s2mPipe_payload_id;
      streamArbiter_1_io_output_s2mPipe_rData_x0 <= streamArbiter_1_io_output_s2mPipe_payload_x0;
      streamArbiter_1_io_output_s2mPipe_rData_y0 <= streamArbiter_1_io_output_s2mPipe_payload_y0;
      streamArbiter_1_io_output_s2mPipe_rData_iteration <= streamArbiter_1_io_output_s2mPipe_payload_iteration;
      streamArbiter_1_io_output_s2mPipe_rData_done <= streamArbiter_1_io_output_s2mPipe_payload_done;
      streamArbiter_1_io_output_s2mPipe_rData_x <= streamArbiter_1_io_output_s2mPipe_payload_x;
      streamArbiter_1_io_output_s2mPipe_rData_y <= streamArbiter_1_io_output_s2mPipe_payload_y;
    end
    if(mulStage_output_ready) begin
      mulStage_output_rData_id <= mulStage_output_payload_id;
      mulStage_output_rData_x0 <= mulStage_output_payload_x0;
      mulStage_output_rData_y0 <= mulStage_output_payload_y0;
      mulStage_output_rData_iteration <= mulStage_output_payload_iteration;
      mulStage_output_rData_done <= mulStage_output_payload_done;
      mulStage_output_rData_xx <= mulStage_output_payload_xx;
      mulStage_output_rData_yy <= mulStage_output_payload_yy;
      mulStage_output_rData_xy <= mulStage_output_payload_xy;
    end
    if(mulStage_output_m2sPipe_ready) begin
      mulStage_output_m2sPipe_rData_id <= mulStage_output_m2sPipe_payload_id;
      mulStage_output_m2sPipe_rData_x0 <= mulStage_output_m2sPipe_payload_x0;
      mulStage_output_m2sPipe_rData_y0 <= mulStage_output_m2sPipe_payload_y0;
      mulStage_output_m2sPipe_rData_iteration <= mulStage_output_m2sPipe_payload_iteration;
      mulStage_output_m2sPipe_rData_done <= mulStage_output_m2sPipe_payload_done;
      mulStage_output_m2sPipe_rData_xx <= mulStage_output_m2sPipe_payload_xx;
      mulStage_output_m2sPipe_rData_yy <= mulStage_output_m2sPipe_payload_yy;
      mulStage_output_m2sPipe_rData_xy <= mulStage_output_m2sPipe_payload_xy;
    end
    if(addStage_output_ready) begin
      addStage_output_rData_id <= addStage_output_payload_id;
      addStage_output_rData_x0 <= addStage_output_payload_x0;
      addStage_output_rData_y0 <= addStage_output_payload_y0;
      addStage_output_rData_iteration <= addStage_output_payload_iteration;
      addStage_output_rData_done <= addStage_output_payload_done;
      addStage_output_rData_x <= addStage_output_payload_x;
      addStage_output_rData_y <= addStage_output_payload_y;
    end
  end


endmodule

module StreamDemux (
  input      [0:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input      [2:0]    io_input_payload_id,
  input      [27:0]   io_input_payload_x0,
  input      [27:0]   io_input_payload_y0,
  input      [3:0]    io_input_payload_iteration,
  input               io_input_payload_done,
  input      [27:0]   io_input_payload_x,
  input      [27:0]   io_input_payload_y,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output     [2:0]    io_outputs_0_payload_id,
  output     [27:0]   io_outputs_0_payload_x0,
  output     [27:0]   io_outputs_0_payload_y0,
  output     [3:0]    io_outputs_0_payload_iteration,
  output              io_outputs_0_payload_done,
  output     [27:0]   io_outputs_0_payload_x,
  output     [27:0]   io_outputs_0_payload_y,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output     [2:0]    io_outputs_1_payload_id,
  output     [27:0]   io_outputs_1_payload_x0,
  output     [27:0]   io_outputs_1_payload_y0,
  output     [3:0]    io_outputs_1_payload_iteration,
  output              io_outputs_1_payload_done,
  output     [27:0]   io_outputs_1_payload_x,
  output     [27:0]   io_outputs_1_payload_y
);

  wire                when_Stream_l827;
  wire                when_Stream_l827_1;

  always @(*) begin
    io_input_ready = 1'b0;
    if(!when_Stream_l827) begin
      io_input_ready = io_outputs_0_ready;
    end
    if(!when_Stream_l827_1) begin
      io_input_ready = io_outputs_1_ready;
    end
  end

  assign io_outputs_0_payload_id = io_input_payload_id;
  assign io_outputs_0_payload_x0 = io_input_payload_x0;
  assign io_outputs_0_payload_y0 = io_input_payload_y0;
  assign io_outputs_0_payload_iteration = io_input_payload_iteration;
  assign io_outputs_0_payload_done = io_input_payload_done;
  assign io_outputs_0_payload_x = io_input_payload_x;
  assign io_outputs_0_payload_y = io_input_payload_y;
  assign when_Stream_l827 = (1'b0 != io_select);
  always @(*) begin
    if(when_Stream_l827) begin
      io_outputs_0_valid = 1'b0;
    end else begin
      io_outputs_0_valid = io_input_valid;
    end
  end

  assign io_outputs_1_payload_id = io_input_payload_id;
  assign io_outputs_1_payload_x0 = io_input_payload_x0;
  assign io_outputs_1_payload_y0 = io_input_payload_y0;
  assign io_outputs_1_payload_iteration = io_input_payload_iteration;
  assign io_outputs_1_payload_done = io_input_payload_done;
  assign io_outputs_1_payload_x = io_input_payload_x;
  assign io_outputs_1_payload_y = io_input_payload_y;
  assign when_Stream_l827_1 = (1'b1 != io_select);
  always @(*) begin
    if(when_Stream_l827_1) begin
      io_outputs_1_valid = 1'b0;
    end else begin
      io_outputs_1_valid = io_input_valid;
    end
  end


endmodule

module StreamArbiter (
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input      [2:0]    io_inputs_0_payload_id,
  input      [27:0]   io_inputs_0_payload_x0,
  input      [27:0]   io_inputs_0_payload_y0,
  input      [3:0]    io_inputs_0_payload_iteration,
  input               io_inputs_0_payload_done,
  input      [27:0]   io_inputs_0_payload_x,
  input      [27:0]   io_inputs_0_payload_y,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input      [2:0]    io_inputs_1_payload_id,
  input      [27:0]   io_inputs_1_payload_x0,
  input      [27:0]   io_inputs_1_payload_y0,
  input      [3:0]    io_inputs_1_payload_iteration,
  input               io_inputs_1_payload_done,
  input      [27:0]   io_inputs_1_payload_x,
  input      [27:0]   io_inputs_1_payload_y,
  output              io_output_valid,
  input               io_output_ready,
  output     [2:0]    io_output_payload_id,
  output     [27:0]   io_output_payload_x0,
  output     [27:0]   io_output_payload_y0,
  output     [3:0]    io_output_payload_iteration,
  output              io_output_payload_done,
  output     [27:0]   io_output_payload_x,
  output     [27:0]   io_output_payload_y,
  output     [0:0]    io_chosen,
  output     [1:0]    io_chosenOH,
  input               clk,
  input               reset
);

  wire       [1:0]    _zz_maskProposal_1_1;
  wire       [1:0]    _zz_maskProposal_1_2;
  wire                locked;
  wire                maskProposal_0;
  wire                maskProposal_1;
  reg                 maskLocked_0;
  reg                 maskLocked_1;
  wire                maskRouted_0;
  wire                maskRouted_1;
  wire       [1:0]    _zz_maskProposal_1;
  wire       [3:0]    _zz_io_output_payload_iteration;
  wire                _zz_io_output_payload_done;
  wire                _zz_io_chosen;

  assign _zz_maskProposal_1_1 = (_zz_maskProposal_1 & (~ _zz_maskProposal_1_2));
  assign _zz_maskProposal_1_2 = (_zz_maskProposal_1 - 2'b01);
  assign locked = 1'b0;
  assign maskRouted_0 = (locked ? maskLocked_0 : maskProposal_0);
  assign maskRouted_1 = (locked ? maskLocked_1 : maskProposal_1);
  assign _zz_maskProposal_1 = {io_inputs_1_valid,io_inputs_0_valid};
  assign maskProposal_0 = io_inputs_0_valid;
  assign maskProposal_1 = _zz_maskProposal_1_1[1];
  assign io_output_valid = ((io_inputs_0_valid && maskRouted_0) || (io_inputs_1_valid && maskRouted_1));
  assign _zz_io_output_payload_iteration = (maskRouted_0 ? io_inputs_0_payload_iteration : io_inputs_1_payload_iteration);
  assign _zz_io_output_payload_done = (maskRouted_0 ? io_inputs_0_payload_done : io_inputs_1_payload_done);
  assign io_output_payload_id = (maskRouted_0 ? io_inputs_0_payload_id : io_inputs_1_payload_id);
  assign io_output_payload_x0 = (maskRouted_0 ? io_inputs_0_payload_x0 : io_inputs_1_payload_x0);
  assign io_output_payload_y0 = (maskRouted_0 ? io_inputs_0_payload_y0 : io_inputs_1_payload_y0);
  assign io_output_payload_iteration = _zz_io_output_payload_iteration;
  assign io_output_payload_done = _zz_io_output_payload_done;
  assign io_output_payload_x = (maskRouted_0 ? io_inputs_0_payload_x : io_inputs_1_payload_x);
  assign io_output_payload_y = (maskRouted_0 ? io_inputs_0_payload_y : io_inputs_1_payload_y);
  assign io_inputs_0_ready = (maskRouted_0 && io_output_ready);
  assign io_inputs_1_ready = (maskRouted_1 && io_output_ready);
  assign io_chosenOH = {maskRouted_1,maskRouted_0};
  assign _zz_io_chosen = io_chosenOH[1];
  assign io_chosen = _zz_io_chosen;
  always @(posedge clk) begin
    if(io_output_valid) begin
      maskLocked_0 <= maskRouted_0;
      maskLocked_1 <= maskRouted_1;
    end
  end


endmodule
