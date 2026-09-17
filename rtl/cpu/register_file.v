module register_file #(
    parameter int DATA_SIZE = 32,
    parameter int REGISTER_SELECT_SIZE = 5
)
(
    input logic clk_i,
    input logic rst_n_i,

    input logic read_enable_i,
    input logic [REGISTER_SELECT_SIZE-1:0] register_select_1_i,
    input logic [REGISTER_SELECT_SIZE-1:0] register_select_2_i,

    input logic write_enable_i,
    input logic [REGISTER_SELECT_SIZE-1:0] register_write_i,
    input logic [DATA_SIZE-1:0] register_data_write_i,

    output logic [DATA_SIZE-1:0] register_read_1_o,
    output logic [DATA_SIZE-1:0] register_read_2_o
);

    localparam int REGISTER_SELECT_MAX_SIZE = 1 << REGISTER_SELECT_SIZE;


    logic [REGISTER_SELECT_MAX_SIZE-1:0] reg_enable_read;
    logic [REGISTER_SELECT_MAX_SIZE-1:0] reg_enable_write;

    // God bless the synthesizer
    logic [DATA_SIZE-1:0] output_data [REGISTER_SELECT_MAX_SIZE];

    genvar i;
    generate
        for (i = 0; i < REGISTER_SELECT_MAX_SIZE; i = i + 1) begin: gen_registers
            register r
            (
                .clk_i(clk_i),
                .reset_i(rst_n_i),
                .read_enable_i(reg_enable_read[i]),
                .write_enable_i(reg_enable_write[i]),
                .data_i(register_data_write_i),
                .data_o(output_data[i])
            );
        end
    endgenerate

    assign register_read_1_o = read_enable_i ? output_data[register_select_1_i] : {DATA_SIZE{1'b0}};
    assign register_read_2_o = read_enable_i ? output_data[register_select_2_i] : {DATA_SIZE{1'b0}};

    always_comb begin
        reg_enable_write = {REGISTER_SELECT_MAX_SIZE{1'b0}};
        reg_enable_read = {REGISTER_SELECT_MAX_SIZE{1'b0}};

        if (read_enable_i && !write_enable_i) begin
            reg_enable_read[register_select_1_i] = 1'b1;
            reg_enable_read[register_select_2_i] = 1'b1;
        end else if (!read_enable_i && write_enable_i) begin
            if (register_write_i != 0) reg_enable_write[register_write_i] = 1'b1;
        end
    end

endmodule
