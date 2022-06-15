// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : BCAM
// Git hash  : 5877b7d3b2efe562a8be9ec1a5d1d250c31f7010

`timescale 1ns/1ps

module BCAM (
  input               io_wStream_valid,
  output              io_wStream_ready,
  input      [3:0]    io_wStream_payload_wAddr,
  input      [2:0]    io_wStream_payload_wPatt,
  input               io_wStream_payload_wr,
  input               io_mPattStream_valid,
  output              io_mPattStream_ready,
  input      [2:0]    io_mPattStream_payload_mPatt,
  output              io_mAddrStream_valid,
  input               io_mAddrStream_ready,
  output     [3:0]    io_mAddrStream_payload_mAddr,
  output              io_mAddrStream_payload_matchFlag,
  input               clk,
  input               reset
);

  reg        [15:0]   _zz_tiRAM_port2;
  reg        [2:0]    _zz_erRAM_port1;
  wire       [2:0]    _zz_erRAM_port;
  wire                _zz_erRAM_port_1;
  wire       [15:0]   _zz_tiRAM_port;
  wire                _zz_tiRAM_port_1;
  wire       [15:0]   _zz_tiRAM_port_2;
  wire                _zz_tiRAM_port_3;
  wire       [15:0]   _zz__zz_io_mAddrStream_payload_mAddr_2;
  wire                halfRateWStream_valid;
  wire                halfRateWStream_ready;
  wire       [3:0]    halfRateWStream_payload_wAddr;
  wire       [2:0]    halfRateWStream_payload_wPatt;
  wire                halfRateWStream_payload_wr;
  reg                 io_wStream_rValid;
  wire                halfRateWStream_fire;
  reg        [3:0]    io_wStream_rData_wAddr;
  reg        [2:0]    io_wStream_rData_wPatt;
  reg                 io_wStream_rData_wr;
  reg                 continueWr;
  wire                halfRateWStream_fire_1;
  wire                halfRateWStream_fire_2;
  wire                when_BCAM_l57;
  reg                 _zz_1;
  reg                 _zz_2;
  wire       [15:0]   _zz_3;
  wire                halfRateWStream_fire_3;
  wire                _zz_4;
  wire       [2:0]    _zz_5;
  wire                halfRateWStream_fire_4;
  wire                halfRateWStream_fire_5;
  wire                io_mPattStream_translated_valid;
  wire                io_mPattStream_translated_ready;
  wire       [2:0]    io_mPattStream_translated_payload;
  wire                _zz_io_mAddrStream_valid;
  wire                _zz_io_mPattStream_translated_ready;
  wire       [15:0]   _zz_io_mAddrStream_payload_mAddr;
  reg                 _zz_io_mAddrStream_valid_1;
  wire       [15:0]   _zz_io_mAddrStream_payload_mAddr_1;
  wire       [15:0]   _zz_io_mAddrStream_payload_mAddr_2;
  wire                _zz_io_mAddrStream_payload_mAddr_3;
  wire                _zz_io_mAddrStream_payload_mAddr_4;
  wire                _zz_io_mAddrStream_payload_mAddr_5;
  wire                _zz_io_mAddrStream_payload_mAddr_6;
  wire                _zz_io_mAddrStream_payload_mAddr_7;
  wire                _zz_io_mAddrStream_payload_mAddr_8;
  wire                _zz_io_mAddrStream_payload_mAddr_9;
  wire                _zz_io_mAddrStream_payload_mAddr_10;
  wire                _zz_io_mAddrStream_payload_mAddr_11;
  wire                _zz_io_mAddrStream_payload_mAddr_12;
  wire                _zz_io_mAddrStream_payload_mAddr_13;
  wire                _zz_io_mAddrStream_payload_mAddr_14;
  wire                _zz_io_mAddrStream_payload_mAddr_15;
  wire                _zz_io_mAddrStream_payload_mAddr_16;
  wire                _zz_io_mAddrStream_payload_mAddr_17;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol0 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol1 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol2 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol3 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol4 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol5 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol6 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol7 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol8 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol9 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol10 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol11 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol12 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol13 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol14 [0:7] /* verilator public */ ;
  (* ram_style = "block" *) reg [0:0] tiRAM_symbol15 [0:7] /* verilator public */ ;
  reg [0:0] _zz_tiRAMsymbol_read;
  reg [0:0] _zz_tiRAMsymbol_read_1;
  reg [0:0] _zz_tiRAMsymbol_read_2;
  reg [0:0] _zz_tiRAMsymbol_read_3;
  reg [0:0] _zz_tiRAMsymbol_read_4;
  reg [0:0] _zz_tiRAMsymbol_read_5;
  reg [0:0] _zz_tiRAMsymbol_read_6;
  reg [0:0] _zz_tiRAMsymbol_read_7;
  reg [0:0] _zz_tiRAMsymbol_read_8;
  reg [0:0] _zz_tiRAMsymbol_read_9;
  reg [0:0] _zz_tiRAMsymbol_read_10;
  reg [0:0] _zz_tiRAMsymbol_read_11;
  reg [0:0] _zz_tiRAMsymbol_read_12;
  reg [0:0] _zz_tiRAMsymbol_read_13;
  reg [0:0] _zz_tiRAMsymbol_read_14;
  reg [0:0] _zz_tiRAMsymbol_read_15;
  (* ram_style = "block" *) reg [2:0] erRAM [0:15] /* verilator public */ ;

  assign _zz__zz_io_mAddrStream_payload_mAddr_2 = (_zz_io_mAddrStream_payload_mAddr_1 - 16'h0001);
  assign _zz_tiRAM_port = 16'hffff;
  assign _zz_tiRAM_port_1 = ((_zz_2 && halfRateWStream_payload_wr) && halfRateWStream_fire_4);
  assign _zz_tiRAM_port_2 = 16'h0;
  assign _zz_tiRAM_port_3 = (((! _zz_2) && halfRateWStream_payload_wr) && continueWr);
  assign _zz_erRAM_port = halfRateWStream_payload_wPatt;
  assign _zz_erRAM_port_1 = ((_zz_1 && halfRateWStream_payload_wr) && continueWr);
  initial begin
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol0.bin",tiRAM_symbol0);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol1.bin",tiRAM_symbol1);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol2.bin",tiRAM_symbol2);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol3.bin",tiRAM_symbol3);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol4.bin",tiRAM_symbol4);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol5.bin",tiRAM_symbol5);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol6.bin",tiRAM_symbol6);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol7.bin",tiRAM_symbol7);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol8.bin",tiRAM_symbol8);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol9.bin",tiRAM_symbol9);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol10.bin",tiRAM_symbol10);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol11.bin",tiRAM_symbol11);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol12.bin",tiRAM_symbol12);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol13.bin",tiRAM_symbol13);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol14.bin",tiRAM_symbol14);
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_tiRAM_symbol15.bin",tiRAM_symbol15);
  end
  always @(*) begin
    _zz_tiRAM_port2 = {_zz_tiRAMsymbol_read_15, _zz_tiRAMsymbol_read_14, _zz_tiRAMsymbol_read_13, _zz_tiRAMsymbol_read_12, _zz_tiRAMsymbol_read_11, _zz_tiRAMsymbol_read_10, _zz_tiRAMsymbol_read_9, _zz_tiRAMsymbol_read_8, _zz_tiRAMsymbol_read_7, _zz_tiRAMsymbol_read_6, _zz_tiRAMsymbol_read_5, _zz_tiRAMsymbol_read_4, _zz_tiRAMsymbol_read_3, _zz_tiRAMsymbol_read_2, _zz_tiRAMsymbol_read_1, _zz_tiRAMsymbol_read};
  end
  always @(posedge clk) begin
    if(_zz_3[0] && _zz_tiRAM_port_1) begin
      tiRAM_symbol0[_zz_5] <= _zz_tiRAM_port[0 : 0];
    end
    if(_zz_3[1] && _zz_tiRAM_port_1) begin
      tiRAM_symbol1[_zz_5] <= _zz_tiRAM_port[1 : 1];
    end
    if(_zz_3[2] && _zz_tiRAM_port_1) begin
      tiRAM_symbol2[_zz_5] <= _zz_tiRAM_port[2 : 2];
    end
    if(_zz_3[3] && _zz_tiRAM_port_1) begin
      tiRAM_symbol3[_zz_5] <= _zz_tiRAM_port[3 : 3];
    end
    if(_zz_3[4] && _zz_tiRAM_port_1) begin
      tiRAM_symbol4[_zz_5] <= _zz_tiRAM_port[4 : 4];
    end
    if(_zz_3[5] && _zz_tiRAM_port_1) begin
      tiRAM_symbol5[_zz_5] <= _zz_tiRAM_port[5 : 5];
    end
    if(_zz_3[6] && _zz_tiRAM_port_1) begin
      tiRAM_symbol6[_zz_5] <= _zz_tiRAM_port[6 : 6];
    end
    if(_zz_3[7] && _zz_tiRAM_port_1) begin
      tiRAM_symbol7[_zz_5] <= _zz_tiRAM_port[7 : 7];
    end
    if(_zz_3[8] && _zz_tiRAM_port_1) begin
      tiRAM_symbol8[_zz_5] <= _zz_tiRAM_port[8 : 8];
    end
    if(_zz_3[9] && _zz_tiRAM_port_1) begin
      tiRAM_symbol9[_zz_5] <= _zz_tiRAM_port[9 : 9];
    end
    if(_zz_3[10] && _zz_tiRAM_port_1) begin
      tiRAM_symbol10[_zz_5] <= _zz_tiRAM_port[10 : 10];
    end
    if(_zz_3[11] && _zz_tiRAM_port_1) begin
      tiRAM_symbol11[_zz_5] <= _zz_tiRAM_port[11 : 11];
    end
    if(_zz_3[12] && _zz_tiRAM_port_1) begin
      tiRAM_symbol12[_zz_5] <= _zz_tiRAM_port[12 : 12];
    end
    if(_zz_3[13] && _zz_tiRAM_port_1) begin
      tiRAM_symbol13[_zz_5] <= _zz_tiRAM_port[13 : 13];
    end
    if(_zz_3[14] && _zz_tiRAM_port_1) begin
      tiRAM_symbol14[_zz_5] <= _zz_tiRAM_port[14 : 14];
    end
    if(_zz_3[15] && _zz_tiRAM_port_1) begin
      tiRAM_symbol15[_zz_5] <= _zz_tiRAM_port[15 : 15];
    end
  end

  always @(posedge clk) begin
    if(_zz_3[0] && _zz_tiRAM_port_3) begin
      tiRAM_symbol0[_zz_5] <= _zz_tiRAM_port_2[0 : 0];
    end
    if(_zz_3[1] && _zz_tiRAM_port_3) begin
      tiRAM_symbol1[_zz_5] <= _zz_tiRAM_port_2[1 : 1];
    end
    if(_zz_3[2] && _zz_tiRAM_port_3) begin
      tiRAM_symbol2[_zz_5] <= _zz_tiRAM_port_2[2 : 2];
    end
    if(_zz_3[3] && _zz_tiRAM_port_3) begin
      tiRAM_symbol3[_zz_5] <= _zz_tiRAM_port_2[3 : 3];
    end
    if(_zz_3[4] && _zz_tiRAM_port_3) begin
      tiRAM_symbol4[_zz_5] <= _zz_tiRAM_port_2[4 : 4];
    end
    if(_zz_3[5] && _zz_tiRAM_port_3) begin
      tiRAM_symbol5[_zz_5] <= _zz_tiRAM_port_2[5 : 5];
    end
    if(_zz_3[6] && _zz_tiRAM_port_3) begin
      tiRAM_symbol6[_zz_5] <= _zz_tiRAM_port_2[6 : 6];
    end
    if(_zz_3[7] && _zz_tiRAM_port_3) begin
      tiRAM_symbol7[_zz_5] <= _zz_tiRAM_port_2[7 : 7];
    end
    if(_zz_3[8] && _zz_tiRAM_port_3) begin
      tiRAM_symbol8[_zz_5] <= _zz_tiRAM_port_2[8 : 8];
    end
    if(_zz_3[9] && _zz_tiRAM_port_3) begin
      tiRAM_symbol9[_zz_5] <= _zz_tiRAM_port_2[9 : 9];
    end
    if(_zz_3[10] && _zz_tiRAM_port_3) begin
      tiRAM_symbol10[_zz_5] <= _zz_tiRAM_port_2[10 : 10];
    end
    if(_zz_3[11] && _zz_tiRAM_port_3) begin
      tiRAM_symbol11[_zz_5] <= _zz_tiRAM_port_2[11 : 11];
    end
    if(_zz_3[12] && _zz_tiRAM_port_3) begin
      tiRAM_symbol12[_zz_5] <= _zz_tiRAM_port_2[12 : 12];
    end
    if(_zz_3[13] && _zz_tiRAM_port_3) begin
      tiRAM_symbol13[_zz_5] <= _zz_tiRAM_port_2[13 : 13];
    end
    if(_zz_3[14] && _zz_tiRAM_port_3) begin
      tiRAM_symbol14[_zz_5] <= _zz_tiRAM_port_2[14 : 14];
    end
    if(_zz_3[15] && _zz_tiRAM_port_3) begin
      tiRAM_symbol15[_zz_5] <= _zz_tiRAM_port_2[15 : 15];
    end
  end

  always @(posedge clk) begin
    if(io_mPattStream_translated_ready) begin
      _zz_tiRAMsymbol_read <= tiRAM_symbol0[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_1 <= tiRAM_symbol1[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_2 <= tiRAM_symbol2[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_3 <= tiRAM_symbol3[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_4 <= tiRAM_symbol4[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_5 <= tiRAM_symbol5[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_6 <= tiRAM_symbol6[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_7 <= tiRAM_symbol7[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_8 <= tiRAM_symbol8[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_9 <= tiRAM_symbol9[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_10 <= tiRAM_symbol10[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_11 <= tiRAM_symbol11[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_12 <= tiRAM_symbol12[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_13 <= tiRAM_symbol13[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_14 <= tiRAM_symbol14[io_mPattStream_translated_payload];
      _zz_tiRAMsymbol_read_15 <= tiRAM_symbol15[io_mPattStream_translated_payload];
    end
  end

  initial begin
    $readmemb("/home/lqx/IdeaProjects/BCAM/tmp/job_1/BCAM.v_toplevel_erRAM.bin",erRAM);
  end
  always @(posedge clk) begin
    if(_zz_erRAM_port_1) begin
      erRAM[halfRateWStream_payload_wAddr] <= _zz_erRAM_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_4) begin
      _zz_erRAM_port1 <= erRAM[halfRateWStream_payload_wAddr];
    end
  end

  assign halfRateWStream_fire = (halfRateWStream_valid && halfRateWStream_ready);
  assign io_wStream_ready = (! io_wStream_rValid);
  assign halfRateWStream_valid = io_wStream_rValid;
  assign halfRateWStream_payload_wAddr = io_wStream_rData_wAddr;
  assign halfRateWStream_payload_wPatt = io_wStream_rData_wPatt;
  assign halfRateWStream_payload_wr = io_wStream_rData_wr;
  assign halfRateWStream_ready = 1'b1;
  assign halfRateWStream_fire_1 = (halfRateWStream_valid && halfRateWStream_ready);
  assign halfRateWStream_fire_2 = (halfRateWStream_valid && halfRateWStream_ready);
  assign when_BCAM_l57 = (! halfRateWStream_fire_2);
  assign _zz_3 = ({15'd0,1'b1} <<< halfRateWStream_payload_wAddr);
  assign halfRateWStream_fire_3 = (halfRateWStream_valid && halfRateWStream_ready);
  assign _zz_4 = (((! _zz_1) && halfRateWStream_payload_wr) && halfRateWStream_fire_3);
  assign _zz_5 = (_zz_2 ? halfRateWStream_payload_wPatt : _zz_erRAM_port1);
  assign halfRateWStream_fire_4 = (halfRateWStream_valid && halfRateWStream_ready);
  assign halfRateWStream_fire_5 = (halfRateWStream_valid && halfRateWStream_ready);
  assign io_mPattStream_translated_valid = io_mPattStream_valid;
  assign io_mPattStream_ready = io_mPattStream_translated_ready;
  assign io_mPattStream_translated_payload = io_mPattStream_payload_mPatt;
  assign io_mPattStream_translated_ready = ((! _zz_io_mAddrStream_valid) || _zz_io_mPattStream_translated_ready);
  assign _zz_io_mAddrStream_valid = _zz_io_mAddrStream_valid_1;
  assign _zz_io_mAddrStream_payload_mAddr = _zz_tiRAM_port2;
  assign io_mAddrStream_valid = _zz_io_mAddrStream_valid;
  assign _zz_io_mPattStream_translated_ready = io_mAddrStream_ready;
  assign _zz_io_mAddrStream_payload_mAddr_1 = _zz_io_mAddrStream_payload_mAddr;
  assign _zz_io_mAddrStream_payload_mAddr_2 = (_zz_io_mAddrStream_payload_mAddr_1 & (~ _zz__zz_io_mAddrStream_payload_mAddr_2));
  assign _zz_io_mAddrStream_payload_mAddr_3 = _zz_io_mAddrStream_payload_mAddr_2[3];
  assign _zz_io_mAddrStream_payload_mAddr_4 = _zz_io_mAddrStream_payload_mAddr_2[5];
  assign _zz_io_mAddrStream_payload_mAddr_5 = _zz_io_mAddrStream_payload_mAddr_2[6];
  assign _zz_io_mAddrStream_payload_mAddr_6 = _zz_io_mAddrStream_payload_mAddr_2[7];
  assign _zz_io_mAddrStream_payload_mAddr_7 = _zz_io_mAddrStream_payload_mAddr_2[9];
  assign _zz_io_mAddrStream_payload_mAddr_8 = _zz_io_mAddrStream_payload_mAddr_2[10];
  assign _zz_io_mAddrStream_payload_mAddr_9 = _zz_io_mAddrStream_payload_mAddr_2[11];
  assign _zz_io_mAddrStream_payload_mAddr_10 = _zz_io_mAddrStream_payload_mAddr_2[12];
  assign _zz_io_mAddrStream_payload_mAddr_11 = _zz_io_mAddrStream_payload_mAddr_2[13];
  assign _zz_io_mAddrStream_payload_mAddr_12 = _zz_io_mAddrStream_payload_mAddr_2[14];
  assign _zz_io_mAddrStream_payload_mAddr_13 = _zz_io_mAddrStream_payload_mAddr_2[15];
  assign _zz_io_mAddrStream_payload_mAddr_14 = (((((((_zz_io_mAddrStream_payload_mAddr_2[1] || _zz_io_mAddrStream_payload_mAddr_3) || _zz_io_mAddrStream_payload_mAddr_4) || _zz_io_mAddrStream_payload_mAddr_6) || _zz_io_mAddrStream_payload_mAddr_7) || _zz_io_mAddrStream_payload_mAddr_9) || _zz_io_mAddrStream_payload_mAddr_11) || _zz_io_mAddrStream_payload_mAddr_13);
  assign _zz_io_mAddrStream_payload_mAddr_15 = (((((((_zz_io_mAddrStream_payload_mAddr_2[2] || _zz_io_mAddrStream_payload_mAddr_3) || _zz_io_mAddrStream_payload_mAddr_5) || _zz_io_mAddrStream_payload_mAddr_6) || _zz_io_mAddrStream_payload_mAddr_8) || _zz_io_mAddrStream_payload_mAddr_9) || _zz_io_mAddrStream_payload_mAddr_12) || _zz_io_mAddrStream_payload_mAddr_13);
  assign _zz_io_mAddrStream_payload_mAddr_16 = (((((((_zz_io_mAddrStream_payload_mAddr_2[4] || _zz_io_mAddrStream_payload_mAddr_4) || _zz_io_mAddrStream_payload_mAddr_5) || _zz_io_mAddrStream_payload_mAddr_6) || _zz_io_mAddrStream_payload_mAddr_10) || _zz_io_mAddrStream_payload_mAddr_11) || _zz_io_mAddrStream_payload_mAddr_12) || _zz_io_mAddrStream_payload_mAddr_13);
  assign _zz_io_mAddrStream_payload_mAddr_17 = (((((((_zz_io_mAddrStream_payload_mAddr_2[8] || _zz_io_mAddrStream_payload_mAddr_7) || _zz_io_mAddrStream_payload_mAddr_8) || _zz_io_mAddrStream_payload_mAddr_9) || _zz_io_mAddrStream_payload_mAddr_10) || _zz_io_mAddrStream_payload_mAddr_11) || _zz_io_mAddrStream_payload_mAddr_12) || _zz_io_mAddrStream_payload_mAddr_13);
  assign io_mAddrStream_payload_mAddr = {_zz_io_mAddrStream_payload_mAddr_17,{_zz_io_mAddrStream_payload_mAddr_16,{_zz_io_mAddrStream_payload_mAddr_15,_zz_io_mAddrStream_payload_mAddr_14}}};
  assign io_mAddrStream_payload_matchFlag = ((((_zz_io_mAddrStream_payload_mAddr[0] || _zz_io_mAddrStream_payload_mAddr[1]) || (_zz_io_mAddrStream_payload_mAddr[2] || _zz_io_mAddrStream_payload_mAddr[3])) || ((_zz_io_mAddrStream_payload_mAddr[4] || _zz_io_mAddrStream_payload_mAddr[5]) || (_zz_io_mAddrStream_payload_mAddr[6] || _zz_io_mAddrStream_payload_mAddr[7]))) || (((_zz_io_mAddrStream_payload_mAddr[8] || _zz_io_mAddrStream_payload_mAddr[9]) || (_zz_io_mAddrStream_payload_mAddr[10] || _zz_io_mAddrStream_payload_mAddr[11])) || ((_zz_io_mAddrStream_payload_mAddr[12] || _zz_io_mAddrStream_payload_mAddr[13]) || (_zz_io_mAddrStream_payload_mAddr[14] || _zz_io_mAddrStream_payload_mAddr[15]))));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      io_wStream_rValid <= 1'b0;
      continueWr <= 1'b0;
      _zz_1 <= 1'b0;
      _zz_2 <= 1'b1;
      _zz_io_mAddrStream_valid_1 <= 1'b0;
    end else begin
      if(io_wStream_valid) begin
        io_wStream_rValid <= 1'b1;
      end
      if(halfRateWStream_fire) begin
        io_wStream_rValid <= 1'b0;
      end
      if(halfRateWStream_fire_1) begin
        continueWr <= 1'b1;
      end
      if(when_BCAM_l57) begin
        continueWr <= 1'b0;
      end
      if(halfRateWStream_fire_5) begin
        _zz_2 <= 1'b0;
        _zz_1 <= 1'b1;
      end else begin
        _zz_2 <= 1'b1;
        _zz_1 <= 1'b0;
      end
      if(_zz_io_mPattStream_translated_ready) begin
        _zz_io_mAddrStream_valid_1 <= 1'b0;
      end
      if(io_mPattStream_translated_ready) begin
        _zz_io_mAddrStream_valid_1 <= io_mPattStream_translated_valid;
      end
    end
  end

  always @(posedge clk) begin
    if(io_wStream_ready) begin
      io_wStream_rData_wAddr <= io_wStream_payload_wAddr;
      io_wStream_rData_wPatt <= io_wStream_payload_wPatt;
      io_wStream_rData_wr <= io_wStream_payload_wr;
    end
  end


endmodule
