/* verilator lint_off CASEINCOMPLETE */
module branchComp (
    input wire [31:0] rs1,
    input wire [31:0] rs2,
    input [6:0] opcode,
    input [2:0] funct3,
    output reg flush
);

    reg BrEq;
    reg BrLT;
    
    always @(*) begin
        BrEq = 0;
        BrLT = 0;
        flush = 0;
        
        case (opcode)
            7'b1100011: // BEQ, BNE, BLT, BGE, BLTU, BGEU
                case (funct3)
                    3'b000: BrEq = (rs1 == rs2); // BEQ
                    3'b001: BrEq = (rs1 != rs2); // BNE
                    3'b100: BrLT = ($signed(rs1) < $signed(rs2)); // BLT
                    3'b101: BrLT = ($signed(rs1) >= $signed(rs2)); // BGE
                    default: begin
                        BrEq = 0;
                        BrLT = 0;
                    end
                endcase
        endcase
        
        // 根據比較結果決定是否 flush
        if ((opcode == 7'b1100011) && (BrEq || BrLT)) begin
            flush = 1;
        end
    end
    
endmodule



// module branchComp (
//     input wire [31:0] rs1,
//     input wire [31:0] rs2,
//     output reg BrEq,
//     output reg BrLT
// );

//     always @ (rs1, rs2) begin
//         BrEq = (rs1 == rs2);
//         BrLT = (rs1 < rs2);
//     end
    
// endmodule
