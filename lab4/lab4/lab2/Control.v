/* verilator lint_off LATCH */
module Control (
    input [6:0] opcode,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [2:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    always @(*) begin
        case(opcode)
            // R-type
            7'b0110011: begin
                memRead = 1'b0;
                memtoReg = 2'b00;
                ALUOp = 3'b010;
                memWrite = 1'b0;
                ALUSrc = 1'b0;
                regWrite = 1'b1;
            end
            // load
            7'b0000011: begin
                memRead = 1'b1;
                memtoReg = 2'b01;
                ALUOp = 3'b000;
                memWrite = 1'b0;
                ALUSrc = 1'b1;
                regWrite = 1'b1;
            end
            // Store
            7'b0100011: begin
                memRead = 1'b0;
                memtoReg = 2'b00;
                ALUOp = 3'b000;
                memWrite = 1'b1;
                ALUSrc = 1'b1;
                regWrite = 1'b0;
            end
            // beq, bne, blt, bge
            7'b1100011: begin
                memRead = 1'b0;
                memtoReg = 2'b00;
                ALUOp = 3'b001;//010
                memWrite = 1'b0;
                ALUSrc = 1'b0; //don't care
                regWrite = 1'b0;
            end
            // I-type
            7'b0010011: begin
                memRead = 1'b0;
                memtoReg = 2'b00;
                ALUOp = 3'b011; //110
                memWrite = 1'b0;
                ALUSrc = 1'b1;
                regWrite = 1'b1;
            end

            // Jal
            7'b1101111: begin
                memRead = 1'b0;
                memtoReg = 2'b10;
                ALUOp = 3'b100; //011
                memWrite = 1'b0;
                ALUSrc = 1'b1;
                regWrite = 1'b1;
            end

            // Jalr
            7'b1100111: begin
                memRead = 1'b0;
                memtoReg = 2'b10; //010
                ALUOp = 3'b100;
                memWrite = 1'b0;
                ALUSrc = 1'b1;
                regWrite = 1'b1;
            end
            
            default: begin
                memRead = 1'b0;
                memtoReg = 2'b00;
                ALUOp = 3'b000;
                memWrite = 1'b0;
                ALUSrc = 1'b0;
                regWrite = 1'b0;
            end

        endcase
    end
endmodule

