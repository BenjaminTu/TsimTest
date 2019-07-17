module VTASimShell( // @[:@27.2]
  input         clock, // @[:@28.4]
  input         reset, // @[:@29.4]
  output        host_req_valid, // @[:@30.4]
  output        host_req_opcode, // @[:@30.4]
  output [7:0]  host_req_addr, // @[:@30.4]
  output [31:0] host_req_value, // @[:@30.4]
  input         host_req_deq, // @[:@30.4]
  input         host_resp_valid, // @[:@30.4]
  input  [31:0] host_resp_bits, // @[:@30.4]
  input         mem_req_valid, // @[:@31.4]
  input         mem_req_opcode, // @[:@31.4]
  input  [63:0] mem_req_addr, // @[:@31.4]
  input         mem_wr_valid, // @[:@31.4]
  input  [63:0] mem_wr_bits, // @[:@31.4]
  input         mem_rd_ready, // @[:@31.4]
  output        mem_rd_valid, // @[:@31.4]
  output [63:0] mem_rd_bits, // @[:@31.4]
  input         sim_clock, // @[:@32.4]
  output        sim_wait // @[:@33.4]
);
  wire  mod_sim_dpi_wait; // @[TestAccel.scala 37:23:@35.4]
  wire  mod_sim_reset; // @[TestAccel.scala 37:23:@35.4]
  wire  mod_sim_clock; // @[TestAccel.scala 37:23:@35.4]
  wire  mod_host_dpi_req_valid; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_dpi_req_opcode; // @[TestAccel.scala 38:24:@39.4]
  wire [7:0] mod_host_dpi_req_addr; // @[TestAccel.scala 38:24:@39.4]
  wire [31:0] mod_host_dpi_req_value; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_dpi_req_deq; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_dpi_resp_valid; // @[TestAccel.scala 38:24:@39.4]
  wire [31:0] mod_host_dpi_resp_bits; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_reset; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_host_clock; // @[TestAccel.scala 38:24:@39.4]
  wire  mod_mem_dpi_req_valid; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_dpi_req_opcode; // @[TestAccel.scala 39:23:@43.4]
  wire [7:0] mod_mem_dpi_req_len; // @[TestAccel.scala 39:23:@43.4]
  wire [63:0] mod_mem_dpi_req_addr; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_dpi_wr_valid; // @[TestAccel.scala 39:23:@43.4]
  wire [63:0] mod_mem_dpi_wr_bits; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_dpi_rd_ready; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_dpi_rd_valid; // @[TestAccel.scala 39:23:@43.4]
  wire [63:0] mod_mem_dpi_rd_bits; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_reset; // @[TestAccel.scala 39:23:@43.4]
  wire  mod_mem_clock; // @[TestAccel.scala 39:23:@43.4]
  VTASimDPI mod_sim ( // @[TestAccel.scala 37:23:@35.4]
    .dpi_wait(mod_sim_dpi_wait),
    .reset(mod_sim_reset),
    .clock(mod_sim_clock)
  );
  VTAHostDPI mod_host ( // @[TestAccel.scala 38:24:@39.4]
    .dpi_req_valid(mod_host_dpi_req_valid),
    .dpi_req_opcode(mod_host_dpi_req_opcode),
    .dpi_req_addr(mod_host_dpi_req_addr),
    .dpi_req_value(mod_host_dpi_req_value),
    .dpi_req_deq(mod_host_dpi_req_deq),
    .dpi_resp_valid(mod_host_dpi_resp_valid),
    .dpi_resp_bits(mod_host_dpi_resp_bits),
    .reset(mod_host_reset),
    .clock(mod_host_clock)
  );
  VTAMemDPI mod_mem ( // @[TestAccel.scala 39:23:@43.4]
    .dpi_req_valid(mod_mem_dpi_req_valid),
    .dpi_req_opcode(mod_mem_dpi_req_opcode),
    .dpi_req_len(mod_mem_dpi_req_len),
    .dpi_req_addr(mod_mem_dpi_req_addr),
    .dpi_wr_valid(mod_mem_dpi_wr_valid),
    .dpi_wr_bits(mod_mem_dpi_wr_bits),
    .dpi_rd_ready(mod_mem_dpi_rd_ready),
    .dpi_rd_valid(mod_mem_dpi_rd_valid),
    .dpi_rd_bits(mod_mem_dpi_rd_bits),
    .reset(mod_mem_reset),
    .clock(mod_mem_clock)
  );
  assign host_req_valid = mod_host_dpi_req_valid; // @[TestAccel.scala 45:8:@66.4]
  assign host_req_opcode = mod_host_dpi_req_opcode; // @[TestAccel.scala 45:8:@65.4]
  assign host_req_addr = mod_host_dpi_req_addr; // @[TestAccel.scala 45:8:@64.4]
  assign host_req_value = mod_host_dpi_req_value; // @[TestAccel.scala 45:8:@63.4]
  assign mem_rd_valid = mod_mem_dpi_rd_valid; // @[TestAccel.scala 42:18:@50.4]
  assign mem_rd_bits = mod_mem_dpi_rd_bits; // @[TestAccel.scala 42:18:@49.4]
  assign sim_wait = mod_sim_dpi_wait; // @[TestAccel.scala 48:12:@69.4]
  assign mod_sim_reset = reset; // @[TestAccel.scala 47:20:@68.4]
  assign mod_sim_clock = sim_clock; // @[TestAccel.scala 46:20:@67.4]
  assign mod_host_dpi_req_deq = host_req_deq; // @[TestAccel.scala 45:8:@62.4]
  assign mod_host_dpi_resp_valid = host_resp_valid; // @[TestAccel.scala 45:8:@61.4]
  assign mod_host_dpi_resp_bits = host_resp_bits; // @[TestAccel.scala 45:8:@60.4]
  assign mod_host_reset = reset; // @[TestAccel.scala 44:21:@59.4]
  assign mod_host_clock = clock; // @[TestAccel.scala 43:21:@58.4]
  assign mod_mem_dpi_req_valid = mem_req_valid; // @[TestAccel.scala 42:18:@57.4]
  assign mod_mem_dpi_req_opcode = mem_req_opcode; // @[TestAccel.scala 42:18:@56.4]
  assign mod_mem_dpi_req_len = 8'h0; // @[TestAccel.scala 42:18:@55.4]
  assign mod_mem_dpi_req_addr = mem_req_addr; // @[TestAccel.scala 42:18:@54.4]
  assign mod_mem_dpi_wr_valid = mem_wr_valid; // @[TestAccel.scala 42:18:@53.4]
  assign mod_mem_dpi_wr_bits = mem_wr_bits; // @[TestAccel.scala 42:18:@52.4]
  assign mod_mem_dpi_rd_ready = mem_rd_ready; // @[TestAccel.scala 42:18:@51.4]
  assign mod_mem_reset = reset; // @[TestAccel.scala 41:20:@48.4]
  assign mod_mem_clock = clock; // @[TestAccel.scala 40:20:@47.4]
