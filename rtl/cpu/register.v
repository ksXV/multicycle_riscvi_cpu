module register #(
   parameter int DATA_SIZE = 32
) (
    input  logic                 clk_i,
    input  logic                 reset_i,
    input  logic                 write_enable_i,
    input  logic                 read_enable_i,
    input  logic [DATA_SIZE-1:0] data_i,
    output logic [DATA_SIZE-1:0] data_o
);

    logic [DATA_SIZE-1:0] data;

    assign data_o = (read_enable_i && !write_enable_i) ? data : {DATA_SIZE{1'b0}};

    always @(posedge clk_i or negedge reset_i) begin
        if (!reset_i) begin
            data <= {DATA_SIZE{1'b0}};
        end else begin
            if (write_enable_i && !read_enable_i) begin
                data <= data_i;
            end
        end
    end

endmodule
