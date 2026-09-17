module control_unit #(
    parameter int OPCODE = 7
) (
    input logic clk_i,
    input logic reset_i,
    input logic [OPCODE-1:0] opcode_i,

    output logic fetch_next_instruction_o,
    output logic select_imm_alu_o,
    output logic register_read_enable_o,
    output logic register_write_enable_o,
    output logic memory_read_enable_o,
    output logic memory_write_enable_o
);

    import types_pkg::*;

    typedef enum logic [7:0] {
      FETCH,
      DECODE,

      R_TYPE_READ_REGISTERS,
      R_TYPE_COMPUTE_RESULT,
      R_TYPE_WRITE_RESULT,

      IMM_TYPE_READ_REGISTERS,
      IMM_TYPE_COMPUTE_RESULT,
      IMM_TYPE_WRITE_RESULT,

      STORE_TYPE_READ_REGISTERS,
      STORE_TYPE_COMPUTE_RESULT,
      STORE_TYPE_WRITE_RESULT,

      IMM_TYPE_READ_REGISTERS_LOAD,
      IMM_TYPE_COMPUTE_RESULT_LOAD,
      IMM_TYPE_INTERMEDIATE_LOAD,
      IMM_TYPE_WRITE_RESULT_LOAD,

      B_TYPE_READ_REGISTERS,
      B_TYPE_COMPUTE_RESULT
    } states_e;

    states_e state;
    states_e next_state;

    always_ff @(posedge clk_i or negedge reset_i) begin
        if (!reset_i) begin
            state <= DECODE;
        end else begin
            state <= next_state;
        end
    end

    always_comb begin
       next_state = DECODE;
       register_read_enable_o = 1'b0;
       register_write_enable_o = 1'b0;
       select_imm_alu_o = 1'b0;
       memory_read_enable_o = 1'b0;
       memory_write_enable_o = 1'b0;
       fetch_next_instruction_o = 1'b0;

       case (state)
        FETCH: begin
            fetch_next_instruction_o = 1'b1;
            next_state = DECODE;
        end
        DECODE: begin
            if (opcode_i == instruction_type::REGISTER_TYPE) begin
                next_state = R_TYPE_READ_REGISTERS;
            end else if (opcode_i == instruction_type::IMMEDIATE_TYPE) begin
                next_state = IMM_TYPE_READ_REGISTERS;
            end else if (opcode_i == instruction_type::STORE_TYPE) begin
                next_state = STORE_TYPE_READ_REGISTERS;
            end else if (opcode_i == instruction_type::LOAD_TYPE) begin
                next_state = IMM_TYPE_READ_REGISTERS_LOAD;
            end else if (opcode_i == instruction_type::BRANCH_TYPE) begin
                next_state = B_TYPE_READ_REGISTERS;
            end
        end
        R_TYPE_READ_REGISTERS: begin
            next_state = R_TYPE_COMPUTE_RESULT;
            register_read_enable_o = 1'b1;
        end
        R_TYPE_COMPUTE_RESULT: begin
            next_state = R_TYPE_WRITE_RESULT;
        end
        R_TYPE_WRITE_RESULT: begin
            next_state = FETCH;
            register_write_enable_o = 1'b1;
        end
        IMM_TYPE_READ_REGISTERS: begin
            next_state = IMM_TYPE_COMPUTE_RESULT;
            register_read_enable_o = 1'b1;
            select_imm_alu_o = 1'b1;
        end
        IMM_TYPE_COMPUTE_RESULT: begin
            next_state = IMM_TYPE_WRITE_RESULT;
        end
        IMM_TYPE_WRITE_RESULT: begin
            next_state = FETCH;
            register_write_enable_o = 1'b1;
        end
        STORE_TYPE_READ_REGISTERS: begin
            next_state = STORE_TYPE_COMPUTE_RESULT;
            register_read_enable_o = 1'b1;
            select_imm_alu_o = 1'b1;
        end
        STORE_TYPE_COMPUTE_RESULT: begin
            next_state = STORE_TYPE_WRITE_RESULT;
            memory_write_enable_o = 1'b1;
            register_read_enable_o = 1'b1;
        end
        STORE_TYPE_WRITE_RESULT: begin
            next_state = FETCH;
        end
        IMM_TYPE_READ_REGISTERS_LOAD: begin
            next_state = IMM_TYPE_COMPUTE_RESULT_LOAD;
            register_read_enable_o = 1'b1;
            select_imm_alu_o = 1'b1;
        end
        IMM_TYPE_COMPUTE_RESULT_LOAD: begin
            next_state = IMM_TYPE_INTERMEDIATE_LOAD;
            memory_read_enable_o = 1'b1;
        end
        IMM_TYPE_INTERMEDIATE_LOAD: begin
            next_state = IMM_TYPE_WRITE_RESULT_LOAD;
        end
        IMM_TYPE_WRITE_RESULT_LOAD: begin
            register_write_enable_o = 1'b1;
            next_state = FETCH;
        end
        B_TYPE_READ_REGISTERS: begin
            next_state = B_TYPE_COMPUTE_RESULT;
            register_read_enable_o = 1'b1;
        end
        B_TYPE_COMPUTE_RESULT: begin
            next_state = FETCH;
        end
        default: next_state = FETCH;
       endcase
    end
endmodule
