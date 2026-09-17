package types_pkg;
    class functions_3;
        typedef enum logic [2:0] {
            ADD  = 3'b000,
            SLL  = 3'b001,
            SLT  = 3'b010,
            SLTU = 3'b011,
            XOR  = 3'b100,
            SRL  = 3'b101,
            OR   = 3'b110,
            AND  = 3'b111
        } functions_3_e;
    endclass: functions_3

    class alu_ops;
        typedef enum logic [3:0] {
            ADD,
            SUB,
            XOR,
            OR,
            AND,
            SLL,
            SRL,
            SRA,
            SLT,
            SLTU,

            EQ,
            NEQ,
            LT,
            GE,
            LTU,
            GEU
        } alu_ops;
    endclass: alu_ops

    class instruction_type;
        localparam OPCODE = 7;

        typedef enum logic [OPCODE-1:0] {
            REGISTER_TYPE  = 'b0110011,
            IMMEDIATE_TYPE = 'b0010011,
            LOAD_TYPE      = 'b0000011,
            STORE_TYPE     = 'b0100011,
            BRANCH_TYPE    = 'b1100011
        } instruction_type_e;
    endclass: instruction_type

    typedef struct packed {
        logic [6:0]  funct7;       // [31:25]
        logic [4:0]  rs2;          // [24:20]
        logic [4:0]  rs1;          // [19:15]
        logic [2:0]  funct3;       // [14:12]
        logic [4:0]  rd;           // [11:7]
        logic [6:0]  opcode;       // [6:0]
    } r_type_t;

    typedef struct packed {
        logic [11:0] imm;          // [31:20]
        logic [4:0]  rs1;          // [19:15]
        logic [2:0]  funct3;       // [14:12]
        logic [4:0]  rd;           // [11:7]
        logic [6:0]  opcode;       // [6:0]
    } i_type_t;

    typedef struct packed {
        logic [6:0]  imm_11_5;     // [31:25]
        logic [4:0]  rs2;          // [24:20]
        logic [4:0]  rs1;          // [19:15]
        logic [2:0]  funct3;       // [14:12]
        logic [4:0]  imm_4_0;      // [11:7]
        logic [6:0]  opcode;       // [6:0]
    } s_type_t;

    typedef struct packed {
        logic        imm_12;       // [31]
        logic [5:0]  imm_10_5;     // [30:25]
        logic [4:0]  rs2;          // [24:20]
        logic [4:0]  rs1;          // [19:15]
        logic [2:0]  funct3;       // [14:12]
        logic [3:0]  imm_4_1;      // [11:8]
        logic        imm_11;       // [7]
        logic [6:0]  opcode;       // [6:0]
    } b_type_t;

    typedef struct packed {
        logic [19:0] imm_31_12;    // [31:12]
        logic [4:0]  rd;           // [11:7]
        logic [6:0]  opcode;       // [6:0]
    } u_type_t;

    typedef struct packed {
        logic        imm_20;       // [31]
        logic [9:0]  imm_10_1;     // [30:21]
        logic        imm_11;       // [20]
        logic [7:0]  imm_19_12;    // [19:12]
        logic [4:0]  rd;           // [11:7]
        logic [6:0]  opcode;       // [6:0]
    } j_type_t;


    // All formats are exactly 32 bits, so they can share the same
    // 32-bit instruction word.
    typedef union packed {
        r_type_t r;
        i_type_t i;
        s_type_t s;
        b_type_t b;
        u_type_t u;
        j_type_t j;
        logic [31:0] raw;
    } riscv_instruction_t;

endpackage