endmodule
module RegFile( // @[:@71.2]
  input         clock, // @[:@72.4]
  input         reset, // @[:@73.4]
  output        io_launch, // @[:@74.4]
  input         io_finish, // @[:@74.4]
  input         io_ecnt_0_valid, // @[:@74.4]
  input  [31:0] io_ecnt_0_bits, // @[:@74.4]
  output [31:0] io_vals_0, // @[:@74.4]
  output [31:0] io_vals_1, // @[:@74.4]
  output [31:0] io_vals_2, // @[:@74.4]
  output [63:0] io_ptrs_0, // @[:@74.4]
  output [63:0] io_ptrs_1, // @[:@74.4]
  output [63:0] io_ptrs_2, // @[:@74.4]
  input         io_host_req_valid, // @[:@74.4]
  input         io_host_req_opcode, // @[:@74.4]
  input  [7:0]  io_host_req_addr, // @[:@74.4]
  input  [31:0] io_host_req_value, // @[:@74.4]
  output        io_host_req_deq, // @[:@74.4]
  output        io_host_resp_valid, // @[:@74.4]
  output [31:0] io_host_resp_bits // @[:@74.4]
);
  reg  state; // @[RegFile.scala 64:22:@76.4]
  reg [31:0] _RAND_0;
  wire  _T_74; // @[Conditional.scala 37:30:@77.4]
  wire  _T_76; // @[RegFile.scala 68:34:@79.6]
  wire  _T_77; // @[RegFile.scala 68:31:@80.6]
  wire  _GEN_0; // @[RegFile.scala 68:55:@81.6]
  wire  _GEN_1; // @[Conditional.scala 39:67:@87.6]
  wire  _GEN_2; // @[Conditional.scala 40:58:@78.4]
  wire  _T_79; // @[RegFile.scala 77:28:@90.4]
  wire  _T_80; // @[RegFile.scala 77:38:@91.4]
  reg [31:0] reg_0; // @[RegFile.scala 80:37:@95.4]
  reg [31:0] _RAND_1;
  reg [31:0] reg_1; // @[RegFile.scala 80:37:@98.4]
  reg [31:0] _RAND_2;
  reg [31:0] reg_2; // @[RegFile.scala 80:37:@101.4]
  reg [31:0] _RAND_3;
  reg [31:0] reg_3; // @[RegFile.scala 80:37:@104.4]
  reg [31:0] _RAND_4;
  reg [31:0] reg_4; // @[RegFile.scala 80:37:@107.4]
  reg [31:0] _RAND_5;
  reg [31:0] reg_5; // @[RegFile.scala 80:37:@110.4]
  reg [31:0] _RAND_6;
  reg [31:0] reg_6; // @[RegFile.scala 80:37:@113.4]
  reg [31:0] _RAND_7;
  reg [31:0] reg_7; // @[RegFile.scala 80:37:@116.4]
  reg [31:0] _RAND_8;
  reg [31:0] reg_8; // @[RegFile.scala 80:37:@119.4]
  reg [31:0] _RAND_9;
  reg [31:0] reg_9; // @[RegFile.scala 80:37:@122.4]
  reg [31:0] _RAND_10;
  reg [31:0] reg_10; // @[RegFile.scala 80:37:@125.4]
  reg [31:0] _RAND_11;
  reg [31:0] reg_11; // @[RegFile.scala 80:37:@128.4]
  reg [31:0] _RAND_12;
  wire  _T_156; // @[RegFile.scala 89:53:@135.6]
  wire  _T_158; // @[RegFile.scala 90:41:@136.6]
  wire  _T_159; // @[RegFile.scala 90:28:@137.6]
  wire [31:0] _GEN_3; // @[RegFile.scala 90:63:@138.6]
  wire [31:0] _GEN_4; // @[RegFile.scala 87:20:@129.4]
  wire  _T_164; // @[RegFile.scala 98:48:@148.6]
  wire  _T_165; // @[RegFile.scala 98:30:@149.6]
  wire [31:0] _GEN_5; // @[RegFile.scala 98:70:@150.6]
  wire [31:0] _GEN_6; // @[RegFile.scala 95:29:@141.4]
  wire  _T_170; // @[RegFile.scala 105:48:@156.4]
  wire  _T_171; // @[RegFile.scala 105:30:@157.4]
  wire [31:0] _GEN_7; // @[RegFile.scala 105:70:@158.4]
  wire  _T_176; // @[RegFile.scala 105:48:@164.4]
  wire  _T_177; // @[RegFile.scala 105:30:@165.4]
  wire [31:0] _GEN_8; // @[RegFile.scala 105:70:@166.4]
  wire  _T_182; // @[RegFile.scala 105:48:@172.4]
  wire  _T_183; // @[RegFile.scala 105:30:@173.4]
  wire [31:0] _GEN_9; // @[RegFile.scala 105:70:@174.4]
  wire  _T_188; // @[RegFile.scala 105:48:@180.4]
  wire  _T_189; // @[RegFile.scala 105:30:@181.4]
  wire [31:0] _GEN_10; // @[RegFile.scala 105:70:@182.4]
  wire  _T_194; // @[RegFile.scala 105:48:@188.4]
  wire  _T_195; // @[RegFile.scala 105:30:@189.4]
  wire [31:0] _GEN_11; // @[RegFile.scala 105:70:@190.4]
  wire  _T_200; // @[RegFile.scala 105:48:@196.4]
  wire  _T_201; // @[RegFile.scala 105:30:@197.4]
  wire [31:0] _GEN_12; // @[RegFile.scala 105:70:@198.4]
  wire  _T_206; // @[RegFile.scala 105:48:@204.4]
  wire  _T_207; // @[RegFile.scala 105:30:@205.4]
  wire [31:0] _GEN_13; // @[RegFile.scala 105:70:@206.4]
  wire  _T_212; // @[RegFile.scala 105:48:@212.4]
  wire  _T_213; // @[RegFile.scala 105:30:@213.4]
  wire [31:0] _GEN_14; // @[RegFile.scala 105:70:@214.4]
  wire  _T_218; // @[RegFile.scala 105:48:@220.4]
  wire  _T_219; // @[RegFile.scala 105:30:@221.4]
  wire [31:0] _GEN_15; // @[RegFile.scala 105:70:@222.4]
  wire  _T_224; // @[RegFile.scala 105:48:@228.4]
  wire  _T_225; // @[RegFile.scala 105:30:@229.4]
  wire [31:0] _GEN_16; // @[RegFile.scala 105:70:@230.4]
  reg [31:0] rdata; // @[RegFile.scala 110:22:@235.4]
  reg [31:0] _RAND_13;
  wire  _T_235; // @[RegFile.scala 111:46:@239.4]
  wire [31:0] _T_238; // @[Mux.scala 46:16:@242.6]
  wire [31:0] _T_240; // @[Mux.scala 46:16:@244.6]
  wire [31:0] _T_242; // @[Mux.scala 46:16:@246.6]
  wire [31:0] _T_244; // @[Mux.scala 46:16:@248.6]
  wire [31:0] _T_246; // @[Mux.scala 46:16:@250.6]
  wire [31:0] _T_248; // @[Mux.scala 46:16:@252.6]
  wire [31:0] _T_250; // @[Mux.scala 46:16:@254.6]
  wire [31:0] _T_252; // @[Mux.scala 46:16:@256.6]
  wire [31:0] _T_254; // @[Mux.scala 46:16:@258.6]
  wire [31:0] _T_256; // @[Mux.scala 46:16:@260.6]
  wire [31:0] _T_258; // @[Mux.scala 46:16:@262.6]
  wire [31:0] _T_260; // @[Mux.scala 46:16:@264.6]
  wire [31:0] _GEN_17; // @[RegFile.scala 111:70:@240.4]
  assign _T_74 = 1'h0 == state; // @[Conditional.scala 37:30:@77.4]
  assign _T_76 = io_host_req_opcode == 1'h0; // @[RegFile.scala 68:34:@79.6]
  assign _T_77 = io_host_req_valid & _T_76; // @[RegFile.scala 68:31:@80.6]
  assign _GEN_0 = _T_77 ? 1'h1 : state; // @[RegFile.scala 68:55:@81.6]
  assign _GEN_1 = state ? 1'h0 : state; // @[Conditional.scala 39:67:@87.6]
  assign _GEN_2 = _T_74 ? _GEN_0 : _GEN_1; // @[Conditional.scala 40:58:@78.4]
  assign _T_79 = state == 1'h0; // @[RegFile.scala 77:28:@90.4]
  assign _T_80 = _T_79 & io_host_req_valid; // @[RegFile.scala 77:38:@91.4]
  assign _T_156 = _T_80 & io_host_req_opcode; // @[RegFile.scala 89:53:@135.6]
  assign _T_158 = 8'h0 == io_host_req_addr; // @[RegFile.scala 90:41:@136.6]
  assign _T_159 = _T_156 & _T_158; // @[RegFile.scala 90:28:@137.6]
  assign _GEN_3 = _T_159 ? io_host_req_value : reg_0; // @[RegFile.scala 90:63:@138.6]
  assign _GEN_4 = io_finish ? 32'h2 : _GEN_3; // @[RegFile.scala 87:20:@129.4]
  assign _T_164 = 8'h4 == io_host_req_addr; // @[RegFile.scala 98:48:@148.6]
  assign _T_165 = _T_156 & _T_164; // @[RegFile.scala 98:30:@149.6]
  assign _GEN_5 = _T_165 ? io_host_req_value : reg_1; // @[RegFile.scala 98:70:@150.6]
  assign _GEN_6 = io_ecnt_0_valid ? io_ecnt_0_bits : _GEN_5; // @[RegFile.scala 95:29:@141.4]
  assign _T_170 = 8'h8 == io_host_req_addr; // @[RegFile.scala 105:48:@156.4]
  assign _T_171 = _T_156 & _T_170; // @[RegFile.scala 105:30:@157.4]
  assign _GEN_7 = _T_171 ? io_host_req_value : reg_2; // @[RegFile.scala 105:70:@158.4]
  assign _T_176 = 8'hc == io_host_req_addr; // @[RegFile.scala 105:48:@164.4]
  assign _T_177 = _T_156 & _T_176; // @[RegFile.scala 105:30:@165.4]
  assign _GEN_8 = _T_177 ? io_host_req_value : reg_3; // @[RegFile.scala 105:70:@166.4]
  assign _T_182 = 8'h10 == io_host_req_addr; // @[RegFile.scala 105:48:@172.4]
  assign _T_183 = _T_156 & _T_182; // @[RegFile.scala 105:30:@173.4]
  assign _GEN_9 = _T_183 ? io_host_req_value : reg_4; // @[RegFile.scala 105:70:@174.4]
  assign _T_188 = 8'h14 == io_host_req_addr; // @[RegFile.scala 105:48:@180.4]
  assign _T_189 = _T_156 & _T_188; // @[RegFile.scala 105:30:@181.4]
  assign _GEN_10 = _T_189 ? io_host_req_value : reg_5; // @[RegFile.scala 105:70:@182.4]
  assign _T_194 = 8'h18 == io_host_req_addr; // @[RegFile.scala 105:48:@188.4]
  assign _T_195 = _T_156 & _T_194; // @[RegFile.scala 105:30:@189.4]
  assign _GEN_11 = _T_195 ? io_host_req_value : reg_6; // @[RegFile.scala 105:70:@190.4]
  assign _T_200 = 8'h1c == io_host_req_addr; // @[RegFile.scala 105:48:@196.4]
  assign _T_201 = _T_156 & _T_200; // @[RegFile.scala 105:30:@197.4]
  assign _GEN_12 = _T_201 ? io_host_req_value : reg_7; // @[RegFile.scala 105:70:@198.4]
  assign _T_206 = 8'h20 == io_host_req_addr; // @[RegFile.scala 105:48:@204.4]
  assign _T_207 = _T_156 & _T_206; // @[RegFile.scala 105:30:@205.4]
  assign _GEN_13 = _T_207 ? io_host_req_value : reg_8; // @[RegFile.scala 105:70:@206.4]
  assign _T_212 = 8'h24 == io_host_req_addr; // @[RegFile.scala 105:48:@212.4]
  assign _T_213 = _T_156 & _T_212; // @[RegFile.scala 105:30:@213.4]
  assign _GEN_14 = _T_213 ? io_host_req_value : reg_9; // @[RegFile.scala 105:70:@214.4]
  assign _T_218 = 8'h28 == io_host_req_addr; // @[RegFile.scala 105:48:@220.4]
  assign _T_219 = _T_156 & _T_218; // @[RegFile.scala 105:30:@221.4]
  assign _GEN_15 = _T_219 ? io_host_req_value : reg_10; // @[RegFile.scala 105:70:@222.4]
  assign _T_224 = 8'h2c == io_host_req_addr; // @[RegFile.scala 105:48:@228.4]
  assign _T_225 = _T_156 & _T_224; // @[RegFile.scala 105:30:@229.4]
  assign _GEN_16 = _T_225 ? io_host_req_value : reg_11; // @[RegFile.scala 105:70:@230.4]
  assign _T_235 = _T_80 & _T_76; // @[RegFile.scala 111:46:@239.4]
  assign _T_238 = _T_224 ? reg_11 : 32'h0; // @[Mux.scala 46:16:@242.6]
  assign _T_240 = _T_218 ? reg_10 : _T_238; // @[Mux.scala 46:16:@244.6]
  assign _T_242 = _T_212 ? reg_9 : _T_240; // @[Mux.scala 46:16:@246.6]
  assign _T_244 = _T_206 ? reg_8 : _T_242; // @[Mux.scala 46:16:@248.6]
  assign _T_246 = _T_200 ? reg_7 : _T_244; // @[Mux.scala 46:16:@250.6]
  assign _T_248 = _T_194 ? reg_6 : _T_246; // @[Mux.scala 46:16:@252.6]
  assign _T_250 = _T_188 ? reg_5 : _T_248; // @[Mux.scala 46:16:@254.6]
  assign _T_252 = _T_182 ? reg_4 : _T_250; // @[Mux.scala 46:16:@256.6]
  assign _T_254 = _T_176 ? reg_3 : _T_252; // @[Mux.scala 46:16:@258.6]
  assign _T_256 = _T_170 ? reg_2 : _T_254; // @[Mux.scala 46:16:@260.6]
  assign _T_258 = _T_164 ? reg_1 : _T_256; // @[Mux.scala 46:16:@262.6]
  assign _T_260 = _T_158 ? reg_0 : _T_258; // @[Mux.scala 46:16:@264.6]
  assign _GEN_17 = _T_235 ? _T_260 : rdata; // @[RegFile.scala 111:70:@240.4]
  assign io_launch = reg_0[0]; // @[RegFile.scala 118:13:@271.4]
  assign io_vals_0 = reg_2; // @[RegFile.scala 121:16:@272.4]
  assign io_vals_1 = reg_3; // @[RegFile.scala 121:16:@273.4]
  assign io_vals_2 = reg_4; // @[RegFile.scala 121:16:@274.4]
  assign io_ptrs_0 = {reg_7,reg_6}; // @[RegFile.scala 125:16:@277.4]
  assign io_ptrs_1 = {reg_9,reg_8}; // @[RegFile.scala 125:16:@279.4]
  assign io_ptrs_2 = {reg_11,reg_10}; // @[RegFile.scala 125:16:@281.4]
  assign io_host_req_deq = _T_79 & io_host_req_valid; // @[RegFile.scala 77:19:@92.4]
  assign io_host_resp_valid = state; // @[RegFile.scala 115:22:@268.4]
  assign io_host_resp_bits = rdata; // @[RegFile.scala 116:21:@269.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_0 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_1 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_2 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_3 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg_4 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg_5 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  reg_6 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  reg_7 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  reg_8 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  reg_9 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  reg_10 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  reg_11 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  rdata = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      state <= 1'h0;
    end else begin
      if (_T_74) begin
        if (_T_77) begin
          state <= 1'h1;
        end
      end else begin
        if (state) begin
          state <= 1'h0;
        end
      end
    end
    if (reset) begin
      reg_0 <= 32'h0;
    end else begin
      if (io_finish) begin
        reg_0 <= 32'h2;
      end else begin
        if (_T_159) begin
          reg_0 <= io_host_req_value;
        end
      end
    end
    if (reset) begin
      reg_1 <= 32'h0;
    end else begin
      if (io_ecnt_0_valid) begin
        reg_1 <= io_ecnt_0_bits;
      end else begin
        if (_T_165) begin
          reg_1 <= io_host_req_value;
        end
      end
    end
    if (reset) begin
      reg_2 <= 32'h0;
    end else begin
      if (_T_171) begin
        reg_2 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_3 <= 32'h0;
    end else begin
      if (_T_177) begin
        reg_3 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_4 <= 32'h0;
    end else begin
      if (_T_183) begin
        reg_4 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_5 <= 32'h0;
    end else begin
      if (_T_189) begin
        reg_5 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_6 <= 32'h0;
    end else begin
      if (_T_195) begin
        reg_6 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_7 <= 32'h0;
    end else begin
      if (_T_201) begin
        reg_7 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_8 <= 32'h0;
    end else begin
      if (_T_207) begin
        reg_8 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_9 <= 32'h0;
    end else begin
      if (_T_213) begin
        reg_9 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_10 <= 32'h0;
    end else begin
      if (_T_219) begin
        reg_10 <= io_host_req_value;
      end
    end
    if (reset) begin
      reg_11 <= 32'h0;
    end else begin
      if (_T_225) begin
        reg_11 <= io_host_req_value;
      end
    end
    if (reset) begin
      rdata <= 32'h0;
    end else begin
      if (_T_235) begin
        if (_T_158) begin
          rdata <= reg_0;
        end else begin
          if (_T_164) begin
            rdata <= reg_1;
          end else begin
            if (_T_170) begin
              rdata <= reg_2;
            end else begin
              if (_T_176) begin
                rdata <= reg_3;
              end else begin
                if (_T_182) begin
                  rdata <= reg_4;
                end else begin
                  if (_T_188) begin
                    rdata <= reg_5;
                  end else begin
                    if (_T_194) begin
                      rdata <= reg_6;
                    end else begin
                      if (_T_200) begin
                        rdata <= reg_7;
                      end else begin
                        if (_T_206) begin
                          rdata <= reg_8;
                        end else begin
                          if (_T_212) begin
                            rdata <= reg_9;
                          end else begin
                            if (_T_218) begin
                              rdata <= reg_10;
                            end else begin
                              if (_T_224) begin
                                rdata <= reg_11;
                              end else begin
                                rdata <= 32'h0;
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
  end
