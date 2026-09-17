import types_pkg::*;

module alu #(
    parameter int DATA_SIZE = 32
) (
    input  alu_ops::alu_ops          ops,

    input  logic [DATA_SIZE-1:0]     operand_1_i,
    input  logic [DATA_SIZE-1:0]     operand_2_i,

    output logic [DATA_SIZE-1:0]     result_o
);

    always_comb begin
        case (ops)
            alu_ops::ADD:  result_o = operand_1_i + operand_2_i;
            alu_ops::SUB:  result_o = operand_1_i - operand_2_i;
            alu_ops::AND:  result_o = operand_1_i & operand_2_i;
            alu_ops::OR:   result_o = operand_1_i | operand_2_i;
            alu_ops::XOR:  result_o = operand_1_i ^ operand_2_i;
            alu_ops::SLL:  result_o = operand_1_i << operand_2_i[4:0];
            alu_ops::SRL:  result_o = operand_1_i >> operand_2_i[4:0];
            alu_ops::SRA:  result_o = $signed($signed(operand_1_i) >>> operand_2_i[4:0]);
            alu_ops::SLT:  result_o = {{(DATA_SIZE-1){1'b0}}, $signed(operand_1_i) < $signed(operand_2_i)};
            alu_ops::SLTU: result_o = {{(DATA_SIZE-1){1'b0}}, operand_1_i < operand_2_i};
            alu_ops::EQ:   result_o = {{(DATA_SIZE-1){1'b0}}, operand_1_i == operand_2_i};
            alu_ops::NEQ:  result_o = {{(DATA_SIZE-1){1'b0}}, operand_1_i != operand_2_i};
            alu_ops::LT:   result_o = {{(DATA_SIZE-1){1'b0}}, $signed(operand_1_i) < $signed(operand_2_i)};
            alu_ops::GE:   result_o = {{(DATA_SIZE-1){1'b0}}, $signed(operand_1_i) >= $signed(operand_2_i)};
            alu_ops::LTU:  result_o = {{(DATA_SIZE-1){1'b0}}, operand_1_i < operand_2_i};
            alu_ops::GEU:  result_o = {{(DATA_SIZE-1){1'b0}}, operand_1_i >= operand_2_i};
            default:       result_o = 'd0;
        endcase
    end
endmodule
