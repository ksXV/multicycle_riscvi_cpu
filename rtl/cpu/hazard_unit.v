module hazard_unit
#(
    parameter REGISTER_ADDR_WIDTH = 9,
    parameter OPCODE_WIDTH = 7
)
(
    input logic clk_i,
    input logic rst_n_i,

    input logic [REGISTER_ADDR_WIDTH-1:0] reg_src_1_d_i,
    input logic [REGISTER_ADDR_WIDTH-1:0] reg_src_2_d_i,
    input logic [OPCODE_WIDTH-1:0] opcode_i,

    input logic [REGISTER_ADDR_WIDTH-1:0] reg_dst_exec_i,

    output logic halt_decode_stage_o
);
    import types_pkg::*;

    always_comb begin
        case (instruction_type::instruction_type_e'(opcode_i))
            instruction_type::REGISTER_TYPE:  halt_decode_stage_o = reg_src_1_d_i == reg_dst_exec_i || reg_src_2_d_i == reg_dst_exec_i;
            instruction_type::BRANCH_TYPE:    halt_decode_stage_o = reg_src_1_d_i == reg_dst_exec_i;
            instruction_type::IMMEDIATE_TYPE: halt_decode_stage_o = reg_src_1_d_i == reg_dst_exec_i;
            instruction_type::LOAD_TYPE:      halt_decode_stage_o = reg_src_1_d_i == reg_dst_exec_i;
            instruction_type::STORE_TYPE:     halt_decode_stage_o = reg_src_1_d_i == reg_dst_exec_i;
            default: halt_decode_stage_o = 'b0;
        endcase
    end


endmodule
