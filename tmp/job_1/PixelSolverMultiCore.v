// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : PixelSolverMultiCore
// Git hash  : 5877b7d3b2efe562a8be9ec1a5d1d250c31f7010

`timescale 1ns/1ps

module PixelSolverMultiCore (
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

  reg                 streamDemux_1_io_outputs_0_ready;
  reg                 streamDemux_1_io_outputs_1_ready;
  reg                 streamDemux_1_io_outputs_2_ready;
  reg                 streamDemux_1_io_outputs_3_ready;
  reg                 streamDemux_1_io_outputs_4_ready;
  reg                 streamDemux_1_io_outputs_5_ready;
  reg                 streamDemux_1_io_outputs_6_ready;
  reg                 streamDemux_1_io_outputs_7_ready;
  reg                 pixelTaskSolver_0_io_rsp_ready;
  reg                 pixelTaskSolver_1_io_rsp_ready;
  reg                 pixelTaskSolver_2_io_rsp_ready;
  reg                 pixelTaskSolver_3_io_rsp_ready;
  reg                 pixelTaskSolver_4_io_rsp_ready;
  reg                 pixelTaskSolver_5_io_rsp_ready;
  reg                 pixelTaskSolver_6_io_rsp_ready;
  reg                 pixelTaskSolver_7_io_rsp_ready;
  wire                streamDemux_1_io_input_ready;
  wire                streamDemux_1_io_outputs_0_valid;
  wire       [27:0]   streamDemux_1_io_outputs_0_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_0_payload_y;
  wire                streamDemux_1_io_outputs_1_valid;
  wire       [27:0]   streamDemux_1_io_outputs_1_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_1_payload_y;
  wire                streamDemux_1_io_outputs_2_valid;
  wire       [27:0]   streamDemux_1_io_outputs_2_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_2_payload_y;
  wire                streamDemux_1_io_outputs_3_valid;
  wire       [27:0]   streamDemux_1_io_outputs_3_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_3_payload_y;
  wire                streamDemux_1_io_outputs_4_valid;
  wire       [27:0]   streamDemux_1_io_outputs_4_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_4_payload_y;
  wire                streamDemux_1_io_outputs_5_valid;
  wire       [27:0]   streamDemux_1_io_outputs_5_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_5_payload_y;
  wire                streamDemux_1_io_outputs_6_valid;
  wire       [27:0]   streamDemux_1_io_outputs_6_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_6_payload_y;
  wire                streamDemux_1_io_outputs_7_valid;
  wire       [27:0]   streamDemux_1_io_outputs_7_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_7_payload_y;
  wire                pixelTaskSolver_0_io_cmd_ready;
  wire                pixelTaskSolver_0_io_rsp_valid;
  wire       [3:0]    pixelTaskSolver_0_io_rsp_payload_iteration;
  wire                pixelTaskSolver_1_io_cmd_ready;
  wire                pixelTaskSolver_1_io_rsp_valid;
  wire       [3:0]    pixelTaskSolver_1_io_rsp_payload_iteration;
  wire                pixelTaskSolver_2_io_cmd_ready;
  wire                pixelTaskSolver_2_io_rsp_valid;
  wire       [3:0]    pixelTaskSolver_2_io_rsp_payload_iteration;
  wire                pixelTaskSolver_3_io_cmd_ready;
  wire                pixelTaskSolver_3_io_rsp_valid;
  wire       [3:0]    pixelTaskSolver_3_io_rsp_payload_iteration;
  wire                pixelTaskSolver_4_io_cmd_ready;
  wire                pixelTaskSolver_4_io_rsp_valid;
  wire       [3:0]    pixelTaskSolver_4_io_rsp_payload_iteration;
  wire                pixelTaskSolver_5_io_cmd_ready;
  wire                pixelTaskSolver_5_io_rsp_valid;
  wire       [3:0]    pixelTaskSolver_5_io_rsp_payload_iteration;
  wire                pixelTaskSolver_6_io_cmd_ready;
  wire                pixelTaskSolver_6_io_rsp_valid;
  wire       [3:0]    pixelTaskSolver_6_io_rsp_payload_iteration;
  wire                pixelTaskSolver_7_io_cmd_ready;
  wire                pixelTaskSolver_7_io_rsp_valid;
  wire       [3:0]    pixelTaskSolver_7_io_rsp_payload_iteration;
  wire                streamMux_1_io_inputs_0_ready;
  wire                streamMux_1_io_inputs_1_ready;
  wire                streamMux_1_io_inputs_2_ready;
  wire                streamMux_1_io_inputs_3_ready;
  wire                streamMux_1_io_inputs_4_ready;
  wire                streamMux_1_io_inputs_5_ready;
  wire                streamMux_1_io_inputs_6_ready;
  wire                streamMux_1_io_inputs_7_ready;
  wire                streamMux_1_io_output_valid;
  wire       [3:0]    streamMux_1_io_output_payload_iteration;
  wire       [2:0]    _zz__zz_io_select_1;
  wire       [0:0]    _zz__zz_io_select_1_1;
  wire       [2:0]    _zz__zz_io_select_4;
  wire       [0:0]    _zz__zz_io_select_4_1;
  reg                 _zz_io_select;
  reg        [2:0]    _zz_io_select_1;
  reg        [2:0]    _zz_io_select_2;
  wire                io_cmd_fire;
  wire                pixelResults_0_valid;
  wire                pixelResults_0_ready;
  wire       [3:0]    pixelResults_0_payload_iteration;
  reg                 pixelTaskSolver_0_io_rsp_rValid;
  reg        [3:0]    pixelTaskSolver_0_io_rsp_rData_iteration;
  wire                when_Stream_l368;
  wire                pixelResults_1_valid;
  wire                pixelResults_1_ready;
  wire       [3:0]    pixelResults_1_payload_iteration;
  reg                 pixelTaskSolver_1_io_rsp_rValid;
  reg        [3:0]    pixelTaskSolver_1_io_rsp_rData_iteration;
  wire                when_Stream_l368_1;
  wire                pixelResults_2_valid;
  wire                pixelResults_2_ready;
  wire       [3:0]    pixelResults_2_payload_iteration;
  reg                 pixelTaskSolver_2_io_rsp_rValid;
  reg        [3:0]    pixelTaskSolver_2_io_rsp_rData_iteration;
  wire                when_Stream_l368_2;
  wire                pixelResults_3_valid;
  wire                pixelResults_3_ready;
  wire       [3:0]    pixelResults_3_payload_iteration;
  reg                 pixelTaskSolver_3_io_rsp_rValid;
  reg        [3:0]    pixelTaskSolver_3_io_rsp_rData_iteration;
  wire                when_Stream_l368_3;
  wire                pixelResults_4_valid;
  wire                pixelResults_4_ready;
  wire       [3:0]    pixelResults_4_payload_iteration;
  reg                 pixelTaskSolver_4_io_rsp_rValid;
  reg        [3:0]    pixelTaskSolver_4_io_rsp_rData_iteration;
  wire                when_Stream_l368_4;
  wire                pixelResults_5_valid;
  wire                pixelResults_5_ready;
  wire       [3:0]    pixelResults_5_payload_iteration;
  reg                 pixelTaskSolver_5_io_rsp_rValid;
  reg        [3:0]    pixelTaskSolver_5_io_rsp_rData_iteration;
  wire                when_Stream_l368_5;
  wire                pixelResults_6_valid;
  wire                pixelResults_6_ready;
  wire       [3:0]    pixelResults_6_payload_iteration;
  reg                 pixelTaskSolver_6_io_rsp_rValid;
  reg        [3:0]    pixelTaskSolver_6_io_rsp_rData_iteration;
  wire                when_Stream_l368_6;
  wire                pixelResults_7_valid;
  wire                pixelResults_7_ready;
  wire       [3:0]    pixelResults_7_payload_iteration;
  reg                 pixelTaskSolver_7_io_rsp_rValid;
  reg        [3:0]    pixelTaskSolver_7_io_rsp_rData_iteration;
  wire                when_Stream_l368_7;
  reg                 _zz_io_select_3;
  reg        [2:0]    _zz_io_select_4;
  reg        [2:0]    _zz_io_select_5;
  wire                streamMux_1_io_output_fire;
  wire                streamDemux_1_io_outputs_0_m2sPipe_valid;
  wire                streamDemux_1_io_outputs_0_m2sPipe_ready;
  wire       [27:0]   streamDemux_1_io_outputs_0_m2sPipe_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_0_m2sPipe_payload_y;
  reg                 streamDemux_1_io_outputs_0_rValid;
  reg        [27:0]   streamDemux_1_io_outputs_0_rData_x;
  reg        [27:0]   streamDemux_1_io_outputs_0_rData_y;
  wire                when_Stream_l368_8;
  wire                streamDemux_1_io_outputs_1_m2sPipe_valid;
  wire                streamDemux_1_io_outputs_1_m2sPipe_ready;
  wire       [27:0]   streamDemux_1_io_outputs_1_m2sPipe_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_1_m2sPipe_payload_y;
  reg                 streamDemux_1_io_outputs_1_rValid;
  reg        [27:0]   streamDemux_1_io_outputs_1_rData_x;
  reg        [27:0]   streamDemux_1_io_outputs_1_rData_y;
  wire                when_Stream_l368_9;
  wire                streamDemux_1_io_outputs_2_m2sPipe_valid;
  wire                streamDemux_1_io_outputs_2_m2sPipe_ready;
  wire       [27:0]   streamDemux_1_io_outputs_2_m2sPipe_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_2_m2sPipe_payload_y;
  reg                 streamDemux_1_io_outputs_2_rValid;
  reg        [27:0]   streamDemux_1_io_outputs_2_rData_x;
  reg        [27:0]   streamDemux_1_io_outputs_2_rData_y;
  wire                when_Stream_l368_10;
  wire                streamDemux_1_io_outputs_3_m2sPipe_valid;
  wire                streamDemux_1_io_outputs_3_m2sPipe_ready;
  wire       [27:0]   streamDemux_1_io_outputs_3_m2sPipe_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_3_m2sPipe_payload_y;
  reg                 streamDemux_1_io_outputs_3_rValid;
  reg        [27:0]   streamDemux_1_io_outputs_3_rData_x;
  reg        [27:0]   streamDemux_1_io_outputs_3_rData_y;
  wire                when_Stream_l368_11;
  wire                streamDemux_1_io_outputs_4_m2sPipe_valid;
  wire                streamDemux_1_io_outputs_4_m2sPipe_ready;
  wire       [27:0]   streamDemux_1_io_outputs_4_m2sPipe_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_4_m2sPipe_payload_y;
  reg                 streamDemux_1_io_outputs_4_rValid;
  reg        [27:0]   streamDemux_1_io_outputs_4_rData_x;
  reg        [27:0]   streamDemux_1_io_outputs_4_rData_y;
  wire                when_Stream_l368_12;
  wire                streamDemux_1_io_outputs_5_m2sPipe_valid;
  wire                streamDemux_1_io_outputs_5_m2sPipe_ready;
  wire       [27:0]   streamDemux_1_io_outputs_5_m2sPipe_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_5_m2sPipe_payload_y;
  reg                 streamDemux_1_io_outputs_5_rValid;
  reg        [27:0]   streamDemux_1_io_outputs_5_rData_x;
  reg        [27:0]   streamDemux_1_io_outputs_5_rData_y;
  wire                when_Stream_l368_13;
  wire                streamDemux_1_io_outputs_6_m2sPipe_valid;
  wire                streamDemux_1_io_outputs_6_m2sPipe_ready;
  wire       [27:0]   streamDemux_1_io_outputs_6_m2sPipe_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_6_m2sPipe_payload_y;
  reg                 streamDemux_1_io_outputs_6_rValid;
  reg        [27:0]   streamDemux_1_io_outputs_6_rData_x;
  reg        [27:0]   streamDemux_1_io_outputs_6_rData_y;
  wire                when_Stream_l368_14;
  wire                streamDemux_1_io_outputs_7_m2sPipe_valid;
  wire                streamDemux_1_io_outputs_7_m2sPipe_ready;
  wire       [27:0]   streamDemux_1_io_outputs_7_m2sPipe_payload_x;
  wire       [27:0]   streamDemux_1_io_outputs_7_m2sPipe_payload_y;
  reg                 streamDemux_1_io_outputs_7_rValid;
  reg        [27:0]   streamDemux_1_io_outputs_7_rData_x;
  reg        [27:0]   streamDemux_1_io_outputs_7_rData_y;
  wire                when_Stream_l368_15;

  assign _zz__zz_io_select_1_1 = _zz_io_select;
  assign _zz__zz_io_select_1 = {2'd0, _zz__zz_io_select_1_1};
  assign _zz__zz_io_select_4_1 = _zz_io_select_3;
  assign _zz__zz_io_select_4 = {2'd0, _zz__zz_io_select_4_1};
  StreamDemux streamDemux_1 (
    .io_select              (_zz_io_select_2[2:0]                      ), //i
    .io_input_valid         (io_cmd_valid                              ), //i
    .io_input_ready         (streamDemux_1_io_input_ready              ), //o
    .io_input_payload_x     (io_cmd_payload_x[27:0]                    ), //i
    .io_input_payload_y     (io_cmd_payload_y[27:0]                    ), //i
    .io_outputs_0_valid     (streamDemux_1_io_outputs_0_valid          ), //o
    .io_outputs_0_ready     (streamDemux_1_io_outputs_0_ready          ), //i
    .io_outputs_0_payload_x (streamDemux_1_io_outputs_0_payload_x[27:0]), //o
    .io_outputs_0_payload_y (streamDemux_1_io_outputs_0_payload_y[27:0]), //o
    .io_outputs_1_valid     (streamDemux_1_io_outputs_1_valid          ), //o
    .io_outputs_1_ready     (streamDemux_1_io_outputs_1_ready          ), //i
    .io_outputs_1_payload_x (streamDemux_1_io_outputs_1_payload_x[27:0]), //o
    .io_outputs_1_payload_y (streamDemux_1_io_outputs_1_payload_y[27:0]), //o
    .io_outputs_2_valid     (streamDemux_1_io_outputs_2_valid          ), //o
    .io_outputs_2_ready     (streamDemux_1_io_outputs_2_ready          ), //i
    .io_outputs_2_payload_x (streamDemux_1_io_outputs_2_payload_x[27:0]), //o
    .io_outputs_2_payload_y (streamDemux_1_io_outputs_2_payload_y[27:0]), //o
    .io_outputs_3_valid     (streamDemux_1_io_outputs_3_valid          ), //o
    .io_outputs_3_ready     (streamDemux_1_io_outputs_3_ready          ), //i
    .io_outputs_3_payload_x (streamDemux_1_io_outputs_3_payload_x[27:0]), //o
    .io_outputs_3_payload_y (streamDemux_1_io_outputs_3_payload_y[27:0]), //o
    .io_outputs_4_valid     (streamDemux_1_io_outputs_4_valid          ), //o
    .io_outputs_4_ready     (streamDemux_1_io_outputs_4_ready          ), //i
    .io_outputs_4_payload_x (streamDemux_1_io_outputs_4_payload_x[27:0]), //o
    .io_outputs_4_payload_y (streamDemux_1_io_outputs_4_payload_y[27:0]), //o
    .io_outputs_5_valid     (streamDemux_1_io_outputs_5_valid          ), //o
    .io_outputs_5_ready     (streamDemux_1_io_outputs_5_ready          ), //i
    .io_outputs_5_payload_x (streamDemux_1_io_outputs_5_payload_x[27:0]), //o
    .io_outputs_5_payload_y (streamDemux_1_io_outputs_5_payload_y[27:0]), //o
    .io_outputs_6_valid     (streamDemux_1_io_outputs_6_valid          ), //o
    .io_outputs_6_ready     (streamDemux_1_io_outputs_6_ready          ), //i
    .io_outputs_6_payload_x (streamDemux_1_io_outputs_6_payload_x[27:0]), //o
    .io_outputs_6_payload_y (streamDemux_1_io_outputs_6_payload_y[27:0]), //o
    .io_outputs_7_valid     (streamDemux_1_io_outputs_7_valid          ), //o
    .io_outputs_7_ready     (streamDemux_1_io_outputs_7_ready          ), //i
    .io_outputs_7_payload_x (streamDemux_1_io_outputs_7_payload_x[27:0]), //o
    .io_outputs_7_payload_y (streamDemux_1_io_outputs_7_payload_y[27:0])  //o
  );
  PixelSolver pixelTaskSolver_0 (
    .io_cmd_valid             (streamDemux_1_io_outputs_0_m2sPipe_valid          ), //i
    .io_cmd_ready             (pixelTaskSolver_0_io_cmd_ready                    ), //o
    .io_cmd_payload_x         (streamDemux_1_io_outputs_0_m2sPipe_payload_x[27:0]), //i
    .io_cmd_payload_y         (streamDemux_1_io_outputs_0_m2sPipe_payload_y[27:0]), //i
    .io_rsp_valid             (pixelTaskSolver_0_io_rsp_valid                    ), //o
    .io_rsp_ready             (pixelTaskSolver_0_io_rsp_ready                    ), //i
    .io_rsp_payload_iteration (pixelTaskSolver_0_io_rsp_payload_iteration[3:0]   ), //o
    .clk                      (clk                                               ), //i
    .reset                    (reset                                             )  //i
  );
  PixelSolver pixelTaskSolver_1 (
    .io_cmd_valid             (streamDemux_1_io_outputs_1_m2sPipe_valid          ), //i
    .io_cmd_ready             (pixelTaskSolver_1_io_cmd_ready                    ), //o
    .io_cmd_payload_x         (streamDemux_1_io_outputs_1_m2sPipe_payload_x[27:0]), //i
    .io_cmd_payload_y         (streamDemux_1_io_outputs_1_m2sPipe_payload_y[27:0]), //i
    .io_rsp_valid             (pixelTaskSolver_1_io_rsp_valid                    ), //o
    .io_rsp_ready             (pixelTaskSolver_1_io_rsp_ready                    ), //i
    .io_rsp_payload_iteration (pixelTaskSolver_1_io_rsp_payload_iteration[3:0]   ), //o
    .clk                      (clk                                               ), //i
    .reset                    (reset                                             )  //i
  );
  PixelSolver pixelTaskSolver_2 (
    .io_cmd_valid             (streamDemux_1_io_outputs_2_m2sPipe_valid          ), //i
    .io_cmd_ready             (pixelTaskSolver_2_io_cmd_ready                    ), //o
    .io_cmd_payload_x         (streamDemux_1_io_outputs_2_m2sPipe_payload_x[27:0]), //i
    .io_cmd_payload_y         (streamDemux_1_io_outputs_2_m2sPipe_payload_y[27:0]), //i
    .io_rsp_valid             (pixelTaskSolver_2_io_rsp_valid                    ), //o
    .io_rsp_ready             (pixelTaskSolver_2_io_rsp_ready                    ), //i
    .io_rsp_payload_iteration (pixelTaskSolver_2_io_rsp_payload_iteration[3:0]   ), //o
    .clk                      (clk                                               ), //i
    .reset                    (reset                                             )  //i
  );
  PixelSolver pixelTaskSolver_3 (
    .io_cmd_valid             (streamDemux_1_io_outputs_3_m2sPipe_valid          ), //i
    .io_cmd_ready             (pixelTaskSolver_3_io_cmd_ready                    ), //o
    .io_cmd_payload_x         (streamDemux_1_io_outputs_3_m2sPipe_payload_x[27:0]), //i
    .io_cmd_payload_y         (streamDemux_1_io_outputs_3_m2sPipe_payload_y[27:0]), //i
    .io_rsp_valid             (pixelTaskSolver_3_io_rsp_valid                    ), //o
    .io_rsp_ready             (pixelTaskSolver_3_io_rsp_ready                    ), //i
    .io_rsp_payload_iteration (pixelTaskSolver_3_io_rsp_payload_iteration[3:0]   ), //o
    .clk                      (clk                                               ), //i
    .reset                    (reset                                             )  //i
  );
  PixelSolver pixelTaskSolver_4 (
    .io_cmd_valid             (streamDemux_1_io_outputs_4_m2sPipe_valid          ), //i
    .io_cmd_ready             (pixelTaskSolver_4_io_cmd_ready                    ), //o
    .io_cmd_payload_x         (streamDemux_1_io_outputs_4_m2sPipe_payload_x[27:0]), //i
    .io_cmd_payload_y         (streamDemux_1_io_outputs_4_m2sPipe_payload_y[27:0]), //i
    .io_rsp_valid             (pixelTaskSolver_4_io_rsp_valid                    ), //o
    .io_rsp_ready             (pixelTaskSolver_4_io_rsp_ready                    ), //i
    .io_rsp_payload_iteration (pixelTaskSolver_4_io_rsp_payload_iteration[3:0]   ), //o
    .clk                      (clk                                               ), //i
    .reset                    (reset                                             )  //i
  );
  PixelSolver pixelTaskSolver_5 (
    .io_cmd_valid             (streamDemux_1_io_outputs_5_m2sPipe_valid          ), //i
    .io_cmd_ready             (pixelTaskSolver_5_io_cmd_ready                    ), //o
    .io_cmd_payload_x         (streamDemux_1_io_outputs_5_m2sPipe_payload_x[27:0]), //i
    .io_cmd_payload_y         (streamDemux_1_io_outputs_5_m2sPipe_payload_y[27:0]), //i
    .io_rsp_valid             (pixelTaskSolver_5_io_rsp_valid                    ), //o
    .io_rsp_ready             (pixelTaskSolver_5_io_rsp_ready                    ), //i
    .io_rsp_payload_iteration (pixelTaskSolver_5_io_rsp_payload_iteration[3:0]   ), //o
    .clk                      (clk                                               ), //i
    .reset                    (reset                                             )  //i
  );
  PixelSolver pixelTaskSolver_6 (
    .io_cmd_valid             (streamDemux_1_io_outputs_6_m2sPipe_valid          ), //i
    .io_cmd_ready             (pixelTaskSolver_6_io_cmd_ready                    ), //o
    .io_cmd_payload_x         (streamDemux_1_io_outputs_6_m2sPipe_payload_x[27:0]), //i
    .io_cmd_payload_y         (streamDemux_1_io_outputs_6_m2sPipe_payload_y[27:0]), //i
    .io_rsp_valid             (pixelTaskSolver_6_io_rsp_valid                    ), //o
    .io_rsp_ready             (pixelTaskSolver_6_io_rsp_ready                    ), //i
    .io_rsp_payload_iteration (pixelTaskSolver_6_io_rsp_payload_iteration[3:0]   ), //o
    .clk                      (clk                                               ), //i
    .reset                    (reset                                             )  //i
  );
  PixelSolver pixelTaskSolver_7 (
    .io_cmd_valid             (streamDemux_1_io_outputs_7_m2sPipe_valid          ), //i
    .io_cmd_ready             (pixelTaskSolver_7_io_cmd_ready                    ), //o
    .io_cmd_payload_x         (streamDemux_1_io_outputs_7_m2sPipe_payload_x[27:0]), //i
    .io_cmd_payload_y         (streamDemux_1_io_outputs_7_m2sPipe_payload_y[27:0]), //i
    .io_rsp_valid             (pixelTaskSolver_7_io_rsp_valid                    ), //o
    .io_rsp_ready             (pixelTaskSolver_7_io_rsp_ready                    ), //i
    .io_rsp_payload_iteration (pixelTaskSolver_7_io_rsp_payload_iteration[3:0]   ), //o
    .clk                      (clk                                               ), //i
    .reset                    (reset                                             )  //i
  );
  StreamMux streamMux_1 (
    .io_select                     (_zz_io_select_5[2:0]                        ), //i
    .io_inputs_0_valid             (pixelResults_0_valid                        ), //i
    .io_inputs_0_ready             (streamMux_1_io_inputs_0_ready               ), //o
    .io_inputs_0_payload_iteration (pixelResults_0_payload_iteration[3:0]       ), //i
    .io_inputs_1_valid             (pixelResults_1_valid                        ), //i
    .io_inputs_1_ready             (streamMux_1_io_inputs_1_ready               ), //o
    .io_inputs_1_payload_iteration (pixelResults_1_payload_iteration[3:0]       ), //i
    .io_inputs_2_valid             (pixelResults_2_valid                        ), //i
    .io_inputs_2_ready             (streamMux_1_io_inputs_2_ready               ), //o
    .io_inputs_2_payload_iteration (pixelResults_2_payload_iteration[3:0]       ), //i
    .io_inputs_3_valid             (pixelResults_3_valid                        ), //i
    .io_inputs_3_ready             (streamMux_1_io_inputs_3_ready               ), //o
    .io_inputs_3_payload_iteration (pixelResults_3_payload_iteration[3:0]       ), //i
    .io_inputs_4_valid             (pixelResults_4_valid                        ), //i
    .io_inputs_4_ready             (streamMux_1_io_inputs_4_ready               ), //o
    .io_inputs_4_payload_iteration (pixelResults_4_payload_iteration[3:0]       ), //i
    .io_inputs_5_valid             (pixelResults_5_valid                        ), //i
    .io_inputs_5_ready             (streamMux_1_io_inputs_5_ready               ), //o
    .io_inputs_5_payload_iteration (pixelResults_5_payload_iteration[3:0]       ), //i
    .io_inputs_6_valid             (pixelResults_6_valid                        ), //i
    .io_inputs_6_ready             (streamMux_1_io_inputs_6_ready               ), //o
    .io_inputs_6_payload_iteration (pixelResults_6_payload_iteration[3:0]       ), //i
    .io_inputs_7_valid             (pixelResults_7_valid                        ), //i
    .io_inputs_7_ready             (streamMux_1_io_inputs_7_ready               ), //o
    .io_inputs_7_payload_iteration (pixelResults_7_payload_iteration[3:0]       ), //i
    .io_output_valid               (streamMux_1_io_output_valid                 ), //o
    .io_output_ready               (io_rsp_ready                                ), //i
    .io_output_payload_iteration   (streamMux_1_io_output_payload_iteration[3:0])  //o
  );
  always @(*) begin
    _zz_io_select = 1'b0;
    if(io_cmd_fire) begin
      _zz_io_select = 1'b1;
    end
  end

  always @(*) begin
    _zz_io_select_1 = (_zz_io_select_2 + _zz__zz_io_select_1);
    if(1'b0) begin
      _zz_io_select_1 = 3'b000;
    end
  end

  assign io_cmd_fire = (io_cmd_valid && io_cmd_ready);
  assign io_cmd_ready = streamDemux_1_io_input_ready;
  always @(*) begin
    pixelTaskSolver_0_io_rsp_ready = pixelResults_0_ready;
    if(when_Stream_l368) begin
      pixelTaskSolver_0_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! pixelResults_0_valid);
  assign pixelResults_0_valid = pixelTaskSolver_0_io_rsp_rValid;
  assign pixelResults_0_payload_iteration = pixelTaskSolver_0_io_rsp_rData_iteration;
  always @(*) begin
    pixelTaskSolver_1_io_rsp_ready = pixelResults_1_ready;
    if(when_Stream_l368_1) begin
      pixelTaskSolver_1_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l368_1 = (! pixelResults_1_valid);
  assign pixelResults_1_valid = pixelTaskSolver_1_io_rsp_rValid;
  assign pixelResults_1_payload_iteration = pixelTaskSolver_1_io_rsp_rData_iteration;
  always @(*) begin
    pixelTaskSolver_2_io_rsp_ready = pixelResults_2_ready;
    if(when_Stream_l368_2) begin
      pixelTaskSolver_2_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l368_2 = (! pixelResults_2_valid);
  assign pixelResults_2_valid = pixelTaskSolver_2_io_rsp_rValid;
  assign pixelResults_2_payload_iteration = pixelTaskSolver_2_io_rsp_rData_iteration;
  always @(*) begin
    pixelTaskSolver_3_io_rsp_ready = pixelResults_3_ready;
    if(when_Stream_l368_3) begin
      pixelTaskSolver_3_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l368_3 = (! pixelResults_3_valid);
  assign pixelResults_3_valid = pixelTaskSolver_3_io_rsp_rValid;
  assign pixelResults_3_payload_iteration = pixelTaskSolver_3_io_rsp_rData_iteration;
  always @(*) begin
    pixelTaskSolver_4_io_rsp_ready = pixelResults_4_ready;
    if(when_Stream_l368_4) begin
      pixelTaskSolver_4_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l368_4 = (! pixelResults_4_valid);
  assign pixelResults_4_valid = pixelTaskSolver_4_io_rsp_rValid;
  assign pixelResults_4_payload_iteration = pixelTaskSolver_4_io_rsp_rData_iteration;
  always @(*) begin
    pixelTaskSolver_5_io_rsp_ready = pixelResults_5_ready;
    if(when_Stream_l368_5) begin
      pixelTaskSolver_5_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l368_5 = (! pixelResults_5_valid);
  assign pixelResults_5_valid = pixelTaskSolver_5_io_rsp_rValid;
  assign pixelResults_5_payload_iteration = pixelTaskSolver_5_io_rsp_rData_iteration;
  always @(*) begin
    pixelTaskSolver_6_io_rsp_ready = pixelResults_6_ready;
    if(when_Stream_l368_6) begin
      pixelTaskSolver_6_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l368_6 = (! pixelResults_6_valid);
  assign pixelResults_6_valid = pixelTaskSolver_6_io_rsp_rValid;
  assign pixelResults_6_payload_iteration = pixelTaskSolver_6_io_rsp_rData_iteration;
  always @(*) begin
    pixelTaskSolver_7_io_rsp_ready = pixelResults_7_ready;
    if(when_Stream_l368_7) begin
      pixelTaskSolver_7_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l368_7 = (! pixelResults_7_valid);
  assign pixelResults_7_valid = pixelTaskSolver_7_io_rsp_rValid;
  assign pixelResults_7_payload_iteration = pixelTaskSolver_7_io_rsp_rData_iteration;
  always @(*) begin
    _zz_io_select_3 = 1'b0;
    if(streamMux_1_io_output_fire) begin
      _zz_io_select_3 = 1'b1;
    end
  end

  always @(*) begin
    _zz_io_select_4 = (_zz_io_select_5 + _zz__zz_io_select_4);
    if(1'b0) begin
      _zz_io_select_4 = 3'b000;
    end
  end

  assign pixelResults_0_ready = streamMux_1_io_inputs_0_ready;
  assign pixelResults_1_ready = streamMux_1_io_inputs_1_ready;
  assign pixelResults_2_ready = streamMux_1_io_inputs_2_ready;
  assign pixelResults_3_ready = streamMux_1_io_inputs_3_ready;
  assign pixelResults_4_ready = streamMux_1_io_inputs_4_ready;
  assign pixelResults_5_ready = streamMux_1_io_inputs_5_ready;
  assign pixelResults_6_ready = streamMux_1_io_inputs_6_ready;
  assign pixelResults_7_ready = streamMux_1_io_inputs_7_ready;
  assign streamMux_1_io_output_fire = (streamMux_1_io_output_valid && io_rsp_ready);
  always @(*) begin
    streamDemux_1_io_outputs_0_ready = streamDemux_1_io_outputs_0_m2sPipe_ready;
    if(when_Stream_l368_8) begin
      streamDemux_1_io_outputs_0_ready = 1'b1;
    end
  end

  assign when_Stream_l368_8 = (! streamDemux_1_io_outputs_0_m2sPipe_valid);
  assign streamDemux_1_io_outputs_0_m2sPipe_valid = streamDemux_1_io_outputs_0_rValid;
  assign streamDemux_1_io_outputs_0_m2sPipe_payload_x = streamDemux_1_io_outputs_0_rData_x;
  assign streamDemux_1_io_outputs_0_m2sPipe_payload_y = streamDemux_1_io_outputs_0_rData_y;
  assign streamDemux_1_io_outputs_0_m2sPipe_ready = pixelTaskSolver_0_io_cmd_ready;
  always @(*) begin
    streamDemux_1_io_outputs_1_ready = streamDemux_1_io_outputs_1_m2sPipe_ready;
    if(when_Stream_l368_9) begin
      streamDemux_1_io_outputs_1_ready = 1'b1;
    end
  end

  assign when_Stream_l368_9 = (! streamDemux_1_io_outputs_1_m2sPipe_valid);
  assign streamDemux_1_io_outputs_1_m2sPipe_valid = streamDemux_1_io_outputs_1_rValid;
  assign streamDemux_1_io_outputs_1_m2sPipe_payload_x = streamDemux_1_io_outputs_1_rData_x;
  assign streamDemux_1_io_outputs_1_m2sPipe_payload_y = streamDemux_1_io_outputs_1_rData_y;
  assign streamDemux_1_io_outputs_1_m2sPipe_ready = pixelTaskSolver_1_io_cmd_ready;
  always @(*) begin
    streamDemux_1_io_outputs_2_ready = streamDemux_1_io_outputs_2_m2sPipe_ready;
    if(when_Stream_l368_10) begin
      streamDemux_1_io_outputs_2_ready = 1'b1;
    end
  end

  assign when_Stream_l368_10 = (! streamDemux_1_io_outputs_2_m2sPipe_valid);
  assign streamDemux_1_io_outputs_2_m2sPipe_valid = streamDemux_1_io_outputs_2_rValid;
  assign streamDemux_1_io_outputs_2_m2sPipe_payload_x = streamDemux_1_io_outputs_2_rData_x;
  assign streamDemux_1_io_outputs_2_m2sPipe_payload_y = streamDemux_1_io_outputs_2_rData_y;
  assign streamDemux_1_io_outputs_2_m2sPipe_ready = pixelTaskSolver_2_io_cmd_ready;
  always @(*) begin
    streamDemux_1_io_outputs_3_ready = streamDemux_1_io_outputs_3_m2sPipe_ready;
    if(when_Stream_l368_11) begin
      streamDemux_1_io_outputs_3_ready = 1'b1;
    end
  end

  assign when_Stream_l368_11 = (! streamDemux_1_io_outputs_3_m2sPipe_valid);
  assign streamDemux_1_io_outputs_3_m2sPipe_valid = streamDemux_1_io_outputs_3_rValid;
  assign streamDemux_1_io_outputs_3_m2sPipe_payload_x = streamDemux_1_io_outputs_3_rData_x;
  assign streamDemux_1_io_outputs_3_m2sPipe_payload_y = streamDemux_1_io_outputs_3_rData_y;
  assign streamDemux_1_io_outputs_3_m2sPipe_ready = pixelTaskSolver_3_io_cmd_ready;
  always @(*) begin
    streamDemux_1_io_outputs_4_ready = streamDemux_1_io_outputs_4_m2sPipe_ready;
    if(when_Stream_l368_12) begin
      streamDemux_1_io_outputs_4_ready = 1'b1;
    end
  end

  assign when_Stream_l368_12 = (! streamDemux_1_io_outputs_4_m2sPipe_valid);
  assign streamDemux_1_io_outputs_4_m2sPipe_valid = streamDemux_1_io_outputs_4_rValid;
  assign streamDemux_1_io_outputs_4_m2sPipe_payload_x = streamDemux_1_io_outputs_4_rData_x;
  assign streamDemux_1_io_outputs_4_m2sPipe_payload_y = streamDemux_1_io_outputs_4_rData_y;
  assign streamDemux_1_io_outputs_4_m2sPipe_ready = pixelTaskSolver_4_io_cmd_ready;
  always @(*) begin
    streamDemux_1_io_outputs_5_ready = streamDemux_1_io_outputs_5_m2sPipe_ready;
    if(when_Stream_l368_13) begin
      streamDemux_1_io_outputs_5_ready = 1'b1;
    end
  end

  assign when_Stream_l368_13 = (! streamDemux_1_io_outputs_5_m2sPipe_valid);
  assign streamDemux_1_io_outputs_5_m2sPipe_valid = streamDemux_1_io_outputs_5_rValid;
  assign streamDemux_1_io_outputs_5_m2sPipe_payload_x = streamDemux_1_io_outputs_5_rData_x;
  assign streamDemux_1_io_outputs_5_m2sPipe_payload_y = streamDemux_1_io_outputs_5_rData_y;
  assign streamDemux_1_io_outputs_5_m2sPipe_ready = pixelTaskSolver_5_io_cmd_ready;
  always @(*) begin
    streamDemux_1_io_outputs_6_ready = streamDemux_1_io_outputs_6_m2sPipe_ready;
    if(when_Stream_l368_14) begin
      streamDemux_1_io_outputs_6_ready = 1'b1;
    end
  end

  assign when_Stream_l368_14 = (! streamDemux_1_io_outputs_6_m2sPipe_valid);
  assign streamDemux_1_io_outputs_6_m2sPipe_valid = streamDemux_1_io_outputs_6_rValid;
  assign streamDemux_1_io_outputs_6_m2sPipe_payload_x = streamDemux_1_io_outputs_6_rData_x;
  assign streamDemux_1_io_outputs_6_m2sPipe_payload_y = streamDemux_1_io_outputs_6_rData_y;
  assign streamDemux_1_io_outputs_6_m2sPipe_ready = pixelTaskSolver_6_io_cmd_ready;
  always @(*) begin
    streamDemux_1_io_outputs_7_ready = streamDemux_1_io_outputs_7_m2sPipe_ready;
    if(when_Stream_l368_15) begin
      streamDemux_1_io_outputs_7_ready = 1'b1;
    end
  end

  assign when_Stream_l368_15 = (! streamDemux_1_io_outputs_7_m2sPipe_valid);
  assign streamDemux_1_io_outputs_7_m2sPipe_valid = streamDemux_1_io_outputs_7_rValid;
  assign streamDemux_1_io_outputs_7_m2sPipe_payload_x = streamDemux_1_io_outputs_7_rData_x;
  assign streamDemux_1_io_outputs_7_m2sPipe_payload_y = streamDemux_1_io_outputs_7_rData_y;
  assign streamDemux_1_io_outputs_7_m2sPipe_ready = pixelTaskSolver_7_io_cmd_ready;
  assign io_rsp_valid = streamMux_1_io_output_valid;
  assign io_rsp_payload_iteration = streamMux_1_io_output_payload_iteration;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_io_select_2 <= 3'b000;
      pixelTaskSolver_0_io_rsp_rValid <= 1'b0;
      pixelTaskSolver_1_io_rsp_rValid <= 1'b0;
      pixelTaskSolver_2_io_rsp_rValid <= 1'b0;
      pixelTaskSolver_3_io_rsp_rValid <= 1'b0;
      pixelTaskSolver_4_io_rsp_rValid <= 1'b0;
      pixelTaskSolver_5_io_rsp_rValid <= 1'b0;
      pixelTaskSolver_6_io_rsp_rValid <= 1'b0;
      pixelTaskSolver_7_io_rsp_rValid <= 1'b0;
      _zz_io_select_5 <= 3'b000;
      streamDemux_1_io_outputs_0_rValid <= 1'b0;
      streamDemux_1_io_outputs_1_rValid <= 1'b0;
      streamDemux_1_io_outputs_2_rValid <= 1'b0;
      streamDemux_1_io_outputs_3_rValid <= 1'b0;
      streamDemux_1_io_outputs_4_rValid <= 1'b0;
      streamDemux_1_io_outputs_5_rValid <= 1'b0;
      streamDemux_1_io_outputs_6_rValid <= 1'b0;
      streamDemux_1_io_outputs_7_rValid <= 1'b0;
    end else begin
      _zz_io_select_2 <= _zz_io_select_1;
      if(pixelTaskSolver_0_io_rsp_ready) begin
        pixelTaskSolver_0_io_rsp_rValid <= pixelTaskSolver_0_io_rsp_valid;
      end
      if(pixelTaskSolver_1_io_rsp_ready) begin
        pixelTaskSolver_1_io_rsp_rValid <= pixelTaskSolver_1_io_rsp_valid;
      end
      if(pixelTaskSolver_2_io_rsp_ready) begin
        pixelTaskSolver_2_io_rsp_rValid <= pixelTaskSolver_2_io_rsp_valid;
      end
      if(pixelTaskSolver_3_io_rsp_ready) begin
        pixelTaskSolver_3_io_rsp_rValid <= pixelTaskSolver_3_io_rsp_valid;
      end
      if(pixelTaskSolver_4_io_rsp_ready) begin
        pixelTaskSolver_4_io_rsp_rValid <= pixelTaskSolver_4_io_rsp_valid;
      end
      if(pixelTaskSolver_5_io_rsp_ready) begin
        pixelTaskSolver_5_io_rsp_rValid <= pixelTaskSolver_5_io_rsp_valid;
      end
      if(pixelTaskSolver_6_io_rsp_ready) begin
        pixelTaskSolver_6_io_rsp_rValid <= pixelTaskSolver_6_io_rsp_valid;
      end
      if(pixelTaskSolver_7_io_rsp_ready) begin
        pixelTaskSolver_7_io_rsp_rValid <= pixelTaskSolver_7_io_rsp_valid;
      end
      _zz_io_select_5 <= _zz_io_select_4;
      if(streamDemux_1_io_outputs_0_ready) begin
        streamDemux_1_io_outputs_0_rValid <= streamDemux_1_io_outputs_0_valid;
      end
      if(streamDemux_1_io_outputs_1_ready) begin
        streamDemux_1_io_outputs_1_rValid <= streamDemux_1_io_outputs_1_valid;
      end
      if(streamDemux_1_io_outputs_2_ready) begin
        streamDemux_1_io_outputs_2_rValid <= streamDemux_1_io_outputs_2_valid;
      end
      if(streamDemux_1_io_outputs_3_ready) begin
        streamDemux_1_io_outputs_3_rValid <= streamDemux_1_io_outputs_3_valid;
      end
      if(streamDemux_1_io_outputs_4_ready) begin
        streamDemux_1_io_outputs_4_rValid <= streamDemux_1_io_outputs_4_valid;
      end
      if(streamDemux_1_io_outputs_5_ready) begin
        streamDemux_1_io_outputs_5_rValid <= streamDemux_1_io_outputs_5_valid;
      end
      if(streamDemux_1_io_outputs_6_ready) begin
        streamDemux_1_io_outputs_6_rValid <= streamDemux_1_io_outputs_6_valid;
      end
      if(streamDemux_1_io_outputs_7_ready) begin
        streamDemux_1_io_outputs_7_rValid <= streamDemux_1_io_outputs_7_valid;
      end
    end
  end

  always @(posedge clk) begin
    if(pixelTaskSolver_0_io_rsp_ready) begin
      pixelTaskSolver_0_io_rsp_rData_iteration <= pixelTaskSolver_0_io_rsp_payload_iteration;
    end
    if(pixelTaskSolver_1_io_rsp_ready) begin
      pixelTaskSolver_1_io_rsp_rData_iteration <= pixelTaskSolver_1_io_rsp_payload_iteration;
    end
    if(pixelTaskSolver_2_io_rsp_ready) begin
      pixelTaskSolver_2_io_rsp_rData_iteration <= pixelTaskSolver_2_io_rsp_payload_iteration;
    end
    if(pixelTaskSolver_3_io_rsp_ready) begin
      pixelTaskSolver_3_io_rsp_rData_iteration <= pixelTaskSolver_3_io_rsp_payload_iteration;
    end
    if(pixelTaskSolver_4_io_rsp_ready) begin
      pixelTaskSolver_4_io_rsp_rData_iteration <= pixelTaskSolver_4_io_rsp_payload_iteration;
    end
    if(pixelTaskSolver_5_io_rsp_ready) begin
      pixelTaskSolver_5_io_rsp_rData_iteration <= pixelTaskSolver_5_io_rsp_payload_iteration;
    end
    if(pixelTaskSolver_6_io_rsp_ready) begin
      pixelTaskSolver_6_io_rsp_rData_iteration <= pixelTaskSolver_6_io_rsp_payload_iteration;
    end
    if(pixelTaskSolver_7_io_rsp_ready) begin
      pixelTaskSolver_7_io_rsp_rData_iteration <= pixelTaskSolver_7_io_rsp_payload_iteration;
    end
    if(streamDemux_1_io_outputs_0_ready) begin
      streamDemux_1_io_outputs_0_rData_x <= streamDemux_1_io_outputs_0_payload_x;
      streamDemux_1_io_outputs_0_rData_y <= streamDemux_1_io_outputs_0_payload_y;
    end
    if(streamDemux_1_io_outputs_1_ready) begin
      streamDemux_1_io_outputs_1_rData_x <= streamDemux_1_io_outputs_1_payload_x;
      streamDemux_1_io_outputs_1_rData_y <= streamDemux_1_io_outputs_1_payload_y;
    end
    if(streamDemux_1_io_outputs_2_ready) begin
      streamDemux_1_io_outputs_2_rData_x <= streamDemux_1_io_outputs_2_payload_x;
      streamDemux_1_io_outputs_2_rData_y <= streamDemux_1_io_outputs_2_payload_y;
    end
    if(streamDemux_1_io_outputs_3_ready) begin
      streamDemux_1_io_outputs_3_rData_x <= streamDemux_1_io_outputs_3_payload_x;
      streamDemux_1_io_outputs_3_rData_y <= streamDemux_1_io_outputs_3_payload_y;
    end
    if(streamDemux_1_io_outputs_4_ready) begin
      streamDemux_1_io_outputs_4_rData_x <= streamDemux_1_io_outputs_4_payload_x;
      streamDemux_1_io_outputs_4_rData_y <= streamDemux_1_io_outputs_4_payload_y;
    end
    if(streamDemux_1_io_outputs_5_ready) begin
      streamDemux_1_io_outputs_5_rData_x <= streamDemux_1_io_outputs_5_payload_x;
      streamDemux_1_io_outputs_5_rData_y <= streamDemux_1_io_outputs_5_payload_y;
    end
    if(streamDemux_1_io_outputs_6_ready) begin
      streamDemux_1_io_outputs_6_rData_x <= streamDemux_1_io_outputs_6_payload_x;
      streamDemux_1_io_outputs_6_rData_y <= streamDemux_1_io_outputs_6_payload_y;
    end
    if(streamDemux_1_io_outputs_7_ready) begin
      streamDemux_1_io_outputs_7_rData_x <= streamDemux_1_io_outputs_7_payload_x;
      streamDemux_1_io_outputs_7_rData_y <= streamDemux_1_io_outputs_7_payload_y;
    end
  end


endmodule

module StreamMux (
  input      [2:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input      [3:0]    io_inputs_0_payload_iteration,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input      [3:0]    io_inputs_1_payload_iteration,
  input               io_inputs_2_valid,
  output              io_inputs_2_ready,
  input      [3:0]    io_inputs_2_payload_iteration,
  input               io_inputs_3_valid,
  output              io_inputs_3_ready,
  input      [3:0]    io_inputs_3_payload_iteration,
  input               io_inputs_4_valid,
  output              io_inputs_4_ready,
  input      [3:0]    io_inputs_4_payload_iteration,
  input               io_inputs_5_valid,
  output              io_inputs_5_ready,
  input      [3:0]    io_inputs_5_payload_iteration,
  input               io_inputs_6_valid,
  output              io_inputs_6_ready,
  input      [3:0]    io_inputs_6_payload_iteration,
  input               io_inputs_7_valid,
  output              io_inputs_7_ready,
  input      [3:0]    io_inputs_7_payload_iteration,
  output              io_output_valid,
  input               io_output_ready,
  output     [3:0]    io_output_payload_iteration
);

  reg                 _zz_io_output_valid;
  reg        [3:0]    _zz_io_output_payload_iteration;

  always @(*) begin
    case(io_select)
      3'b000 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_iteration = io_inputs_0_payload_iteration;
      end
      3'b001 : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_iteration = io_inputs_1_payload_iteration;
      end
      3'b010 : begin
        _zz_io_output_valid = io_inputs_2_valid;
        _zz_io_output_payload_iteration = io_inputs_2_payload_iteration;
      end
      3'b011 : begin
        _zz_io_output_valid = io_inputs_3_valid;
        _zz_io_output_payload_iteration = io_inputs_3_payload_iteration;
      end
      3'b100 : begin
        _zz_io_output_valid = io_inputs_4_valid;
        _zz_io_output_payload_iteration = io_inputs_4_payload_iteration;
      end
      3'b101 : begin
        _zz_io_output_valid = io_inputs_5_valid;
        _zz_io_output_payload_iteration = io_inputs_5_payload_iteration;
      end
      3'b110 : begin
        _zz_io_output_valid = io_inputs_6_valid;
        _zz_io_output_payload_iteration = io_inputs_6_payload_iteration;
      end
      default : begin
        _zz_io_output_valid = io_inputs_7_valid;
        _zz_io_output_payload_iteration = io_inputs_7_payload_iteration;
      end
    endcase
  end

  assign io_inputs_0_ready = ((io_select == 3'b000) && io_output_ready);
  assign io_inputs_1_ready = ((io_select == 3'b001) && io_output_ready);
  assign io_inputs_2_ready = ((io_select == 3'b010) && io_output_ready);
  assign io_inputs_3_ready = ((io_select == 3'b011) && io_output_ready);
  assign io_inputs_4_ready = ((io_select == 3'b100) && io_output_ready);
  assign io_inputs_5_ready = ((io_select == 3'b101) && io_output_ready);
  assign io_inputs_6_ready = ((io_select == 3'b110) && io_output_ready);
  assign io_inputs_7_ready = ((io_select == 3'b111) && io_output_ready);
  assign io_output_valid = _zz_io_output_valid;
  assign io_output_payload_iteration = _zz_io_output_payload_iteration;

endmodule

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

module PixelSolver (
  input               io_cmd_valid,
  output reg          io_cmd_ready,
  input      [27:0]   io_cmd_payload_x,
  input      [27:0]   io_cmd_payload_y,
  output reg          io_rsp_valid,
  input               io_rsp_ready,
  output     [3:0]    io_rsp_payload_iteration,
  input               clk,
  input               reset
);

  wire       [55:0]   _zz_when_PixelSolver_l46;
  wire       [55:0]   _zz_when_PixelSolver_l46_1;
  wire       [35:0]   _zz_x;
  wire       [55:0]   _zz_x_1;
  wire       [55:0]   _zz_x_2;
  wire       [55:0]   _zz_x_3;
  wire       [47:0]   _zz_x_4;
  wire       [36:0]   _zz_y;
  wire       [55:0]   _zz_y_1;
  wire       [55:0]   _zz_y_2;
  wire       [46:0]   _zz_y_3;
  reg        [27:0]   x;
  reg        [27:0]   y;
  reg        [3:0]    iteration;
  wire       [55:0]   xx;
  wire       [55:0]   yy;
  wire       [55:0]   xy;
  wire                when_PixelSolver_l46;

  assign _zz_when_PixelSolver_l46 = 56'h00040000000000;
  assign _zz_when_PixelSolver_l46_1 = ($signed(xx) + $signed(yy));
  assign _zz_x = (_zz_x_1 >>> 20);
  assign _zz_x_1 = ($signed(_zz_x_2) + $signed(_zz_x_3));
  assign _zz_x_2 = ($signed(xx) - $signed(yy));
  assign _zz_x_4 = ({20'd0,io_cmd_payload_x} <<< 20);
  assign _zz_x_3 = {{8{_zz_x_4[47]}}, _zz_x_4};
  assign _zz_y = (_zz_y_1 >>> 19);
  assign _zz_y_1 = ($signed(xy) + $signed(_zz_y_2));
  assign _zz_y_3 = ({19'd0,io_cmd_payload_y} <<< 19);
  assign _zz_y_2 = {{9{_zz_y_3[46]}}, _zz_y_3};
  assign xx = ($signed(x) * $signed(x));
  assign yy = ($signed(y) * $signed(y));
  assign xy = ($signed(x) * $signed(y));
  always @(*) begin
    io_cmd_ready = 1'b0;
    if(io_cmd_valid) begin
      if(when_PixelSolver_l46) begin
        if(io_rsp_ready) begin
          io_cmd_ready = 1'b1;
        end
      end
    end
  end

  always @(*) begin
    io_rsp_valid = 1'b0;
    if(io_cmd_valid) begin
      if(when_PixelSolver_l46) begin
        io_rsp_valid = 1'b1;
      end
    end
  end

  assign io_rsp_payload_iteration = iteration;
  assign when_PixelSolver_l46 = (($signed(_zz_when_PixelSolver_l46) <= $signed(_zz_when_PixelSolver_l46_1)) || (iteration == 4'b1111));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      x <= 28'h0;
      y <= 28'h0;
      iteration <= 4'b0000;
    end else begin
      if(io_cmd_valid) begin
        if(when_PixelSolver_l46) begin
          if(io_rsp_ready) begin
            x <= 28'h0;
            y <= 28'h0;
            iteration <= 4'b0000;
          end
        end else begin
          x <= _zz_x[27:0];
          y <= _zz_y[27:0];
          iteration <= (iteration + 4'b0001);
        end
      end
    end
  end


endmodule

module StreamDemux (
  input      [2:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input      [27:0]   io_input_payload_x,
  input      [27:0]   io_input_payload_y,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output     [27:0]   io_outputs_0_payload_x,
  output     [27:0]   io_outputs_0_payload_y,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output     [27:0]   io_outputs_1_payload_x,
  output     [27:0]   io_outputs_1_payload_y,
  output reg          io_outputs_2_valid,
  input               io_outputs_2_ready,
  output     [27:0]   io_outputs_2_payload_x,
  output     [27:0]   io_outputs_2_payload_y,
  output reg          io_outputs_3_valid,
  input               io_outputs_3_ready,
  output     [27:0]   io_outputs_3_payload_x,
  output     [27:0]   io_outputs_3_payload_y,
  output reg          io_outputs_4_valid,
  input               io_outputs_4_ready,
  output     [27:0]   io_outputs_4_payload_x,
  output     [27:0]   io_outputs_4_payload_y,
  output reg          io_outputs_5_valid,
  input               io_outputs_5_ready,
  output     [27:0]   io_outputs_5_payload_x,
  output     [27:0]   io_outputs_5_payload_y,
  output reg          io_outputs_6_valid,
  input               io_outputs_6_ready,
  output     [27:0]   io_outputs_6_payload_x,
  output     [27:0]   io_outputs_6_payload_y,
  output reg          io_outputs_7_valid,
  input               io_outputs_7_ready,
  output     [27:0]   io_outputs_7_payload_x,
  output     [27:0]   io_outputs_7_payload_y
);

  wire                when_Stream_l827;
  wire                when_Stream_l827_1;
  wire                when_Stream_l827_2;
  wire                when_Stream_l827_3;
  wire                when_Stream_l827_4;
  wire                when_Stream_l827_5;
  wire                when_Stream_l827_6;
  wire                when_Stream_l827_7;

  always @(*) begin
    io_input_ready = 1'b0;
    if(!when_Stream_l827) begin
      io_input_ready = io_outputs_0_ready;
    end
    if(!when_Stream_l827_1) begin
      io_input_ready = io_outputs_1_ready;
    end
    if(!when_Stream_l827_2) begin
      io_input_ready = io_outputs_2_ready;
    end
    if(!when_Stream_l827_3) begin
      io_input_ready = io_outputs_3_ready;
    end
    if(!when_Stream_l827_4) begin
      io_input_ready = io_outputs_4_ready;
    end
    if(!when_Stream_l827_5) begin
      io_input_ready = io_outputs_5_ready;
    end
    if(!when_Stream_l827_6) begin
      io_input_ready = io_outputs_6_ready;
    end
    if(!when_Stream_l827_7) begin
      io_input_ready = io_outputs_7_ready;
    end
  end

  assign io_outputs_0_payload_x = io_input_payload_x;
  assign io_outputs_0_payload_y = io_input_payload_y;
  assign when_Stream_l827 = (3'b000 != io_select);
  always @(*) begin
    if(when_Stream_l827) begin
      io_outputs_0_valid = 1'b0;
    end else begin
      io_outputs_0_valid = io_input_valid;
    end
  end

  assign io_outputs_1_payload_x = io_input_payload_x;
  assign io_outputs_1_payload_y = io_input_payload_y;
  assign when_Stream_l827_1 = (3'b001 != io_select);
  always @(*) begin
    if(when_Stream_l827_1) begin
      io_outputs_1_valid = 1'b0;
    end else begin
      io_outputs_1_valid = io_input_valid;
    end
  end

  assign io_outputs_2_payload_x = io_input_payload_x;
  assign io_outputs_2_payload_y = io_input_payload_y;
  assign when_Stream_l827_2 = (3'b010 != io_select);
  always @(*) begin
    if(when_Stream_l827_2) begin
      io_outputs_2_valid = 1'b0;
    end else begin
      io_outputs_2_valid = io_input_valid;
    end
  end

  assign io_outputs_3_payload_x = io_input_payload_x;
  assign io_outputs_3_payload_y = io_input_payload_y;
  assign when_Stream_l827_3 = (3'b011 != io_select);
  always @(*) begin
    if(when_Stream_l827_3) begin
      io_outputs_3_valid = 1'b0;
    end else begin
      io_outputs_3_valid = io_input_valid;
    end
  end

  assign io_outputs_4_payload_x = io_input_payload_x;
  assign io_outputs_4_payload_y = io_input_payload_y;
  assign when_Stream_l827_4 = (3'b100 != io_select);
  always @(*) begin
    if(when_Stream_l827_4) begin
      io_outputs_4_valid = 1'b0;
    end else begin
      io_outputs_4_valid = io_input_valid;
    end
  end

  assign io_outputs_5_payload_x = io_input_payload_x;
  assign io_outputs_5_payload_y = io_input_payload_y;
  assign when_Stream_l827_5 = (3'b101 != io_select);
  always @(*) begin
    if(when_Stream_l827_5) begin
      io_outputs_5_valid = 1'b0;
    end else begin
      io_outputs_5_valid = io_input_valid;
    end
  end

  assign io_outputs_6_payload_x = io_input_payload_x;
  assign io_outputs_6_payload_y = io_input_payload_y;
  assign when_Stream_l827_6 = (3'b110 != io_select);
  always @(*) begin
    if(when_Stream_l827_6) begin
      io_outputs_6_valid = 1'b0;
    end else begin
      io_outputs_6_valid = io_input_valid;
    end
  end

  assign io_outputs_7_payload_x = io_input_payload_x;
  assign io_outputs_7_payload_y = io_input_payload_y;
  assign when_Stream_l827_7 = (3'b111 != io_select);
  always @(*) begin
    if(when_Stream_l827_7) begin
      io_outputs_7_valid = 1'b0;
    end else begin
      io_outputs_7_valid = io_input_valid;
    end
  end


endmodule
