// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : PixelSolver
// Git hash  : 5877b7d3b2efe562a8be9ec1a5d1d250c31f7010

`timescale 1ns/1ps

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
