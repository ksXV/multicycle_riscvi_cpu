module data_memory #(
    parameter int unsigned DATA_WIDTH = 32,
    parameter int unsigned ADDR_WIDTH = 12 // 12 bits = 4096 words (16 KB)
) 
(
    input  wire                     clk_i,
    input  logic                    write_enable_i,
    input  logic                    read_enable_i,
    input  logic [DATA_WIDTH-1:0]   address_i,
    input  logic [DATA_WIDTH-1:0]   write_data_i,
    output logic [DATA_WIDTH-1:0]   read_data_o
);

    localparam int unsigned MEMORY_DEPTH = 1 << ADDR_WIDTH;

    logic [DATA_WIDTH-1:0] data [0:MEMORY_DEPTH-1];

    logic [ADDR_WIDTH-1:0] internal_addr;

    assign internal_addr = address_i[ADDR_WIDTH-1:0];

    always_ff @(posedge clk_i) begin
        if (write_enable_i && ~read_enable_i) begin
            data[internal_addr] <= write_data_i;
        end
        if (read_enable_i && ~write_enable_i) begin
            read_data_o <= data[internal_addr]; 
        end
    end
    
endmodule
