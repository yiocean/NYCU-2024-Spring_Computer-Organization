module branchComp (
    input wire [31:0] rs1,
    input wire [31:0] rs2,
    output reg BrEq,
    output reg BrLT
);

    always @ (rs1, rs2) begin
        BrEq = (rs1 == rs2);
        BrLT = (rs1 < rs2);
    end
    
endmodule
