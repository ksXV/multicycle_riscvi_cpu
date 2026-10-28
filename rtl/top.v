`default_nettype none

module top #(
    parameter int unsigned DATA_WIDTH = 32,
    parameter int unsigned REGISTER_SELECT_SIZE = 5,
    parameter string MEM_FILE = "./build/instructions.mem"
) (
    input logic clk_i,
    input logic rst_n_i,

    output logic [DATA_WIDTH-1:0] output_o // generic output so yosys doesn't optimize everything into nothing
);
    import types_pkg::*;

    logic register_write_enable;
    logic register_read_enable;
    logic [DATA_WIDTH-1:0] register_data_write;
    logic [DATA_WIDTH-1:0] register_read_1;
    logic [DATA_WIDTH-1:0] register_read_2;

    logic [DATA_WIDTH-1:0] operand_1;
    logic [DATA_WIDTH-1:0] operand_2;
    logic [DATA_WIDTH-1:0] alu_result;
    logic select_imm_alu;

    logic memory_read_enable;
    logic memory_write_enable;
    logic [DATA_WIDTH-1:0] memory_write_data;
    logic [DATA_WIDTH-1:0] memory_read_data;

    logic [REGISTER_SELECT_SIZE-1:0] register_write;

    logic [DATA_WIDTH-1:0] pc;
    logic fetch_next_instruction;
    logic should_take_branch;

    alu_ops::alu_ops alu_op_select;

    riscv_instruction_t instr;


    always_ff @(posedge clk_i or negedge rst_n_i) begin
       if (!rst_n_i) begin
           should_take_branch <= 'd0;
       end else begin
           should_take_branch <= alu_result[0];
       end
    end

    always_ff @(posedge clk_i or negedge rst_n_i) begin
        if (!rst_n_i) begin
            pc <= 'h40;
        end else if (fetch_next_instruction) begin
            if (should_take_branch && instr.b.opcode == instruction_type::BRANCH_TYPE) begin
                pc <= pc + {{(DATA_WIDTH-12){instr.b.imm_12}},
                            instr.b.imm_11, instr.b.imm_10_5, instr.b.imm_4_1, 1'b0};
            end else begin
                pc <= pc + 'd4;
            end
        end
    end


    always_comb begin
        if (instr.i.opcode == instruction_type::LOAD_TYPE ||
            instr.i.opcode == instruction_type::STORE_TYPE) begin
            alu_op_select = alu_ops::ADD;
        end
        else if (instr.i.opcode == instruction_type::IMMEDIATE_TYPE) begin
            case (instr.i.funct3)
                3'b000:  alu_op_select = alu_ops::ADD;
                3'b001:  alu_op_select = alu_ops::SLL;
                3'b010:  alu_op_select = alu_ops::SLT;
                3'b011:  alu_op_select = alu_ops::SLTU;
                3'b100:  alu_op_select = alu_ops::XOR;
                3'b101:  alu_op_select = instr.i.imm[11:5] == 'h20 ? alu_ops::SRA : alu_ops::SRL;
                3'b110:  alu_op_select = alu_ops::OR;
                3'b111:  alu_op_select = alu_ops::AND;
                default: alu_op_select = alu_ops::ADD;
            endcase
        end else if (instr.i.opcode == instruction_type::REGISTER_TYPE) begin
            case (instr.r.funct3)
                3'b000:  alu_op_select = instr.r.funct7[5] ? alu_ops::SUB : alu_ops::ADD;
                3'b001:  alu_op_select = alu_ops::SLL;
                3'b010:  alu_op_select = alu_ops::SLT;
                3'b011:  alu_op_select = alu_ops::SLTU;
                3'b100:  alu_op_select = alu_ops::XOR;
                3'b101:  alu_op_select = instr.r.funct7[5] ? alu_ops::SRA : alu_ops::SRL;
                3'b110:  alu_op_select = alu_ops::OR;
                3'b111:  alu_op_select = alu_ops::AND;
                default: alu_op_select = alu_ops::ADD;
            endcase
        end else begin
            case (instr.b.funct3)
                3'd0: alu_op_select = alu_ops::EQ;
                3'd1: alu_op_select = alu_ops::NEQ;
                3'd4: alu_op_select = alu_ops::LT;
                3'd5: alu_op_select = alu_ops::GE;
                3'd6: alu_op_select = alu_ops::LTU;
                3'd7: alu_op_select = alu_ops::GEU;
                default: alu_op_select = alu_ops::ADD;
            endcase
        end
    end

    instruction_memory #(
        .DATA_SIZE(DATA_WIDTH),
        .MEM_DEPTH(256),
        .MEM_FILE(MEM_FILE)
    ) instr_mem (
    	.clk_i(clk_i),
    	.addr_i(pc),
    	.instr_o(instr)
    );


    always_ff @(posedge clk_i or negedge rst_n_i) begin
        if (!rst_n_i) begin
            register_write <= 'd0;
        end else begin
            register_write <= instr.r.rd;
        end
    end


    register_file reg_file(
        .clk_i(clk_i),
        .rst_n_i(rst_n_i),
        .read_enable_i(register_read_enable),
        .register_select_1_i(instr.r.rs1),
        .register_select_2_i(instr.r.rs2),

        .write_enable_i(register_write_enable),
        .register_write_i(register_write),
        .register_data_write_i(register_data_write),

        .register_read_1_o(register_read_1),
        .register_read_2_o(register_read_2)
    );

    always_ff @(posedge clk_i or negedge rst_n_i) begin
        if (!rst_n_i) begin
            operand_1 <= 'd0;
        end else begin
            operand_1 <= register_read_1;
        end
    end

    always_ff @(posedge clk_i or negedge rst_n_i) begin
        if (!rst_n_i) begin
            operand_2 <= 'd0;
        end else begin
            if (select_imm_alu) begin
                if (instr.i.opcode == instruction_type::STORE_TYPE) begin
                    operand_2 <= {{(DATA_WIDTH-12){instr.s.imm_11_5[6]}}, instr.s.imm_11_5, instr.s.imm_4_0};
                end else begin
                    operand_2 <= {{(DATA_WIDTH-12){instr.i.imm[11]}}, instr.i.imm};
                end
            end else begin
                operand_2 <= register_read_2;
            end
        end
    end

    always_ff @(posedge clk_i or negedge rst_n_i) begin
        if (!rst_n_i) begin
            memory_write_data <= 'd0;
        end else begin
            memory_write_data <= instr.s.funct3 == 'd0 ? {24'd0, register_read_2[7:0]} :
                                 instr.s.funct3 == 'd1 ? {16'd0, register_read_2[15:0]} :
                                 instr.s.funct3 == 'd2 ? register_read_2 : 'd0;
        end
    end


    alu alu(
        .ops(alu_op_select),
        .operand_1_i(operand_1),
        .operand_2_i(operand_2),
        .result_o(alu_result)
    );

    logic [DATA_WIDTH-1:0] data_memory_addr;
    assign data_memory_addr = alu_result;

    data_memory data_mem(
        .clk_i(clk_i),
        .address_i(data_memory_addr),
        .read_enable_i(memory_read_enable),
        .read_data_o(memory_read_data),
        .write_enable_i(memory_write_enable),
        .write_data_i(memory_write_data)
    );


    always_ff @(posedge clk_i or negedge rst_n_i) begin
        if (!rst_n_i) begin
            register_data_write <= 'd0;
        end else begin
            register_data_write <= instr.i.opcode == instruction_type::LOAD_TYPE ?
                                    (instr.i.funct3 == 'd0 ? {24'd0, memory_read_data[7:0]} :
                                     instr.i.funct3 == 'd1 ? {16'd0, memory_read_data[15:0]} :
                                     instr.i.funct3 == 'd2 ? memory_read_data : 'd0)
                                    : alu_result;
        end
    end

    assign output_o = ~register_write_enable ? alu_result : 'd0;

    control_unit cu(
        .clk_i(clk_i),
        .reset_i(rst_n_i),
        .opcode_i(instr.r.opcode),
        .select_imm_alu_o(select_imm_alu),
        .register_write_enable_o(register_write_enable),
        .register_read_enable_o(register_read_enable),
        .memory_read_enable_o(memory_read_enable),
        .memory_write_enable_o(memory_write_enable),
        .fetch_next_instruction_o(fetch_next_instruction)
    );

    logic halt_decode_stage;

    hazard_unit #(
    	.REGISTER_ADDR_WIDTH(5),
        .OPCODE_WIDTH(7)
     ) hazard_unit (
    	.clk_i              (clk_i),
    	.rst_n_i            (rst_n_i),
        .opcode_i           (instr.r.opcode),
    	.reg_src_1_d_i      (instr.r.rs1),
    	.reg_src_2_d_i      (instr.r.rs2),
    	.reg_dst_exec_i     (instr.r.rd),
    	.halt_decode_stage_o(halt_decode_stage)
    );

endmodule