endmodule
module Dot( // @[:@283.2]
  input         clock, // @[:@284.4]
  input         reset, // @[:@285.4]
  input         io_start, // @[:@286.4]
  input  [7:0]  io_arrA_0, // @[:@286.4]
  input  [7:0]  io_arrA_1, // @[:@286.4]
  input  [7:0]  io_arrA_2, // @[:@286.4]
  input  [7:0]  io_arrA_3, // @[:@286.4]
  input  [7:0]  io_arrA_4, // @[:@286.4]
  input  [7:0]  io_arrA_5, // @[:@286.4]
  input  [7:0]  io_arrA_6, // @[:@286.4]
  input  [7:0]  io_arrA_7, // @[:@286.4]
  input  [7:0]  io_arrB_0, // @[:@286.4]
  input  [7:0]  io_arrB_1, // @[:@286.4]
  input  [7:0]  io_arrB_2, // @[:@286.4]
  input  [7:0]  io_arrB_3, // @[:@286.4]
  input  [7:0]  io_arrB_4, // @[:@286.4]
  input  [7:0]  io_arrB_5, // @[:@286.4]
  input  [7:0]  io_arrB_6, // @[:@286.4]
  input  [7:0]  io_arrB_7, // @[:@286.4]
  output        io_valid, // @[:@286.4]
  output [22:0] io_res // @[:@286.4]
);
  reg [1:0] state; // @[Compute.scala 188:22:@288.4]
  reg [31:0] _RAND_0;
  reg [15:0] product_0; // @[Compute.scala 190:24:@298.4]
  reg [31:0] _RAND_1;
  reg [15:0] product_1; // @[Compute.scala 190:24:@298.4]
  reg [31:0] _RAND_2;
  reg [15:0] product_2; // @[Compute.scala 190:24:@298.4]
  reg [31:0] _RAND_3;
  reg [15:0] product_3; // @[Compute.scala 190:24:@298.4]
  reg [31:0] _RAND_4;
  reg [15:0] product_4; // @[Compute.scala 190:24:@298.4]
  reg [31:0] _RAND_5;
  reg [15:0] product_5; // @[Compute.scala 190:24:@298.4]
  reg [31:0] _RAND_6;
  reg [15:0] product_6; // @[Compute.scala 190:24:@298.4]
  reg [31:0] _RAND_7;
  reg [15:0] product_7; // @[Compute.scala 190:24:@298.4]
  reg [31:0] _RAND_8;
  reg [22:0] accum_0; // @[Compute.scala 191:22:@308.4]
  reg [31:0] _RAND_9;
  reg [22:0] accum_1; // @[Compute.scala 191:22:@308.4]
  reg [31:0] _RAND_10;
  reg [22:0] accum_2; // @[Compute.scala 191:22:@308.4]
  reg [31:0] _RAND_11;
  reg [22:0] accum_3; // @[Compute.scala 191:22:@308.4]
  reg [31:0] _RAND_12;
  reg [22:0] accum_4; // @[Compute.scala 191:22:@308.4]
  reg [31:0] _RAND_13;
  reg [22:0] accum_5; // @[Compute.scala 191:22:@308.4]
  reg [31:0] _RAND_14;
  reg [22:0] accum_6; // @[Compute.scala 191:22:@308.4]
  reg [31:0] _RAND_15;
  reg [22:0] accum_7; // @[Compute.scala 191:22:@308.4]
  reg [31:0] _RAND_16;
  reg [2:0] cnt; // @[Compute.scala 192:20:@309.4]
  reg [31:0] _RAND_17;
  wire  _T_206; // @[Conditional.scala 37:30:@310.4]
  wire  _T_209; // @[Compute.scala 198:15:@315.8]
  wire [1:0] _GEN_0; // @[Compute.scala 196:23:@312.6]
  wire  _T_210; // @[Conditional.scala 37:30:@322.6]
  wire  _T_212; // @[Compute.scala 202:17:@324.8]
  wire [1:0] _GEN_1; // @[Compute.scala 202:43:@325.8]
  wire  _T_216; // @[Conditional.scala 37:30:@335.8]
  wire [1:0] _GEN_2; // @[Conditional.scala 39:67:@336.8]
  wire [1:0] _GEN_3; // @[Conditional.scala 39:67:@323.6]
  wire [1:0] _GEN_4; // @[Conditional.scala 40:58:@311.4]
  wire  _T_220; // @[Compute.scala 214:15:@344.4]
  wire  _T_222; // @[Compute.scala 216:22:@349.6]
  wire [3:0] _T_224; // @[Compute.scala 217:16:@351.8]
  wire [2:0] _T_225; // @[Compute.scala 217:16:@352.8]
  wire [2:0] _GEN_5; // @[Compute.scala 216:38:@350.6]
  wire [2:0] _GEN_6; // @[Compute.scala 214:26:@345.4]
  wire [15:0] _T_226; // @[Compute.scala 222:28:@356.4]
  wire [15:0] _T_227; // @[Compute.scala 224:30:@358.4]
  wire [22:0] _GEN_7; // @[Compute.scala 225:28:@360.4]
  wire [23:0] _T_228; // @[Compute.scala 225:28:@360.4]
  wire [15:0] _T_236; // @[Compute.scala 224:30:@372.4]
  wire [22:0] _GEN_8; // @[Compute.scala 225:28:@374.4]
  wire [23:0] _T_237; // @[Compute.scala 225:28:@374.4]
  wire [15:0] _T_245; // @[Compute.scala 224:30:@386.4]
  wire [22:0] _GEN_9; // @[Compute.scala 225:28:@388.4]
  wire [23:0] _T_246; // @[Compute.scala 225:28:@388.4]
  wire [15:0] _T_254; // @[Compute.scala 224:30:@400.4]
  wire [22:0] _GEN_10; // @[Compute.scala 225:28:@402.4]
  wire [23:0] _T_255; // @[Compute.scala 225:28:@402.4]
  wire [15:0] _T_263; // @[Compute.scala 224:30:@414.4]
  wire [22:0] _GEN_11; // @[Compute.scala 225:28:@416.4]
  wire [23:0] _T_264; // @[Compute.scala 225:28:@416.4]
  wire [15:0] _T_272; // @[Compute.scala 224:30:@428.4]
  wire [22:0] _GEN_12; // @[Compute.scala 225:28:@430.4]
  wire [23:0] _T_273; // @[Compute.scala 225:28:@430.4]
  wire [15:0] _T_281; // @[Compute.scala 224:30:@442.4]
  wire [22:0] _GEN_13; // @[Compute.scala 225:28:@444.4]
  wire [23:0] _T_282; // @[Compute.scala 225:28:@444.4]
  wire  _GEN_14; // @[Compute.scala 198:15:@317.10]
  wire  _GEN_15; // @[Compute.scala 204:15:@330.12]
  wire  _GEN_16; // @[Compute.scala 204:15:@330.12]
  wire  _GEN_17; // @[Compute.scala 204:15:@330.12]
  wire  _GEN_19; // @[Compute.scala 209:13:@341.12]
  wire  _GEN_20; // @[Compute.scala 209:13:@341.12]
  wire  _GEN_21; // @[Compute.scala 209:13:@341.12]
  assign _T_206 = 2'h0 == state; // @[Conditional.scala 37:30:@310.4]
  assign _T_209 = reset == 1'h0; // @[Compute.scala 198:15:@315.8]
  assign _GEN_0 = io_start ? 2'h1 : state; // @[Compute.scala 196:23:@312.6]
  assign _T_210 = 2'h1 == state; // @[Conditional.scala 37:30:@322.6]
  assign _T_212 = cnt == 3'h7; // @[Compute.scala 202:17:@324.8]
  assign _GEN_1 = _T_212 ? 2'h2 : state; // @[Compute.scala 202:43:@325.8]
  assign _T_216 = 2'h2 == state; // @[Conditional.scala 37:30:@335.8]
  assign _GEN_2 = _T_216 ? 2'h0 : state; // @[Conditional.scala 39:67:@336.8]
  assign _GEN_3 = _T_210 ? _GEN_1 : _GEN_2; // @[Conditional.scala 39:67:@323.6]
  assign _GEN_4 = _T_206 ? _GEN_0 : _GEN_3; // @[Conditional.scala 40:58:@311.4]
  assign _T_220 = state == 2'h0; // @[Compute.scala 214:15:@344.4]
  assign _T_222 = state == 2'h1; // @[Compute.scala 216:22:@349.6]
  assign _T_224 = cnt + 3'h1; // @[Compute.scala 217:16:@351.8]
  assign _T_225 = cnt + 3'h1; // @[Compute.scala 217:16:@352.8]
  assign _GEN_5 = _T_222 ? _T_225 : cnt; // @[Compute.scala 216:38:@350.6]
  assign _GEN_6 = _T_220 ? 3'h0 : _GEN_5; // @[Compute.scala 214:26:@345.4]
  assign _T_226 = io_arrA_0 * io_arrB_0; // @[Compute.scala 222:28:@356.4]
  assign _T_227 = io_arrA_1 * io_arrB_1; // @[Compute.scala 224:30:@358.4]
  assign _GEN_7 = {{7'd0}, product_1}; // @[Compute.scala 225:28:@360.4]
  assign _T_228 = accum_0 + _GEN_7; // @[Compute.scala 225:28:@360.4]
  assign _T_236 = io_arrA_2 * io_arrB_2; // @[Compute.scala 224:30:@372.4]
  assign _GEN_8 = {{7'd0}, product_2}; // @[Compute.scala 225:28:@374.4]
  assign _T_237 = accum_1 + _GEN_8; // @[Compute.scala 225:28:@374.4]
  assign _T_245 = io_arrA_3 * io_arrB_3; // @[Compute.scala 224:30:@386.4]
  assign _GEN_9 = {{7'd0}, product_3}; // @[Compute.scala 225:28:@388.4]
  assign _T_246 = accum_2 + _GEN_9; // @[Compute.scala 225:28:@388.4]
  assign _T_254 = io_arrA_4 * io_arrB_4; // @[Compute.scala 224:30:@400.4]
  assign _GEN_10 = {{7'd0}, product_4}; // @[Compute.scala 225:28:@402.4]
  assign _T_255 = accum_3 + _GEN_10; // @[Compute.scala 225:28:@402.4]
  assign _T_263 = io_arrA_5 * io_arrB_5; // @[Compute.scala 224:30:@414.4]
  assign _GEN_11 = {{7'd0}, product_5}; // @[Compute.scala 225:28:@416.4]
  assign _T_264 = accum_4 + _GEN_11; // @[Compute.scala 225:28:@416.4]
  assign _T_272 = io_arrA_6 * io_arrB_6; // @[Compute.scala 224:30:@428.4]
  assign _GEN_12 = {{7'd0}, product_6}; // @[Compute.scala 225:28:@430.4]
  assign _T_273 = accum_5 + _GEN_12; // @[Compute.scala 225:28:@430.4]
  assign _T_281 = io_arrA_7 * io_arrB_7; // @[Compute.scala 224:30:@442.4]
  assign _GEN_13 = {{7'd0}, product_7}; // @[Compute.scala 225:28:@444.4]
  assign _T_282 = accum_6 + _GEN_13; // @[Compute.scala 225:28:@444.4]
  assign io_valid = state == 2'h2; // @[Compute.scala 233:12:@458.4]
  assign io_res = accum_7; // @[Compute.scala 232:10:@456.4]
  assign _GEN_14 = _T_206 & io_start; // @[Compute.scala 198:15:@317.10]
  assign _GEN_15 = _T_206 == 1'h0; // @[Compute.scala 204:15:@330.12]
  assign _GEN_16 = _GEN_15 & _T_210; // @[Compute.scala 204:15:@330.12]
  assign _GEN_17 = _GEN_16 & _T_212; // @[Compute.scala 204:15:@330.12]
  assign _GEN_19 = _T_210 == 1'h0; // @[Compute.scala 209:13:@341.12]
  assign _GEN_20 = _GEN_15 & _GEN_19; // @[Compute.scala 209:13:@341.12]
  assign _GEN_21 = _GEN_20 & _T_216; // @[Compute.scala 209:13:@341.12]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  product_0 = _RAND_1[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  product_1 = _RAND_2[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  product_2 = _RAND_3[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  product_3 = _RAND_4[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  product_4 = _RAND_5[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  product_5 = _RAND_6[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  product_6 = _RAND_7[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  product_7 = _RAND_8[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  accum_0 = _RAND_9[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  accum_1 = _RAND_10[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  accum_2 = _RAND_11[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  accum_3 = _RAND_12[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  accum_4 = _RAND_13[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  accum_5 = _RAND_14[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  accum_6 = _RAND_15[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  accum_7 = _RAND_16[22:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  cnt = _RAND_17[2:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      state <= 2'h0;
    end else begin
      if (_T_206) begin
        if (io_start) begin
          state <= 2'h1;
        end
      end else begin
        if (_T_210) begin
          if (_T_212) begin
            state <= 2'h2;
          end
        end else begin
          if (_T_216) begin
            state <= 2'h0;
          end
        end
      end
    end
    if (reset) begin
      product_0 <= 16'h0;
    end else begin
      product_0 <= _T_226;
    end
    if (reset) begin
      product_1 <= 16'h0;
    end else begin
      product_1 <= _T_227;
    end
    if (reset) begin
      product_2 <= 16'h0;
    end else begin
      product_2 <= _T_236;
    end
    if (reset) begin
      product_3 <= 16'h0;
    end else begin
      product_3 <= _T_245;
    end
    if (reset) begin
      product_4 <= 16'h0;
    end else begin
      product_4 <= _T_254;
    end
    if (reset) begin
      product_5 <= 16'h0;
    end else begin
      product_5 <= _T_263;
    end
    if (reset) begin
      product_6 <= 16'h0;
    end else begin
      product_6 <= _T_272;
    end
    if (reset) begin
      product_7 <= 16'h0;
    end else begin
      product_7 <= _T_281;
    end
    if (reset) begin
      accum_0 <= 23'h0;
    end else begin
      accum_0 <= {{7'd0}, product_0};
    end
    if (reset) begin
      accum_1 <= 23'h0;
    end else begin
      accum_1 <= _T_228[22:0];
    end
    if (reset) begin
      accum_2 <= 23'h0;
    end else begin
      accum_2 <= _T_237[22:0];
    end
    if (reset) begin
      accum_3 <= 23'h0;
    end else begin
      accum_3 <= _T_246[22:0];
    end
    if (reset) begin
      accum_4 <= 23'h0;
    end else begin
      accum_4 <= _T_255[22:0];
    end
    if (reset) begin
      accum_5 <= 23'h0;
    end else begin
      accum_5 <= _T_264[22:0];
    end
    if (reset) begin
      accum_6 <= 23'h0;
    end else begin
      accum_6 <= _T_273[22:0];
    end
    if (reset) begin
      accum_7 <= 23'h0;
    end else begin
      accum_7 <= _T_282[22:0];
    end
    if (reset) begin
      cnt <= 3'h0;
    end else begin
      if (_T_220) begin
        cnt <= 3'h0;
      end else begin
        if (_T_222) begin
          cnt <= _T_225;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_14 & _T_209) begin
          $fwrite(32'h80000002,"switching to sCalculate\n"); // @[Compute.scala 198:15:@317.10]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_17 & _T_209) begin
          $fwrite(32'h80000002,"switching to sDone\n"); // @[Compute.scala 204:15:@330.12]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_21 & _T_209) begin
          $fwrite(32'h80000002,"switching to sIdle\n"); // @[Compute.scala 209:13:@341.12]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"cnt: %d\n",cnt); // @[Compute.scala 227:11:@365.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"\na(%d): %d, \n\n",1'h1,accum_1); // @[Compute.scala 228:11:@370.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"cnt: %d\n",cnt); // @[Compute.scala 227:11:@379.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"\na(%d): %d, \n\n",2'h2,accum_2); // @[Compute.scala 228:11:@384.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"cnt: %d\n",cnt); // @[Compute.scala 227:11:@393.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"\na(%d): %d, \n\n",2'h3,accum_3); // @[Compute.scala 228:11:@398.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"cnt: %d\n",cnt); // @[Compute.scala 227:11:@407.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"\na(%d): %d, \n\n",3'h4,accum_4); // @[Compute.scala 228:11:@412.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"cnt: %d\n",cnt); // @[Compute.scala 227:11:@421.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"\na(%d): %d, \n\n",3'h5,accum_5); // @[Compute.scala 228:11:@426.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"cnt: %d\n",cnt); // @[Compute.scala 227:11:@435.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"\na(%d): %d, \n\n",3'h6,accum_6); // @[Compute.scala 228:11:@440.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"cnt: %d\n",cnt); // @[Compute.scala 227:11:@449.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_209) begin
          $fwrite(32'h80000002,"\na(%d): %d, \n\n",3'h7,accum_7); // @[Compute.scala 228:11:@454.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Accumulator( // @[:@460.2]
  input         clock, // @[:@461.4]
  input         reset, // @[:@462.4]
  input         io_rst, // @[:@463.4]
  input         io_valid, // @[:@463.4]
  output        io_ready, // @[:@463.4]
  input  [62:0] io_in, // @[:@463.4]
  output [63:0] io_sum // @[:@463.4]
);
  reg [63:0] reg$; // @[Compute.scala 245:20:@465.4]
  reg [63:0] _RAND_0;
  reg  ready; // @[Compute.scala 246:22:@466.4]
  reg [31:0] _RAND_1;
  wire [63:0] _GEN_2; // @[Compute.scala 250:16:@473.8]
  wire [64:0] _T_19; // @[Compute.scala 250:16:@473.8]
  wire  _T_23; // @[Compute.scala 251:11:@477.8]
  wire [64:0] _GEN_0; // @[Compute.scala 249:26:@472.6]
  wire [64:0] _GEN_1; // @[Compute.scala 247:17:@468.4]
  wire  _GEN_4; // @[Compute.scala 251:11:@479.10]
  wire  _GEN_5; // @[Compute.scala 251:11:@479.10]
  assign _GEN_2 = {{1'd0}, io_in}; // @[Compute.scala 250:16:@473.8]
  assign _T_19 = reg$ + _GEN_2; // @[Compute.scala 250:16:@473.8]
  assign _T_23 = reset == 1'h0; // @[Compute.scala 251:11:@477.8]
  assign _GEN_0 = io_valid ? _T_19 : {{1'd0}, reg$}; // @[Compute.scala 249:26:@472.6]
  assign _GEN_1 = io_rst ? 65'h0 : _GEN_0; // @[Compute.scala 247:17:@468.4]
  assign io_ready = ready; // @[Compute.scala 257:12:@482.4]
  assign io_sum = reg$; // @[Compute.scala 258:10:@483.4]
  assign _GEN_4 = io_rst == 1'h0; // @[Compute.scala 251:11:@479.10]
  assign _GEN_5 = _GEN_4 & io_valid; // @[Compute.scala 251:11:@479.10]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  reg$ = _RAND_0[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  ready = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg$ <= 64'h0;
    end else begin
      reg$ <= _GEN_1[63:0];
    end
    ready <= io_valid;
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_5 & _T_23) begin
          $fwrite(32'h80000002,"slice sum: %d \n",_T_19); // @[Compute.scala 251:11:@479.10]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Compute( // @[:@485.2]
  input         clock, // @[:@486.4]
  input         reset, // @[:@487.4]
  input         io_launch, // @[:@488.4]
  output        io_finish, // @[:@488.4]
  output        io_ecnt_0_valid, // @[:@488.4]
  output [31:0] io_ecnt_0_bits, // @[:@488.4]
  input  [31:0] io_vals_0, // @[:@488.4]
  input  [31:0] io_vals_1, // @[:@488.4]
  input  [31:0] io_vals_2, // @[:@488.4]
  input  [63:0] io_ptrs_0, // @[:@488.4]
  input  [63:0] io_ptrs_1, // @[:@488.4]
  input  [63:0] io_ptrs_2, // @[:@488.4]
  output        io_mem_req_valid, // @[:@488.4]
  output        io_mem_req_opcode, // @[:@488.4]
  output [63:0] io_mem_req_addr, // @[:@488.4]
  output        io_mem_wr_valid, // @[:@488.4]
  output [63:0] io_mem_wr_bits, // @[:@488.4]
  output        io_mem_rd_ready, // @[:@488.4]
  input         io_mem_rd_valid, // @[:@488.4]
  input  [63:0] io_mem_rd_bits // @[:@488.4]
);
  wire  dot_clock; // @[Compute.scala 150:19:@738.4]
  wire  dot_reset; // @[Compute.scala 150:19:@738.4]
  wire  dot_io_start; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrA_0; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrA_1; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrA_2; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrA_3; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrA_4; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrA_5; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrA_6; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrA_7; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrB_0; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrB_1; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrB_2; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrB_3; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrB_4; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrB_5; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrB_6; // @[Compute.scala 150:19:@738.4]
  wire [7:0] dot_io_arrB_7; // @[Compute.scala 150:19:@738.4]
  wire  dot_io_valid; // @[Compute.scala 150:19:@738.4]
  wire [22:0] dot_io_res; // @[Compute.scala 150:19:@738.4]
  wire  overallAccum_clock; // @[Compute.scala 151:28:@741.4]
  wire  overallAccum_reset; // @[Compute.scala 151:28:@741.4]
  wire  overallAccum_io_rst; // @[Compute.scala 151:28:@741.4]
  wire  overallAccum_io_valid; // @[Compute.scala 151:28:@741.4]
  wire  overallAccum_io_ready; // @[Compute.scala 151:28:@741.4]
  wire [62:0] overallAccum_io_in; // @[Compute.scala 151:28:@741.4]
  wire [63:0] overallAccum_io_sum; // @[Compute.scala 151:28:@741.4]
  reg [2:0] state; // @[Compute.scala 48:22:@490.4]
  reg [31:0] _RAND_0;
  wire [7:0] shift; // @[Compute.scala 49:25:@491.4]
  reg [31:0] cycles; // @[Compute.scala 53:23:@492.4]
  reg [31:0] _RAND_1;
  reg [31:0] reg1_0; // @[Compute.scala 54:17:@493.4]
  reg [31:0] _RAND_2;
  reg [31:0] reg1_1; // @[Compute.scala 54:17:@493.4]
  reg [31:0] _RAND_3;
  reg [31:0] reg1_2; // @[Compute.scala 54:17:@493.4]
  reg [31:0] _RAND_4;
  reg [31:0] reg1_3; // @[Compute.scala 54:17:@493.4]
  reg [31:0] _RAND_5;
  reg [31:0] reg1_4; // @[Compute.scala 54:17:@493.4]
  reg [31:0] _RAND_6;
  reg [31:0] reg1_5; // @[Compute.scala 54:17:@493.4]
  reg [31:0] _RAND_7;
  reg [31:0] reg1_6; // @[Compute.scala 54:17:@493.4]
  reg [31:0] _RAND_8;
  reg [31:0] reg1_7; // @[Compute.scala 54:17:@493.4]
  reg [31:0] _RAND_9;
  reg [31:0] reg2_0; // @[Compute.scala 55:17:@494.4]
  reg [31:0] _RAND_10;
  reg [31:0] reg2_1; // @[Compute.scala 55:17:@494.4]
  reg [31:0] _RAND_11;
  reg [31:0] reg2_2; // @[Compute.scala 55:17:@494.4]
  reg [31:0] _RAND_12;
  reg [31:0] reg2_3; // @[Compute.scala 55:17:@494.4]
  reg [31:0] _RAND_13;
  reg [31:0] reg2_4; // @[Compute.scala 55:17:@494.4]
  reg [31:0] _RAND_14;
  reg [31:0] reg2_5; // @[Compute.scala 55:17:@494.4]
  reg [31:0] _RAND_15;
  reg [31:0] reg2_6; // @[Compute.scala 55:17:@494.4]
  reg [31:0] _RAND_16;
  reg [31:0] reg2_7; // @[Compute.scala 55:17:@494.4]
  reg [31:0] _RAND_17;
  reg [31:0] cnt; // @[Compute.scala 56:16:@495.4]
  reg [31:0] _RAND_18;
  reg [63:0] raddr1; // @[Compute.scala 57:19:@496.4]
  reg [63:0] _RAND_19;
  reg [63:0] raddr2; // @[Compute.scala 58:19:@497.4]
  reg [63:0] _RAND_20;
  reg [63:0] waddr; // @[Compute.scala 59:18:@498.4]
  reg [63:0] _RAND_21;
  wire  _T_112; // @[Conditional.scala 37:30:@499.4]
  wire [2:0] _GEN_0; // @[Compute.scala 69:24:@501.6]
  wire  _T_113; // @[Conditional.scala 37:30:@506.6]
  wire  _T_114; // @[Conditional.scala 37:30:@511.8]
  wire [2:0] _GEN_1; // @[Compute.scala 78:30:@513.10]
  wire  _T_115; // @[Conditional.scala 37:30:@518.10]
  wire  _T_116; // @[Conditional.scala 37:30:@523.12]
  wire [2:0] _GEN_2; // @[Compute.scala 86:30:@525.14]
  wire  _T_117; // @[Conditional.scala 37:30:@530.14]
  wire  _T_118; // @[Conditional.scala 37:30:@535.16]
  wire [32:0] _T_120; // @[Compute.scala 95:29:@537.18]
  wire [32:0] _T_121; // @[Compute.scala 95:29:@538.18]
  wire [31:0] _T_122; // @[Compute.scala 95:29:@539.18]
  wire  _T_123; // @[Compute.scala 95:17:@540.18]
  wire [2:0] _GEN_3; // @[Compute.scala 95:37:@541.18]
  wire [2:0] _GEN_4; // @[Conditional.scala 39:67:@536.16]
  wire [2:0] _GEN_5; // @[Conditional.scala 39:67:@531.14]
  wire [2:0] _GEN_6; // @[Conditional.scala 39:67:@524.12]
  wire [2:0] _GEN_7; // @[Conditional.scala 39:67:@519.10]
  wire [2:0] _GEN_8; // @[Conditional.scala 39:67:@512.8]
  wire [2:0] _GEN_9; // @[Conditional.scala 39:67:@507.6]
  wire [2:0] _GEN_10; // @[Conditional.scala 40:58:@500.4]
  wire  _T_124; // @[Compute.scala 103:20:@548.4]
  wire  _T_130; // @[Compute.scala 106:15:@554.4]
  wire [32:0] _T_133; // @[Compute.scala 109:22:@559.6]
  wire [31:0] _T_134; // @[Compute.scala 109:22:@560.6]
  wire [31:0] _GEN_11; // @[Compute.scala 106:26:@555.4]
  wire [64:0] _T_138; // @[Compute.scala 121:22:@574.8]
  wire [63:0] _T_139; // @[Compute.scala 121:22:@575.8]
  wire [64:0] _T_141; // @[Compute.scala 122:22:@577.8]
  wire [63:0] _T_142; // @[Compute.scala 122:22:@578.8]
  wire [63:0] _GEN_12; // @[Compute.scala 120:38:@573.6]
  wire [63:0] _GEN_13; // @[Compute.scala 120:38:@573.6]
  wire  _T_143; // @[Compute.scala 127:29:@582.4]
  wire  _T_144; // @[Compute.scala 127:51:@583.4]
  wire  _T_145; // @[Compute.scala 127:43:@584.4]
  wire  _T_146; // @[Compute.scala 127:73:@585.4]
  wire [63:0] _T_154; // @[Compute.scala 130:72:@595.4]
  wire  _T_156; // @[Compute.scala 133:15:@598.4]
  wire  _T_157; // @[Compute.scala 133:30:@599.4]
  wire [7:0] _T_158; // @[Compute.scala 135:32:@601.6]
  wire  _T_162; // @[Compute.scala 136:13:@605.6]
  wire [7:0] _T_163; // @[Compute.scala 135:32:@609.6]
  wire [7:0] _T_168; // @[Compute.scala 135:32:@617.6]
  wire [7:0] _T_173; // @[Compute.scala 135:32:@625.6]
  wire [7:0] _T_178; // @[Compute.scala 135:32:@633.6]
  wire [7:0] _T_183; // @[Compute.scala 135:32:@641.6]
  wire [7:0] _T_188; // @[Compute.scala 135:32:@649.6]
  wire [7:0] _T_193; // @[Compute.scala 135:32:@657.6]
  wire  _T_198; // @[Compute.scala 140:15:@666.4]
  wire  _T_199; // @[Compute.scala 140:30:@667.4]
  wire [277:0] _GEN_36; // @[Compute.scala 152:37:@744.4]
  reg [277:0] shiftReg; // @[Compute.scala 152:25:@745.4]
  reg [287:0] _RAND_22;
  reg  validReg; // @[Compute.scala 153:25:@747.4]
  reg [31:0] _RAND_23;
  wire [32:0] _T_250; // @[Compute.scala 170:16:@778.8]
  wire [31:0] _T_251; // @[Compute.scala 170:16:@779.8]
  wire [31:0] _GEN_34; // @[Compute.scala 169:38:@777.6]
  Dot dot ( // @[Compute.scala 150:19:@738.4]
    .clock(dot_clock),
    .reset(dot_reset),
    .io_start(dot_io_start),
    .io_arrA_0(dot_io_arrA_0),
    .io_arrA_1(dot_io_arrA_1),
    .io_arrA_2(dot_io_arrA_2),
    .io_arrA_3(dot_io_arrA_3),
    .io_arrA_4(dot_io_arrA_4),
    .io_arrA_5(dot_io_arrA_5),
    .io_arrA_6(dot_io_arrA_6),
    .io_arrA_7(dot_io_arrA_7),
    .io_arrB_0(dot_io_arrB_0),
    .io_arrB_1(dot_io_arrB_1),
    .io_arrB_2(dot_io_arrB_2),
    .io_arrB_3(dot_io_arrB_3),
    .io_arrB_4(dot_io_arrB_4),
    .io_arrB_5(dot_io_arrB_5),
    .io_arrB_6(dot_io_arrB_6),
    .io_arrB_7(dot_io_arrB_7),
    .io_valid(dot_io_valid),
    .io_res(dot_io_res)
  );
  Accumulator overallAccum ( // @[Compute.scala 151:28:@741.4]
    .clock(overallAccum_clock),
    .reset(overallAccum_reset),
    .io_rst(overallAccum_io_rst),
    .io_valid(overallAccum_io_valid),
    .io_ready(overallAccum_io_ready),
    .io_in(overallAccum_io_in),
    .io_sum(overallAccum_io_sum)
  );
  assign shift = io_vals_0[7:0]; // @[Compute.scala 49:25:@491.4]
  assign _T_112 = 3'h0 == state; // @[Conditional.scala 37:30:@499.4]
  assign _GEN_0 = io_launch ? 3'h1 : state; // @[Compute.scala 69:24:@501.6]
  assign _T_113 = 3'h1 == state; // @[Conditional.scala 37:30:@506.6]
  assign _T_114 = 3'h2 == state; // @[Conditional.scala 37:30:@511.8]
  assign _GEN_1 = io_mem_rd_valid ? 3'h3 : state; // @[Compute.scala 78:30:@513.10]
  assign _T_115 = 3'h3 == state; // @[Conditional.scala 37:30:@518.10]
  assign _T_116 = 3'h4 == state; // @[Conditional.scala 37:30:@523.12]
  assign _GEN_2 = io_mem_rd_valid ? 3'h5 : state; // @[Compute.scala 86:30:@525.14]
  assign _T_117 = 3'h5 == state; // @[Conditional.scala 37:30:@530.14]
  assign _T_118 = 3'h6 == state; // @[Conditional.scala 37:30:@535.16]
  assign _T_120 = io_vals_1 - 32'h1; // @[Compute.scala 95:29:@537.18]
  assign _T_121 = $unsigned(_T_120); // @[Compute.scala 95:29:@538.18]
  assign _T_122 = _T_121[31:0]; // @[Compute.scala 95:29:@539.18]
  assign _T_123 = cnt == _T_122; // @[Compute.scala 95:17:@540.18]
  assign _GEN_3 = _T_123 ? 3'h0 : 3'h1; // @[Compute.scala 95:37:@541.18]
  assign _GEN_4 = _T_118 ? _GEN_3 : state; // @[Conditional.scala 39:67:@536.16]
  assign _GEN_5 = _T_117 ? 3'h6 : _GEN_4; // @[Conditional.scala 39:67:@531.14]
  assign _GEN_6 = _T_116 ? _GEN_2 : _GEN_5; // @[Conditional.scala 39:67:@524.12]
  assign _GEN_7 = _T_115 ? 3'h4 : _GEN_6; // @[Conditional.scala 39:67:@519.10]
  assign _GEN_8 = _T_114 ? _GEN_1 : _GEN_7; // @[Conditional.scala 39:67:@512.8]
  assign _GEN_9 = _T_113 ? 3'h2 : _GEN_8; // @[Conditional.scala 39:67:@507.6]
  assign _GEN_10 = _T_112 ? _GEN_0 : _GEN_9; // @[Conditional.scala 40:58:@500.4]
  assign _T_124 = state == 3'h6; // @[Compute.scala 103:20:@548.4]
  assign _T_130 = state == 3'h0; // @[Compute.scala 106:15:@554.4]
  assign _T_133 = cycles + 32'h1; // @[Compute.scala 109:22:@559.6]
  assign _T_134 = cycles + 32'h1; // @[Compute.scala 109:22:@560.6]
  assign _GEN_11 = _T_130 ? 32'h0 : _T_134; // @[Compute.scala 106:26:@555.4]
  assign _T_138 = raddr1 + 64'h8; // @[Compute.scala 121:22:@574.8]
  assign _T_139 = raddr1 + 64'h8; // @[Compute.scala 121:22:@575.8]
  assign _T_141 = raddr2 + 64'h8; // @[Compute.scala 122:22:@577.8]
  assign _T_142 = raddr2 + 64'h8; // @[Compute.scala 122:22:@578.8]
  assign _GEN_12 = _T_124 ? _T_139 : raddr1; // @[Compute.scala 120:38:@573.6]
  assign _GEN_13 = _T_124 ? _T_142 : raddr2; // @[Compute.scala 120:38:@573.6]
  assign _T_143 = state == 3'h1; // @[Compute.scala 127:29:@582.4]
  assign _T_144 = state == 3'h3; // @[Compute.scala 127:51:@583.4]
  assign _T_145 = _T_143 | _T_144; // @[Compute.scala 127:43:@584.4]
  assign _T_146 = state == 3'h5; // @[Compute.scala 127:73:@585.4]
  assign _T_154 = _T_143 ? raddr1 : raddr2; // @[Compute.scala 130:72:@595.4]
  assign _T_156 = state == 3'h2; // @[Compute.scala 133:15:@598.4]
  assign _T_157 = _T_156 & io_mem_rd_valid; // @[Compute.scala 133:30:@599.4]
  assign _T_158 = io_mem_rd_bits[7:0]; // @[Compute.scala 135:32:@601.6]
  assign _T_162 = reset == 1'h0; // @[Compute.scala 136:13:@605.6]
  assign _T_163 = io_mem_rd_bits[15:8]; // @[Compute.scala 135:32:@609.6]
  assign _T_168 = io_mem_rd_bits[23:16]; // @[Compute.scala 135:32:@617.6]
  assign _T_173 = io_mem_rd_bits[31:24]; // @[Compute.scala 135:32:@625.6]
  assign _T_178 = io_mem_rd_bits[39:32]; // @[Compute.scala 135:32:@633.6]
  assign _T_183 = io_mem_rd_bits[47:40]; // @[Compute.scala 135:32:@641.6]
  assign _T_188 = io_mem_rd_bits[55:48]; // @[Compute.scala 135:32:@649.6]
  assign _T_193 = io_mem_rd_bits[63:56]; // @[Compute.scala 135:32:@657.6]
  assign _T_198 = state == 3'h4; // @[Compute.scala 140:15:@666.4]
  assign _T_199 = _T_198 & io_mem_rd_valid; // @[Compute.scala 140:30:@667.4]
  assign _GEN_36 = {{255'd0}, dot_io_res}; // @[Compute.scala 152:37:@744.4]
  assign _T_250 = cnt + 32'h1; // @[Compute.scala 170:16:@778.8]
  assign _T_251 = cnt + 32'h1; // @[Compute.scala 170:16:@779.8]
  assign _GEN_34 = _T_124 ? _T_251 : cnt; // @[Compute.scala 169:38:@777.6]
  assign io_finish = overallAccum_io_ready; // @[Compute.scala 175:13:@782.4]
  assign io_ecnt_0_valid = _T_124 & _T_123; // @[Compute.scala 112:20:@563.4]
  assign io_ecnt_0_bits = cycles; // @[Compute.scala 113:19:@564.4]
  assign io_mem_req_valid = _T_145 | _T_146; // @[Compute.scala 127:20:@587.4]
  assign io_mem_req_opcode = state == 3'h5; // @[Compute.scala 128:21:@589.4]
  assign io_mem_req_addr = _T_145 ? _T_154 : waddr; // @[Compute.scala 130:19:@597.4]
  assign io_mem_wr_valid = overallAccum_io_ready; // @[Compute.scala 163:19:@769.4]
  assign io_mem_wr_bits = overallAccum_io_sum; // @[Compute.scala 164:18:@770.4]
  assign io_mem_rd_ready = _T_156 | _T_198; // @[Compute.scala 147:19:@737.4]
  assign dot_clock = clock; // @[:@739.4]
  assign dot_reset = reset; // @[:@740.4]
  assign dot_io_start = _T_124 & _T_123; // @[Compute.scala 155:16:@749.4]
  assign dot_io_arrA_0 = reg1_0[7:0]; // @[Compute.scala 156:15:@750.4]
  assign dot_io_arrA_1 = reg1_1[7:0]; // @[Compute.scala 156:15:@751.4]
  assign dot_io_arrA_2 = reg1_2[7:0]; // @[Compute.scala 156:15:@752.4]
  assign dot_io_arrA_3 = reg1_3[7:0]; // @[Compute.scala 156:15:@753.4]
  assign dot_io_arrA_4 = reg1_4[7:0]; // @[Compute.scala 156:15:@754.4]
  assign dot_io_arrA_5 = reg1_5[7:0]; // @[Compute.scala 156:15:@755.4]
  assign dot_io_arrA_6 = reg1_6[7:0]; // @[Compute.scala 156:15:@756.4]
  assign dot_io_arrA_7 = reg1_7[7:0]; // @[Compute.scala 156:15:@757.4]
  assign dot_io_arrB_0 = reg2_0[7:0]; // @[Compute.scala 157:15:@758.4]
  assign dot_io_arrB_1 = reg2_1[7:0]; // @[Compute.scala 157:15:@759.4]
  assign dot_io_arrB_2 = reg2_2[7:0]; // @[Compute.scala 157:15:@760.4]
  assign dot_io_arrB_3 = reg2_3[7:0]; // @[Compute.scala 157:15:@761.4]
  assign dot_io_arrB_4 = reg2_4[7:0]; // @[Compute.scala 157:15:@762.4]
  assign dot_io_arrB_5 = reg2_5[7:0]; // @[Compute.scala 157:15:@763.4]
  assign dot_io_arrB_6 = reg2_6[7:0]; // @[Compute.scala 157:15:@764.4]
  assign dot_io_arrB_7 = reg2_7[7:0]; // @[Compute.scala 157:15:@765.4]
  assign overallAccum_clock = clock; // @[:@742.4]
  assign overallAccum_reset = reset; // @[:@743.4]
  assign overallAccum_io_rst = io_vals_2[0]; // @[Compute.scala 158:23:@766.4]
  assign overallAccum_io_valid = validReg; // @[Compute.scala 159:25:@767.4]
  assign overallAccum_io_in = shiftReg[62:0]; // @[Compute.scala 160:22:@768.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  cycles = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg1_0 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg1_1 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg1_2 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg1_3 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg1_4 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  reg1_5 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  reg1_6 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  reg1_7 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  reg2_0 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  reg2_1 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  reg2_2 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  reg2_3 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  reg2_4 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  reg2_5 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  reg2_6 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  reg2_7 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  cnt = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {2{`RANDOM}};
  raddr1 = _RAND_19[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {2{`RANDOM}};
  raddr2 = _RAND_20[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {2{`RANDOM}};
  waddr = _RAND_21[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {9{`RANDOM}};
  shiftReg = _RAND_22[277:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  validReg = _RAND_23[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      state <= 3'h0;
    end else begin
      if (_T_112) begin
        if (io_launch) begin
          state <= 3'h1;
        end
      end else begin
        if (_T_113) begin
          state <= 3'h2;
        end else begin
          if (_T_114) begin
            if (io_mem_rd_valid) begin
              state <= 3'h3;
            end
          end else begin
            if (_T_115) begin
              state <= 3'h4;
            end else begin
              if (_T_116) begin
                if (io_mem_rd_valid) begin
                  state <= 3'h5;
                end
              end else begin
                if (_T_117) begin
                  state <= 3'h6;
                end else begin
                  if (_T_118) begin
                    if (_T_123) begin
                      state <= 3'h0;
                    end else begin
                      state <= 3'h1;
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
    if (reset) begin
      cycles <= 32'h0;
    end else begin
      if (_T_130) begin
        cycles <= 32'h0;
      end else begin
        cycles <= _T_134;
      end
    end
    if (_T_157) begin
      reg1_0 <= {{24'd0}, _T_158};
    end
    if (_T_157) begin
      reg1_1 <= {{24'd0}, _T_163};
    end
    if (_T_157) begin
      reg1_2 <= {{24'd0}, _T_168};
    end
    if (_T_157) begin
      reg1_3 <= {{24'd0}, _T_173};
    end
    if (_T_157) begin
      reg1_4 <= {{24'd0}, _T_178};
    end
    if (_T_157) begin
      reg1_5 <= {{24'd0}, _T_183};
    end
    if (_T_157) begin
      reg1_6 <= {{24'd0}, _T_188};
    end
    if (_T_157) begin
      reg1_7 <= {{24'd0}, _T_193};
    end
    if (_T_199) begin
      reg2_0 <= {{24'd0}, _T_158};
    end
    if (_T_199) begin
      reg2_1 <= {{24'd0}, _T_163};
    end
    if (_T_199) begin
      reg2_2 <= {{24'd0}, _T_168};
    end
    if (_T_199) begin
      reg2_3 <= {{24'd0}, _T_173};
    end
    if (_T_199) begin
      reg2_4 <= {{24'd0}, _T_178};
    end
    if (_T_199) begin
      reg2_5 <= {{24'd0}, _T_183};
    end
    if (_T_199) begin
      reg2_6 <= {{24'd0}, _T_188};
    end
    if (_T_199) begin
      reg2_7 <= {{24'd0}, _T_193};
    end
    if (_T_130) begin
      cnt <= 32'h0;
    end else begin
      if (_T_124) begin
        cnt <= _T_251;
      end
    end
    if (_T_130) begin
      raddr1 <= io_ptrs_0;
    end else begin
      if (_T_124) begin
        raddr1 <= _T_139;
      end
    end
    if (_T_130) begin
      raddr2 <= io_ptrs_1;
    end else begin
      if (_T_124) begin
        raddr2 <= _T_142;
      end
    end
    if (_T_130) begin
      waddr <= io_ptrs_2;
    end
    shiftReg <= _GEN_36 << shift;
    validReg <= dot_io_valid;
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_158); // @[Compute.scala 136:13:@607.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_163); // @[Compute.scala 136:13:@615.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_168); // @[Compute.scala 136:13:@623.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_173); // @[Compute.scala 136:13:@631.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_178); // @[Compute.scala 136:13:@639.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_183); // @[Compute.scala 136:13:@647.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_188); // @[Compute.scala 136:13:@655.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_157 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_193); // @[Compute.scala 136:13:@663.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n",_T_158); // @[Compute.scala 143:13:@675.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n",_T_163); // @[Compute.scala 143:13:@683.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n",_T_168); // @[Compute.scala 143:13:@691.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n",_T_173); // @[Compute.scala 143:13:@699.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n",_T_178); // @[Compute.scala 143:13:@707.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n",_T_183); // @[Compute.scala 143:13:@715.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n",_T_188); // @[Compute.scala 143:13:@723.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_199 & _T_162) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n",_T_193); // @[Compute.scala 143:13:@731.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Accel( // @[:@784.2]
  input         clock, // @[:@785.4]
  input         reset, // @[:@786.4]
  input         io_host_req_valid, // @[:@787.4]
  input         io_host_req_opcode, // @[:@787.4]
  input  [7:0]  io_host_req_addr, // @[:@787.4]
  input  [31:0] io_host_req_value, // @[:@787.4]
  output        io_host_req_deq, // @[:@787.4]
  output        io_host_resp_valid, // @[:@787.4]
  output [31:0] io_host_resp_bits, // @[:@787.4]
  output        io_mem_req_valid, // @[:@787.4]
  output        io_mem_req_opcode, // @[:@787.4]
  output [63:0] io_mem_req_addr, // @[:@787.4]
  output        io_mem_wr_valid, // @[:@787.4]
  output [63:0] io_mem_wr_bits, // @[:@787.4]
  output        io_mem_rd_ready, // @[:@787.4]
  input         io_mem_rd_valid, // @[:@787.4]
  input  [63:0] io_mem_rd_bits // @[:@787.4]
);
  wire  rf_clock; // @[Accel.scala 53:18:@789.4]
  wire  rf_reset; // @[Accel.scala 53:18:@789.4]
  wire  rf_io_launch; // @[Accel.scala 53:18:@789.4]
  wire  rf_io_finish; // @[Accel.scala 53:18:@789.4]
  wire  rf_io_ecnt_0_valid; // @[Accel.scala 53:18:@789.4]
  wire [31:0] rf_io_ecnt_0_bits; // @[Accel.scala 53:18:@789.4]
  wire [31:0] rf_io_vals_0; // @[Accel.scala 53:18:@789.4]
  wire [31:0] rf_io_vals_1; // @[Accel.scala 53:18:@789.4]
  wire [31:0] rf_io_vals_2; // @[Accel.scala 53:18:@789.4]
  wire [63:0] rf_io_ptrs_0; // @[Accel.scala 53:18:@789.4]
  wire [63:0] rf_io_ptrs_1; // @[Accel.scala 53:18:@789.4]
  wire [63:0] rf_io_ptrs_2; // @[Accel.scala 53:18:@789.4]
  wire  rf_io_host_req_valid; // @[Accel.scala 53:18:@789.4]
  wire  rf_io_host_req_opcode; // @[Accel.scala 53:18:@789.4]
  wire [7:0] rf_io_host_req_addr; // @[Accel.scala 53:18:@789.4]
  wire [31:0] rf_io_host_req_value; // @[Accel.scala 53:18:@789.4]
  wire  rf_io_host_req_deq; // @[Accel.scala 53:18:@789.4]
  wire  rf_io_host_resp_valid; // @[Accel.scala 53:18:@789.4]
  wire [31:0] rf_io_host_resp_bits; // @[Accel.scala 53:18:@789.4]
  wire  ce_clock; // @[Accel.scala 54:18:@792.4]
  wire  ce_reset; // @[Accel.scala 54:18:@792.4]
  wire  ce_io_launch; // @[Accel.scala 54:18:@792.4]
  wire  ce_io_finish; // @[Accel.scala 54:18:@792.4]
  wire  ce_io_ecnt_0_valid; // @[Accel.scala 54:18:@792.4]
  wire [31:0] ce_io_ecnt_0_bits; // @[Accel.scala 54:18:@792.4]
  wire [31:0] ce_io_vals_0; // @[Accel.scala 54:18:@792.4]
  wire [31:0] ce_io_vals_1; // @[Accel.scala 54:18:@792.4]
  wire [31:0] ce_io_vals_2; // @[Accel.scala 54:18:@792.4]
  wire [63:0] ce_io_ptrs_0; // @[Accel.scala 54:18:@792.4]
  wire [63:0] ce_io_ptrs_1; // @[Accel.scala 54:18:@792.4]
  wire [63:0] ce_io_ptrs_2; // @[Accel.scala 54:18:@792.4]
  wire  ce_io_mem_req_valid; // @[Accel.scala 54:18:@792.4]
  wire  ce_io_mem_req_opcode; // @[Accel.scala 54:18:@792.4]
  wire [63:0] ce_io_mem_req_addr; // @[Accel.scala 54:18:@792.4]
  wire  ce_io_mem_wr_valid; // @[Accel.scala 54:18:@792.4]
  wire [63:0] ce_io_mem_wr_bits; // @[Accel.scala 54:18:@792.4]
  wire  ce_io_mem_rd_ready; // @[Accel.scala 54:18:@792.4]
  wire  ce_io_mem_rd_valid; // @[Accel.scala 54:18:@792.4]
  wire [63:0] ce_io_mem_rd_bits; // @[Accel.scala 54:18:@792.4]
  RegFile rf ( // @[Accel.scala 53:18:@789.4]
    .clock(rf_clock),
    .reset(rf_reset),
    .io_launch(rf_io_launch),
    .io_finish(rf_io_finish),
    .io_ecnt_0_valid(rf_io_ecnt_0_valid),
    .io_ecnt_0_bits(rf_io_ecnt_0_bits),
    .io_vals_0(rf_io_vals_0),
    .io_vals_1(rf_io_vals_1),
    .io_vals_2(rf_io_vals_2),
    .io_ptrs_0(rf_io_ptrs_0),
    .io_ptrs_1(rf_io_ptrs_1),
    .io_ptrs_2(rf_io_ptrs_2),
    .io_host_req_valid(rf_io_host_req_valid),
    .io_host_req_opcode(rf_io_host_req_opcode),
    .io_host_req_addr(rf_io_host_req_addr),
    .io_host_req_value(rf_io_host_req_value),
    .io_host_req_deq(rf_io_host_req_deq),
    .io_host_resp_valid(rf_io_host_resp_valid),
    .io_host_resp_bits(rf_io_host_resp_bits)
  );
  Compute ce ( // @[Accel.scala 54:18:@792.4]
    .clock(ce_clock),
    .reset(ce_reset),
    .io_launch(ce_io_launch),
    .io_finish(ce_io_finish),
    .io_ecnt_0_valid(ce_io_ecnt_0_valid),
    .io_ecnt_0_bits(ce_io_ecnt_0_bits),
    .io_vals_0(ce_io_vals_0),
    .io_vals_1(ce_io_vals_1),
    .io_vals_2(ce_io_vals_2),
    .io_ptrs_0(ce_io_ptrs_0),
    .io_ptrs_1(ce_io_ptrs_1),
    .io_ptrs_2(ce_io_ptrs_2),
    .io_mem_req_valid(ce_io_mem_req_valid),
    .io_mem_req_opcode(ce_io_mem_req_opcode),
    .io_mem_req_addr(ce_io_mem_req_addr),
    .io_mem_wr_valid(ce_io_mem_wr_valid),
    .io_mem_wr_bits(ce_io_mem_wr_bits),
    .io_mem_rd_ready(ce_io_mem_rd_ready),
    .io_mem_rd_valid(ce_io_mem_rd_valid),
    .io_mem_rd_bits(ce_io_mem_rd_bits)
  );
  assign io_host_req_deq = rf_io_host_req_deq; // @[Accel.scala 55:14:@797.4]
  assign io_host_resp_valid = rf_io_host_resp_valid; // @[Accel.scala 55:14:@796.4]
  assign io_host_resp_bits = rf_io_host_resp_bits; // @[Accel.scala 55:14:@795.4]
  assign io_mem_req_valid = ce_io_mem_req_valid; // @[Accel.scala 56:10:@810.4]
  assign io_mem_req_opcode = ce_io_mem_req_opcode; // @[Accel.scala 56:10:@809.4]
  assign io_mem_req_addr = ce_io_mem_req_addr; // @[Accel.scala 56:10:@807.4]
  assign io_mem_wr_valid = ce_io_mem_wr_valid; // @[Accel.scala 56:10:@806.4]
  assign io_mem_wr_bits = ce_io_mem_wr_bits; // @[Accel.scala 56:10:@805.4]
  assign io_mem_rd_ready = ce_io_mem_rd_ready; // @[Accel.scala 56:10:@804.4]
  assign rf_clock = clock; // @[:@790.4]
  assign rf_reset = reset; // @[:@791.4]
  assign rf_io_finish = ce_io_finish; // @[Accel.scala 58:16:@812.4]
  assign rf_io_ecnt_0_valid = ce_io_ecnt_0_valid; // @[Accel.scala 59:14:@814.4]
  assign rf_io_ecnt_0_bits = ce_io_ecnt_0_bits; // @[Accel.scala 59:14:@813.4]
  assign rf_io_host_req_valid = io_host_req_valid; // @[Accel.scala 55:14:@801.4]
  assign rf_io_host_req_opcode = io_host_req_opcode; // @[Accel.scala 55:14:@800.4]
  assign rf_io_host_req_addr = io_host_req_addr; // @[Accel.scala 55:14:@799.4]
  assign rf_io_host_req_value = io_host_req_value; // @[Accel.scala 55:14:@798.4]
  assign ce_clock = clock; // @[:@793.4]
  assign ce_reset = reset; // @[:@794.4]
  assign ce_io_launch = rf_io_launch; // @[Accel.scala 57:16:@811.4]
  assign ce_io_vals_0 = rf_io_vals_0; // @[Accel.scala 60:14:@815.4]
  assign ce_io_vals_1 = rf_io_vals_1; // @[Accel.scala 60:14:@816.4]
  assign ce_io_vals_2 = rf_io_vals_2; // @[Accel.scala 60:14:@817.4]
  assign ce_io_ptrs_0 = rf_io_ptrs_0; // @[Accel.scala 61:14:@819.4]
  assign ce_io_ptrs_1 = rf_io_ptrs_1; // @[Accel.scala 61:14:@820.4]
  assign ce_io_ptrs_2 = rf_io_ptrs_2; // @[Accel.scala 61:14:@821.4]
  assign ce_io_mem_rd_valid = io_mem_rd_valid; // @[Accel.scala 56:10:@803.4]
  assign ce_io_mem_rd_bits = io_mem_rd_bits; // @[Accel.scala 56:10:@802.4]
endmodule
module TestAccel( // @[:@823.2]
  input   clock, // @[:@824.4]
  input   reset, // @[:@825.4]
  input   sim_clock, // @[:@826.4]
  output  sim_wait // @[:@827.4]
);
  wire  sim_shell_clock; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_reset; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_host_req_valid; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_host_req_opcode; // @[TestAccel.scala 59:25:@829.4]
  wire [7:0] sim_shell_host_req_addr; // @[TestAccel.scala 59:25:@829.4]
  wire [31:0] sim_shell_host_req_value; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_host_req_deq; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_host_resp_valid; // @[TestAccel.scala 59:25:@829.4]
  wire [31:0] sim_shell_host_resp_bits; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_mem_req_valid; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_mem_req_opcode; // @[TestAccel.scala 59:25:@829.4]
  wire [63:0] sim_shell_mem_req_addr; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_mem_wr_valid; // @[TestAccel.scala 59:25:@829.4]
  wire [63:0] sim_shell_mem_wr_bits; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_mem_rd_ready; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_mem_rd_valid; // @[TestAccel.scala 59:25:@829.4]
  wire [63:0] sim_shell_mem_rd_bits; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_sim_clock; // @[TestAccel.scala 59:25:@829.4]
  wire  sim_shell_sim_wait; // @[TestAccel.scala 59:25:@829.4]
  wire  vta_accel_clock; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_reset; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_io_host_req_valid; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_io_host_req_opcode; // @[TestAccel.scala 60:25:@832.4]
  wire [7:0] vta_accel_io_host_req_addr; // @[TestAccel.scala 60:25:@832.4]
  wire [31:0] vta_accel_io_host_req_value; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_io_host_req_deq; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_io_host_resp_valid; // @[TestAccel.scala 60:25:@832.4]
  wire [31:0] vta_accel_io_host_resp_bits; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_io_mem_req_valid; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_io_mem_req_opcode; // @[TestAccel.scala 60:25:@832.4]
  wire [63:0] vta_accel_io_mem_req_addr; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_io_mem_wr_valid; // @[TestAccel.scala 60:25:@832.4]
  wire [63:0] vta_accel_io_mem_wr_bits; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_io_mem_rd_ready; // @[TestAccel.scala 60:25:@832.4]
  wire  vta_accel_io_mem_rd_valid; // @[TestAccel.scala 60:25:@832.4]
  wire [63:0] vta_accel_io_mem_rd_bits; // @[TestAccel.scala 60:25:@832.4]
  VTASimShell sim_shell ( // @[TestAccel.scala 59:25:@829.4]
    .clock(sim_shell_clock),
    .reset(sim_shell_reset),
    .host_req_valid(sim_shell_host_req_valid),
    .host_req_opcode(sim_shell_host_req_opcode),
    .host_req_addr(sim_shell_host_req_addr),
    .host_req_value(sim_shell_host_req_value),
    .host_req_deq(sim_shell_host_req_deq),
    .host_resp_valid(sim_shell_host_resp_valid),
    .host_resp_bits(sim_shell_host_resp_bits),
    .mem_req_valid(sim_shell_mem_req_valid),
    .mem_req_opcode(sim_shell_mem_req_opcode),
    .mem_req_addr(sim_shell_mem_req_addr),
    .mem_wr_valid(sim_shell_mem_wr_valid),
    .mem_wr_bits(sim_shell_mem_wr_bits),
    .mem_rd_ready(sim_shell_mem_rd_ready),
    .mem_rd_valid(sim_shell_mem_rd_valid),
    .mem_rd_bits(sim_shell_mem_rd_bits),
    .sim_clock(sim_shell_sim_clock),
    .sim_wait(sim_shell_sim_wait)
  );
  Accel vta_accel ( // @[TestAccel.scala 60:25:@832.4]
    .clock(vta_accel_clock),
    .reset(vta_accel_reset),
    .io_host_req_valid(vta_accel_io_host_req_valid),
    .io_host_req_opcode(vta_accel_io_host_req_opcode),
    .io_host_req_addr(vta_accel_io_host_req_addr),
    .io_host_req_value(vta_accel_io_host_req_value),
    .io_host_req_deq(vta_accel_io_host_req_deq),
    .io_host_resp_valid(vta_accel_io_host_resp_valid),
    .io_host_resp_bits(vta_accel_io_host_resp_bits),
    .io_mem_req_valid(vta_accel_io_mem_req_valid),
    .io_mem_req_opcode(vta_accel_io_mem_req_opcode),
    .io_mem_req_addr(vta_accel_io_mem_req_addr),
    .io_mem_wr_valid(vta_accel_io_mem_wr_valid),
    .io_mem_wr_bits(vta_accel_io_mem_wr_bits),
    .io_mem_rd_ready(vta_accel_io_mem_rd_ready),
    .io_mem_rd_valid(vta_accel_io_mem_rd_valid),
    .io_mem_rd_bits(vta_accel_io_mem_rd_bits)
  );
  assign sim_wait = sim_shell_sim_wait; // @[TestAccel.scala 62:12:@836.4]
  assign sim_shell_clock = clock; // @[:@830.4]
  assign sim_shell_reset = reset; // @[:@831.4]
  assign sim_shell_host_req_deq = vta_accel_io_host_req_deq; // @[TestAccel.scala 64:21:@848.4]
  assign sim_shell_host_resp_valid = vta_accel_io_host_resp_valid; // @[TestAccel.scala 64:21:@847.4]
  assign sim_shell_host_resp_bits = vta_accel_io_host_resp_bits; // @[TestAccel.scala 64:21:@846.4]
  assign sim_shell_mem_req_valid = vta_accel_io_mem_req_valid; // @[TestAccel.scala 63:17:@845.4]
  assign sim_shell_mem_req_opcode = vta_accel_io_mem_req_opcode; // @[TestAccel.scala 63:17:@844.4]
  assign sim_shell_mem_req_addr = vta_accel_io_mem_req_addr; // @[TestAccel.scala 63:17:@842.4]
  assign sim_shell_mem_wr_valid = vta_accel_io_mem_wr_valid; // @[TestAccel.scala 63:17:@841.4]
  assign sim_shell_mem_wr_bits = vta_accel_io_mem_wr_bits; // @[TestAccel.scala 63:17:@840.4]
  assign sim_shell_mem_rd_ready = vta_accel_io_mem_rd_ready; // @[TestAccel.scala 63:17:@839.4]
  assign sim_shell_sim_clock = sim_clock; // @[TestAccel.scala 61:23:@835.4]
  assign vta_accel_clock = clock; // @[:@833.4]
  assign vta_accel_reset = reset; // @[:@834.4]
  assign vta_accel_io_host_req_valid = sim_shell_host_req_valid; // @[TestAccel.scala 64:21:@852.4]
  assign vta_accel_io_host_req_opcode = sim_shell_host_req_opcode; // @[TestAccel.scala 64:21:@851.4]
  assign vta_accel_io_host_req_addr = sim_shell_host_req_addr; // @[TestAccel.scala 64:21:@850.4]
  assign vta_accel_io_host_req_value = sim_shell_host_req_value; // @[TestAccel.scala 64:21:@849.4]
  assign vta_accel_io_mem_rd_valid = sim_shell_mem_rd_valid; // @[TestAccel.scala 63:17:@838.4]
  assign vta_accel_io_mem_rd_bits = sim_shell_mem_rd_bits; // @[TestAccel.scala 63:17:@837.4]
endmodule
