module instruction_memory #(
    parameter DATA_SIZE = 32,
    parameter MEM_DEPTH = 256,   // 256 words = enough to cover PC=0x40 (word 16)
    parameter string MEM_FILE = "instructions.mem"
) (
    input  logic                 clk_i,
    input  logic [DATA_SIZE-1:0] addr_i,
    output logic [DATA_SIZE-1:0] instr_o
);
    logic [DATA_SIZE-1:0] data [MEM_DEPTH-1:0];

    initial begin
        if (MEM_FILE != "") begin
            $readmemb(MEM_FILE, data);
        end
    end

    // PC is byte-addressed and increments by 4. Convert to word index.
    assign instr_o = data[addr_i >> 2];

endmodule
