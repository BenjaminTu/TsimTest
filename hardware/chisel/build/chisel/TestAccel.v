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
  output [31:0] io_vals_3, // @[:@74.4]
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
  assign io_vals_3 = reg_5; // @[RegFile.scala 121:16:@275.4]
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
module Accumulator( // @[:@283.2]
  input         clock, // @[:@284.4]
  input         reset, // @[:@285.4]
  input         io_rst, // @[:@286.4]
  input         io_valid, // @[:@286.4]
  input  [62:0] io_in, // @[:@286.4]
  output [63:0] io_sum // @[:@286.4]
);
  reg [63:0] reg$; // @[Compute.scala 186:20:@288.4]
  reg [63:0] _RAND_0;
  wire [63:0] _GEN_4; // @[Compute.scala 192:16:@296.8]
  wire [64:0] _T_21; // @[Compute.scala 192:16:@296.8]
  wire  _T_26; // @[Compute.scala 194:11:@301.8]
  wire [64:0] _GEN_0; // @[Compute.scala 191:26:@295.6]
  wire [64:0] _GEN_2; // @[Compute.scala 188:17:@290.4]
  wire  _GEN_6; // @[Compute.scala 194:11:@303.10]
  wire  _GEN_7; // @[Compute.scala 194:11:@303.10]
  assign _GEN_4 = {{1'd0}, io_in}; // @[Compute.scala 192:16:@296.8]
  assign _T_21 = reg$ + _GEN_4; // @[Compute.scala 192:16:@296.8]
  assign _T_26 = reset == 1'h0; // @[Compute.scala 194:11:@301.8]
  assign _GEN_0 = io_valid ? _T_21 : {{1'd0}, reg$}; // @[Compute.scala 191:26:@295.6]
  assign _GEN_2 = io_rst ? 65'h0 : _GEN_0; // @[Compute.scala 188:17:@290.4]
  assign io_sum = reg$; // @[Compute.scala 201:10:@307.4]
  assign _GEN_6 = io_rst == 1'h0; // @[Compute.scala 194:11:@303.10]
  assign _GEN_7 = _GEN_6 & io_valid; // @[Compute.scala 194:11:@303.10]
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
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg$ <= 64'h0;
    end else begin
      reg$ <= _GEN_2[63:0];
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_GEN_7 & _T_26) begin
          $fwrite(32'h80000002,"slice sum: %d \n",_T_21); // @[Compute.scala 194:11:@303.10]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Compute( // @[:@335.2]
  input         clock, // @[:@336.4]
  input         reset, // @[:@337.4]
  input         io_launch, // @[:@338.4]
  output        io_finish, // @[:@338.4]
  output        io_ecnt_0_valid, // @[:@338.4]
  output [31:0] io_ecnt_0_bits, // @[:@338.4]
  input  [31:0] io_vals_0, // @[:@338.4]
  input  [31:0] io_vals_1, // @[:@338.4]
  input  [31:0] io_vals_2, // @[:@338.4]
  input  [31:0] io_vals_3, // @[:@338.4]
  input  [63:0] io_ptrs_0, // @[:@338.4]
  input  [63:0] io_ptrs_1, // @[:@338.4]
  input  [63:0] io_ptrs_2, // @[:@338.4]
  output        io_mem_req_valid, // @[:@338.4]
  output        io_mem_req_opcode, // @[:@338.4]
  output [63:0] io_mem_req_addr, // @[:@338.4]
  output        io_mem_wr_valid, // @[:@338.4]
  output [63:0] io_mem_wr_bits, // @[:@338.4]
  output        io_mem_rd_ready, // @[:@338.4]
  input         io_mem_rd_valid, // @[:@338.4]
  input  [63:0] io_mem_rd_bits // @[:@338.4]
);
  wire  sliceAccum_clock; // @[Compute.scala 146:26:@474.4]
  wire  sliceAccum_reset; // @[Compute.scala 146:26:@474.4]
  wire  sliceAccum_io_rst; // @[Compute.scala 146:26:@474.4]
  wire  sliceAccum_io_valid; // @[Compute.scala 146:26:@474.4]
  wire [62:0] sliceAccum_io_in; // @[Compute.scala 146:26:@474.4]
  wire [63:0] sliceAccum_io_sum; // @[Compute.scala 146:26:@474.4]
  wire  overallAccum_clock; // @[Compute.scala 147:28:@477.4]
  wire  overallAccum_reset; // @[Compute.scala 147:28:@477.4]
  wire  overallAccum_io_rst; // @[Compute.scala 147:28:@477.4]
  wire  overallAccum_io_valid; // @[Compute.scala 147:28:@477.4]
  wire [62:0] overallAccum_io_in; // @[Compute.scala 147:28:@477.4]
  wire [63:0] overallAccum_io_sum; // @[Compute.scala 147:28:@477.4]
  reg [2:0] state; // @[Compute.scala 48:22:@340.4]
  reg [31:0] _RAND_0;
  reg [31:0] cycles; // @[Compute.scala 53:23:@341.4]
  reg [31:0] _RAND_1;
  reg [63:0] reg1; // @[Compute.scala 54:17:@342.4]
  reg [63:0] _RAND_2;
  reg [63:0] reg2; // @[Compute.scala 55:17:@343.4]
  reg [63:0] _RAND_3;
  reg [31:0] cnt; // @[Compute.scala 56:16:@344.4]
  reg [31:0] _RAND_4;
  reg [63:0] raddr1; // @[Compute.scala 57:19:@345.4]
  reg [63:0] _RAND_5;
  reg [63:0] raddr2; // @[Compute.scala 58:19:@346.4]
  reg [63:0] _RAND_6;
  reg [63:0] waddr; // @[Compute.scala 59:18:@347.4]
  reg [63:0] _RAND_7;
  wire  _T_88; // @[Conditional.scala 37:30:@348.4]
  wire [2:0] _GEN_0; // @[Compute.scala 69:24:@350.6]
  wire  _T_89; // @[Conditional.scala 37:30:@355.6]
  wire  _T_90; // @[Conditional.scala 37:30:@360.8]
  wire [2:0] _GEN_1; // @[Compute.scala 78:30:@362.10]
  wire  _T_91; // @[Conditional.scala 37:30:@367.10]
  wire  _T_92; // @[Conditional.scala 37:30:@372.12]
  wire [2:0] _GEN_2; // @[Compute.scala 86:30:@374.14]
  wire  _T_93; // @[Conditional.scala 37:30:@379.14]
  wire  _T_94; // @[Conditional.scala 37:30:@384.16]
  wire [32:0] _T_96; // @[Compute.scala 95:29:@386.18]
  wire [32:0] _T_97; // @[Compute.scala 95:29:@387.18]
  wire [31:0] _T_98; // @[Compute.scala 95:29:@388.18]
  wire  _T_99; // @[Compute.scala 95:17:@389.18]
  wire [2:0] _GEN_3; // @[Compute.scala 95:37:@390.18]
  wire [2:0] _GEN_4; // @[Conditional.scala 39:67:@385.16]
  wire [2:0] _GEN_5; // @[Conditional.scala 39:67:@380.14]
  wire [2:0] _GEN_6; // @[Conditional.scala 39:67:@373.12]
  wire [2:0] _GEN_7; // @[Conditional.scala 39:67:@368.10]
  wire [2:0] _GEN_8; // @[Conditional.scala 39:67:@361.8]
  wire [2:0] _GEN_9; // @[Conditional.scala 39:67:@356.6]
  wire [2:0] _GEN_10; // @[Conditional.scala 40:58:@349.4]
  wire  _T_100; // @[Compute.scala 103:20:@397.4]
  wire  last; // @[Compute.scala 103:35:@402.4]
  wire  _T_106; // @[Compute.scala 106:15:@403.4]
  wire [32:0] _T_109; // @[Compute.scala 109:22:@408.6]
  wire [31:0] _T_110; // @[Compute.scala 109:22:@409.6]
  wire [31:0] _GEN_11; // @[Compute.scala 106:26:@404.4]
  wire [64:0] _T_114; // @[Compute.scala 121:22:@423.8]
  wire [63:0] _T_115; // @[Compute.scala 121:22:@424.8]
  wire [64:0] _T_117; // @[Compute.scala 122:22:@426.8]
  wire [63:0] _T_118; // @[Compute.scala 122:22:@427.8]
  wire [63:0] _GEN_12; // @[Compute.scala 120:38:@422.6]
  wire [63:0] _GEN_13; // @[Compute.scala 120:38:@422.6]
  wire  _T_119; // @[Compute.scala 127:29:@430.4]
  wire  _T_120; // @[Compute.scala 127:51:@431.4]
  wire  _T_121; // @[Compute.scala 127:43:@432.4]
  wire  _T_122; // @[Compute.scala 127:73:@433.4]
  wire [63:0] _T_130; // @[Compute.scala 130:72:@443.4]
  wire  _T_132; // @[Compute.scala 133:15:@446.4]
  wire  _T_133; // @[Compute.scala 133:30:@447.4]
  wire [7:0] _T_134; // @[Compute.scala 134:27:@449.6]
  wire  _T_138; // @[Compute.scala 135:11:@453.6]
  wire  _T_139; // @[Compute.scala 138:15:@458.4]
  wire  _T_140; // @[Compute.scala 138:30:@459.4]
  wire [127:0] _T_150; // @[Compute.scala 155:28:@482.4]
  wire [7:0] _T_151; // @[Compute.scala 159:51:@487.4]
  wire [318:0] _GEN_21; // @[Compute.scala 159:43:@488.4]
  wire [318:0] _T_152; // @[Compute.scala 159:43:@488.4]
  wire [32:0] _T_158; // @[Compute.scala 169:16:@500.8]
  wire [31:0] _T_159; // @[Compute.scala 169:16:@501.8]
  wire [31:0] _GEN_19; // @[Compute.scala 168:38:@499.6]
  Accumulator sliceAccum ( // @[Compute.scala 146:26:@474.4]
    .clock(sliceAccum_clock),
    .reset(sliceAccum_reset),
    .io_rst(sliceAccum_io_rst),
    .io_valid(sliceAccum_io_valid),
    .io_in(sliceAccum_io_in),
    .io_sum(sliceAccum_io_sum)
  );
  Accumulator overallAccum ( // @[Compute.scala 147:28:@477.4]
    .clock(overallAccum_clock),
    .reset(overallAccum_reset),
    .io_rst(overallAccum_io_rst),
    .io_valid(overallAccum_io_valid),
    .io_in(overallAccum_io_in),
    .io_sum(overallAccum_io_sum)
  );
  assign _T_88 = 3'h0 == state; // @[Conditional.scala 37:30:@348.4]
  assign _GEN_0 = io_launch ? 3'h1 : state; // @[Compute.scala 69:24:@350.6]
  assign _T_89 = 3'h1 == state; // @[Conditional.scala 37:30:@355.6]
  assign _T_90 = 3'h2 == state; // @[Conditional.scala 37:30:@360.8]
  assign _GEN_1 = io_mem_rd_valid ? 3'h3 : state; // @[Compute.scala 78:30:@362.10]
  assign _T_91 = 3'h3 == state; // @[Conditional.scala 37:30:@367.10]
  assign _T_92 = 3'h4 == state; // @[Conditional.scala 37:30:@372.12]
  assign _GEN_2 = io_mem_rd_valid ? 3'h5 : state; // @[Compute.scala 86:30:@374.14]
  assign _T_93 = 3'h5 == state; // @[Conditional.scala 37:30:@379.14]
  assign _T_94 = 3'h6 == state; // @[Conditional.scala 37:30:@384.16]
  assign _T_96 = io_vals_1 - 32'h1; // @[Compute.scala 95:29:@386.18]
  assign _T_97 = $unsigned(_T_96); // @[Compute.scala 95:29:@387.18]
  assign _T_98 = _T_97[31:0]; // @[Compute.scala 95:29:@388.18]
  assign _T_99 = cnt == _T_98; // @[Compute.scala 95:17:@389.18]
  assign _GEN_3 = _T_99 ? 3'h0 : 3'h1; // @[Compute.scala 95:37:@390.18]
  assign _GEN_4 = _T_94 ? _GEN_3 : state; // @[Conditional.scala 39:67:@385.16]
  assign _GEN_5 = _T_93 ? 3'h6 : _GEN_4; // @[Conditional.scala 39:67:@380.14]
  assign _GEN_6 = _T_92 ? _GEN_2 : _GEN_5; // @[Conditional.scala 39:67:@373.12]
  assign _GEN_7 = _T_91 ? 3'h4 : _GEN_6; // @[Conditional.scala 39:67:@368.10]
  assign _GEN_8 = _T_90 ? _GEN_1 : _GEN_7; // @[Conditional.scala 39:67:@361.8]
  assign _GEN_9 = _T_89 ? 3'h2 : _GEN_8; // @[Conditional.scala 39:67:@356.6]
  assign _GEN_10 = _T_88 ? _GEN_0 : _GEN_9; // @[Conditional.scala 40:58:@349.4]
  assign _T_100 = state == 3'h6; // @[Compute.scala 103:20:@397.4]
  assign last = _T_100 & _T_99; // @[Compute.scala 103:35:@402.4]
  assign _T_106 = state == 3'h0; // @[Compute.scala 106:15:@403.4]
  assign _T_109 = cycles + 32'h1; // @[Compute.scala 109:22:@408.6]
  assign _T_110 = cycles + 32'h1; // @[Compute.scala 109:22:@409.6]
  assign _GEN_11 = _T_106 ? 32'h0 : _T_110; // @[Compute.scala 106:26:@404.4]
  assign _T_114 = raddr1 + 64'h1; // @[Compute.scala 121:22:@423.8]
  assign _T_115 = raddr1 + 64'h1; // @[Compute.scala 121:22:@424.8]
  assign _T_117 = raddr2 + 64'h1; // @[Compute.scala 122:22:@426.8]
  assign _T_118 = raddr2 + 64'h1; // @[Compute.scala 122:22:@427.8]
  assign _GEN_12 = _T_100 ? _T_115 : raddr1; // @[Compute.scala 120:38:@422.6]
  assign _GEN_13 = _T_100 ? _T_118 : raddr2; // @[Compute.scala 120:38:@422.6]
  assign _T_119 = state == 3'h1; // @[Compute.scala 127:29:@430.4]
  assign _T_120 = state == 3'h3; // @[Compute.scala 127:51:@431.4]
  assign _T_121 = _T_119 | _T_120; // @[Compute.scala 127:43:@432.4]
  assign _T_122 = state == 3'h5; // @[Compute.scala 127:73:@433.4]
  assign _T_130 = _T_119 ? raddr1 : raddr2; // @[Compute.scala 130:72:@443.4]
  assign _T_132 = state == 3'h2; // @[Compute.scala 133:15:@446.4]
  assign _T_133 = _T_132 & io_mem_rd_valid; // @[Compute.scala 133:30:@447.4]
  assign _T_134 = io_mem_rd_bits[7:0]; // @[Compute.scala 134:27:@449.6]
  assign _T_138 = reset == 1'h0; // @[Compute.scala 135:11:@453.6]
  assign _T_139 = state == 3'h4; // @[Compute.scala 138:15:@458.4]
  assign _T_140 = _T_139 & io_mem_rd_valid; // @[Compute.scala 138:30:@459.4]
  assign _T_150 = reg1 * reg2; // @[Compute.scala 155:28:@482.4]
  assign _T_151 = io_vals_0[7:0]; // @[Compute.scala 159:51:@487.4]
  assign _GEN_21 = {{255'd0}, sliceAccum_io_sum}; // @[Compute.scala 159:43:@488.4]
  assign _T_152 = _GEN_21 << _T_151; // @[Compute.scala 159:43:@488.4]
  assign _T_158 = cnt + 32'h1; // @[Compute.scala 169:16:@500.8]
  assign _T_159 = cnt + 32'h1; // @[Compute.scala 169:16:@501.8]
  assign _GEN_19 = _T_100 ? _T_159 : cnt; // @[Compute.scala 168:38:@499.6]
  assign io_finish = io_mem_wr_valid & last; // @[Compute.scala 174:13:@505.4]
  assign io_ecnt_0_valid = _T_100 & _T_99; // @[Compute.scala 112:20:@412.4]
  assign io_ecnt_0_bits = cycles; // @[Compute.scala 113:19:@413.4]
  assign io_mem_req_valid = _T_121 | _T_122; // @[Compute.scala 127:20:@435.4]
  assign io_mem_req_opcode = state == 3'h5; // @[Compute.scala 128:21:@437.4]
  assign io_mem_req_addr = _T_121 ? _T_130 : waddr; // @[Compute.scala 130:19:@445.4]
  assign io_mem_wr_valid = state == 3'h6; // @[Compute.scala 162:19:@491.4]
  assign io_mem_wr_bits = overallAccum_io_sum; // @[Compute.scala 163:18:@492.4]
  assign io_mem_rd_ready = _T_132 | _T_139; // @[Compute.scala 143:19:@473.4]
  assign sliceAccum_clock = clock; // @[:@475.4]
  assign sliceAccum_reset = reset; // @[:@476.4]
  assign sliceAccum_io_rst = io_vals_3[0]; // @[Compute.scala 156:21:@484.4]
  assign sliceAccum_io_valid = state == 3'h5; // @[Compute.scala 154:23:@481.4]
  assign sliceAccum_io_in = _T_150[62:0]; // @[Compute.scala 155:20:@483.4]
  assign overallAccum_clock = clock; // @[:@478.4]
  assign overallAccum_reset = reset; // @[:@479.4]
  assign overallAccum_io_rst = io_vals_2[0]; // @[Compute.scala 157:23:@485.4]
  assign overallAccum_io_valid = _T_100 & _T_99; // @[Compute.scala 158:25:@486.4]
  assign overallAccum_io_in = _T_152[62:0]; // @[Compute.scala 159:22:@489.4]
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
  _RAND_2 = {2{`RANDOM}};
  reg1 = _RAND_2[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {2{`RANDOM}};
  reg2 = _RAND_3[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  cnt = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {2{`RANDOM}};
  raddr1 = _RAND_5[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {2{`RANDOM}};
  raddr2 = _RAND_6[63:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {2{`RANDOM}};
  waddr = _RAND_7[63:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      state <= 3'h0;
    end else begin
      if (_T_88) begin
        if (io_launch) begin
          state <= 3'h1;
        end
      end else begin
        if (_T_89) begin
          state <= 3'h2;
        end else begin
          if (_T_90) begin
            if (io_mem_rd_valid) begin
              state <= 3'h3;
            end
          end else begin
            if (_T_91) begin
              state <= 3'h4;
            end else begin
              if (_T_92) begin
                if (io_mem_rd_valid) begin
                  state <= 3'h5;
                end
              end else begin
                if (_T_93) begin
                  state <= 3'h6;
                end else begin
                  if (_T_94) begin
                    if (_T_99) begin
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
      if (_T_106) begin
        cycles <= 32'h0;
      end else begin
        cycles <= _T_110;
      end
    end
    if (_T_133) begin
      reg1 <= {{56'd0}, _T_134};
    end
    if (_T_140) begin
      reg2 <= {{56'd0}, _T_134};
    end
    if (_T_106) begin
      cnt <= 32'h0;
    end else begin
      if (_T_100) begin
        cnt <= _T_159;
      end
    end
    if (_T_106) begin
      raddr1 <= io_ptrs_0;
    end else begin
      if (_T_100) begin
        raddr1 <= _T_115;
      end
    end
    if (_T_106) begin
      raddr2 <= io_ptrs_1;
    end else begin
      if (_T_100) begin
        raddr2 <= _T_118;
      end
    end
    if (_T_106) begin
      waddr <= io_ptrs_2;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_133 & _T_138) begin
          $fwrite(32'h80000002,"slice inputs1: %d \n",_T_134); // @[Compute.scala 135:11:@455.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_140 & _T_138) begin
          $fwrite(32'h80000002,"slice inputs2: %d\n\n",_T_134); // @[Compute.scala 140:11:@467.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Accel( // @[:@507.2]
  input         clock, // @[:@508.4]
  input         reset, // @[:@509.4]
  input         io_host_req_valid, // @[:@510.4]
  input         io_host_req_opcode, // @[:@510.4]
  input  [7:0]  io_host_req_addr, // @[:@510.4]
  input  [31:0] io_host_req_value, // @[:@510.4]
  output        io_host_req_deq, // @[:@510.4]
  output        io_host_resp_valid, // @[:@510.4]
  output [31:0] io_host_resp_bits, // @[:@510.4]
  output        io_mem_req_valid, // @[:@510.4]
  output        io_mem_req_opcode, // @[:@510.4]
  output [63:0] io_mem_req_addr, // @[:@510.4]
  output        io_mem_wr_valid, // @[:@510.4]
  output [63:0] io_mem_wr_bits, // @[:@510.4]
  output        io_mem_rd_ready, // @[:@510.4]
  input         io_mem_rd_valid, // @[:@510.4]
  input  [63:0] io_mem_rd_bits // @[:@510.4]
);
  wire  rf_clock; // @[Accel.scala 53:18:@512.4]
  wire  rf_reset; // @[Accel.scala 53:18:@512.4]
  wire  rf_io_launch; // @[Accel.scala 53:18:@512.4]
  wire  rf_io_finish; // @[Accel.scala 53:18:@512.4]
  wire  rf_io_ecnt_0_valid; // @[Accel.scala 53:18:@512.4]
  wire [31:0] rf_io_ecnt_0_bits; // @[Accel.scala 53:18:@512.4]
  wire [31:0] rf_io_vals_0; // @[Accel.scala 53:18:@512.4]
  wire [31:0] rf_io_vals_1; // @[Accel.scala 53:18:@512.4]
  wire [31:0] rf_io_vals_2; // @[Accel.scala 53:18:@512.4]
  wire [31:0] rf_io_vals_3; // @[Accel.scala 53:18:@512.4]
  wire [63:0] rf_io_ptrs_0; // @[Accel.scala 53:18:@512.4]
  wire [63:0] rf_io_ptrs_1; // @[Accel.scala 53:18:@512.4]
  wire [63:0] rf_io_ptrs_2; // @[Accel.scala 53:18:@512.4]
  wire  rf_io_host_req_valid; // @[Accel.scala 53:18:@512.4]
  wire  rf_io_host_req_opcode; // @[Accel.scala 53:18:@512.4]
  wire [7:0] rf_io_host_req_addr; // @[Accel.scala 53:18:@512.4]
  wire [31:0] rf_io_host_req_value; // @[Accel.scala 53:18:@512.4]
  wire  rf_io_host_req_deq; // @[Accel.scala 53:18:@512.4]
  wire  rf_io_host_resp_valid; // @[Accel.scala 53:18:@512.4]
  wire [31:0] rf_io_host_resp_bits; // @[Accel.scala 53:18:@512.4]
  wire  ce_clock; // @[Accel.scala 54:18:@515.4]
  wire  ce_reset; // @[Accel.scala 54:18:@515.4]
  wire  ce_io_launch; // @[Accel.scala 54:18:@515.4]
  wire  ce_io_finish; // @[Accel.scala 54:18:@515.4]
  wire  ce_io_ecnt_0_valid; // @[Accel.scala 54:18:@515.4]
  wire [31:0] ce_io_ecnt_0_bits; // @[Accel.scala 54:18:@515.4]
  wire [31:0] ce_io_vals_0; // @[Accel.scala 54:18:@515.4]
  wire [31:0] ce_io_vals_1; // @[Accel.scala 54:18:@515.4]
  wire [31:0] ce_io_vals_2; // @[Accel.scala 54:18:@515.4]
  wire [31:0] ce_io_vals_3; // @[Accel.scala 54:18:@515.4]
  wire [63:0] ce_io_ptrs_0; // @[Accel.scala 54:18:@515.4]
  wire [63:0] ce_io_ptrs_1; // @[Accel.scala 54:18:@515.4]
  wire [63:0] ce_io_ptrs_2; // @[Accel.scala 54:18:@515.4]
  wire  ce_io_mem_req_valid; // @[Accel.scala 54:18:@515.4]
  wire  ce_io_mem_req_opcode; // @[Accel.scala 54:18:@515.4]
  wire [63:0] ce_io_mem_req_addr; // @[Accel.scala 54:18:@515.4]
  wire  ce_io_mem_wr_valid; // @[Accel.scala 54:18:@515.4]
  wire [63:0] ce_io_mem_wr_bits; // @[Accel.scala 54:18:@515.4]
  wire  ce_io_mem_rd_ready; // @[Accel.scala 54:18:@515.4]
  wire  ce_io_mem_rd_valid; // @[Accel.scala 54:18:@515.4]
  wire [63:0] ce_io_mem_rd_bits; // @[Accel.scala 54:18:@515.4]
  RegFile rf ( // @[Accel.scala 53:18:@512.4]
    .clock(rf_clock),
    .reset(rf_reset),
    .io_launch(rf_io_launch),
    .io_finish(rf_io_finish),
    .io_ecnt_0_valid(rf_io_ecnt_0_valid),
    .io_ecnt_0_bits(rf_io_ecnt_0_bits),
    .io_vals_0(rf_io_vals_0),
    .io_vals_1(rf_io_vals_1),
    .io_vals_2(rf_io_vals_2),
    .io_vals_3(rf_io_vals_3),
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
  Compute ce ( // @[Accel.scala 54:18:@515.4]
    .clock(ce_clock),
    .reset(ce_reset),
    .io_launch(ce_io_launch),
    .io_finish(ce_io_finish),
    .io_ecnt_0_valid(ce_io_ecnt_0_valid),
    .io_ecnt_0_bits(ce_io_ecnt_0_bits),
    .io_vals_0(ce_io_vals_0),
    .io_vals_1(ce_io_vals_1),
    .io_vals_2(ce_io_vals_2),
    .io_vals_3(ce_io_vals_3),
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
  assign io_host_req_deq = rf_io_host_req_deq; // @[Accel.scala 55:14:@520.4]
  assign io_host_resp_valid = rf_io_host_resp_valid; // @[Accel.scala 55:14:@519.4]
  assign io_host_resp_bits = rf_io_host_resp_bits; // @[Accel.scala 55:14:@518.4]
  assign io_mem_req_valid = ce_io_mem_req_valid; // @[Accel.scala 56:10:@533.4]
  assign io_mem_req_opcode = ce_io_mem_req_opcode; // @[Accel.scala 56:10:@532.4]
  assign io_mem_req_addr = ce_io_mem_req_addr; // @[Accel.scala 56:10:@530.4]
  assign io_mem_wr_valid = ce_io_mem_wr_valid; // @[Accel.scala 56:10:@529.4]
  assign io_mem_wr_bits = ce_io_mem_wr_bits; // @[Accel.scala 56:10:@528.4]
  assign io_mem_rd_ready = ce_io_mem_rd_ready; // @[Accel.scala 56:10:@527.4]
  assign rf_clock = clock; // @[:@513.4]
  assign rf_reset = reset; // @[:@514.4]
  assign rf_io_finish = ce_io_finish; // @[Accel.scala 58:16:@535.4]
  assign rf_io_ecnt_0_valid = ce_io_ecnt_0_valid; // @[Accel.scala 59:14:@537.4]
  assign rf_io_ecnt_0_bits = ce_io_ecnt_0_bits; // @[Accel.scala 59:14:@536.4]
  assign rf_io_host_req_valid = io_host_req_valid; // @[Accel.scala 55:14:@524.4]
  assign rf_io_host_req_opcode = io_host_req_opcode; // @[Accel.scala 55:14:@523.4]
  assign rf_io_host_req_addr = io_host_req_addr; // @[Accel.scala 55:14:@522.4]
  assign rf_io_host_req_value = io_host_req_value; // @[Accel.scala 55:14:@521.4]
  assign ce_clock = clock; // @[:@516.4]
  assign ce_reset = reset; // @[:@517.4]
  assign ce_io_launch = rf_io_launch; // @[Accel.scala 57:16:@534.4]
  assign ce_io_vals_0 = rf_io_vals_0; // @[Accel.scala 60:14:@538.4]
  assign ce_io_vals_1 = rf_io_vals_1; // @[Accel.scala 60:14:@539.4]
  assign ce_io_vals_2 = rf_io_vals_2; // @[Accel.scala 60:14:@540.4]
  assign ce_io_vals_3 = rf_io_vals_3; // @[Accel.scala 60:14:@541.4]
  assign ce_io_ptrs_0 = rf_io_ptrs_0; // @[Accel.scala 61:14:@542.4]
  assign ce_io_ptrs_1 = rf_io_ptrs_1; // @[Accel.scala 61:14:@543.4]
  assign ce_io_ptrs_2 = rf_io_ptrs_2; // @[Accel.scala 61:14:@544.4]
  assign ce_io_mem_rd_valid = io_mem_rd_valid; // @[Accel.scala 56:10:@526.4]
  assign ce_io_mem_rd_bits = io_mem_rd_bits; // @[Accel.scala 56:10:@525.4]
endmodule
module TestAccel( // @[:@546.2]
  input   clock, // @[:@547.4]
  input   reset, // @[:@548.4]
  input   sim_clock, // @[:@549.4]
  output  sim_wait // @[:@550.4]
);
  wire  sim_shell_clock; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_reset; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_host_req_valid; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_host_req_opcode; // @[TestAccel.scala 59:25:@552.4]
  wire [7:0] sim_shell_host_req_addr; // @[TestAccel.scala 59:25:@552.4]
  wire [31:0] sim_shell_host_req_value; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_host_req_deq; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_host_resp_valid; // @[TestAccel.scala 59:25:@552.4]
  wire [31:0] sim_shell_host_resp_bits; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_mem_req_valid; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_mem_req_opcode; // @[TestAccel.scala 59:25:@552.4]
  wire [63:0] sim_shell_mem_req_addr; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_mem_wr_valid; // @[TestAccel.scala 59:25:@552.4]
  wire [63:0] sim_shell_mem_wr_bits; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_mem_rd_ready; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_mem_rd_valid; // @[TestAccel.scala 59:25:@552.4]
  wire [63:0] sim_shell_mem_rd_bits; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_sim_clock; // @[TestAccel.scala 59:25:@552.4]
  wire  sim_shell_sim_wait; // @[TestAccel.scala 59:25:@552.4]
  wire  vta_accel_clock; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_reset; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_io_host_req_valid; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_io_host_req_opcode; // @[TestAccel.scala 60:25:@555.4]
  wire [7:0] vta_accel_io_host_req_addr; // @[TestAccel.scala 60:25:@555.4]
  wire [31:0] vta_accel_io_host_req_value; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_io_host_req_deq; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_io_host_resp_valid; // @[TestAccel.scala 60:25:@555.4]
  wire [31:0] vta_accel_io_host_resp_bits; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_io_mem_req_valid; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_io_mem_req_opcode; // @[TestAccel.scala 60:25:@555.4]
  wire [63:0] vta_accel_io_mem_req_addr; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_io_mem_wr_valid; // @[TestAccel.scala 60:25:@555.4]
  wire [63:0] vta_accel_io_mem_wr_bits; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_io_mem_rd_ready; // @[TestAccel.scala 60:25:@555.4]
  wire  vta_accel_io_mem_rd_valid; // @[TestAccel.scala 60:25:@555.4]
  wire [63:0] vta_accel_io_mem_rd_bits; // @[TestAccel.scala 60:25:@555.4]
  VTASimShell sim_shell ( // @[TestAccel.scala 59:25:@552.4]
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
  Accel vta_accel ( // @[TestAccel.scala 60:25:@555.4]
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
  assign sim_wait = sim_shell_sim_wait; // @[TestAccel.scala 62:12:@559.4]
  assign sim_shell_clock = clock; // @[:@553.4]
  assign sim_shell_reset = reset; // @[:@554.4]
  assign sim_shell_host_req_deq = vta_accel_io_host_req_deq; // @[TestAccel.scala 64:21:@571.4]
  assign sim_shell_host_resp_valid = vta_accel_io_host_resp_valid; // @[TestAccel.scala 64:21:@570.4]
  assign sim_shell_host_resp_bits = vta_accel_io_host_resp_bits; // @[TestAccel.scala 64:21:@569.4]
  assign sim_shell_mem_req_valid = vta_accel_io_mem_req_valid; // @[TestAccel.scala 63:17:@568.4]
  assign sim_shell_mem_req_opcode = vta_accel_io_mem_req_opcode; // @[TestAccel.scala 63:17:@567.4]
  assign sim_shell_mem_req_addr = vta_accel_io_mem_req_addr; // @[TestAccel.scala 63:17:@565.4]
  assign sim_shell_mem_wr_valid = vta_accel_io_mem_wr_valid; // @[TestAccel.scala 63:17:@564.4]
  assign sim_shell_mem_wr_bits = vta_accel_io_mem_wr_bits; // @[TestAccel.scala 63:17:@563.4]
  assign sim_shell_mem_rd_ready = vta_accel_io_mem_rd_ready; // @[TestAccel.scala 63:17:@562.4]
  assign sim_shell_sim_clock = sim_clock; // @[TestAccel.scala 61:23:@558.4]
  assign vta_accel_clock = clock; // @[:@556.4]
  assign vta_accel_reset = reset; // @[:@557.4]
  assign vta_accel_io_host_req_valid = sim_shell_host_req_valid; // @[TestAccel.scala 64:21:@575.4]
  assign vta_accel_io_host_req_opcode = sim_shell_host_req_opcode; // @[TestAccel.scala 64:21:@574.4]
  assign vta_accel_io_host_req_addr = sim_shell_host_req_addr; // @[TestAccel.scala 64:21:@573.4]
  assign vta_accel_io_host_req_value = sim_shell_host_req_value; // @[TestAccel.scala 64:21:@572.4]
  assign vta_accel_io_mem_rd_valid = sim_shell_mem_rd_valid; // @[TestAccel.scala 63:17:@561.4]
  assign vta_accel_io_mem_rd_bits = sim_shell_mem_rd_bits; // @[TestAccel.scala 63:17:@560.4]
endmodule
