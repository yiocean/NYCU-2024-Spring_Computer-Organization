module HazardDetectionUnit(
    input [4:0] IF_ID_rs1,
    input [4:0] IF_ID_rs2,
    input [4:0] ID_EX_rd,
    input [4:0] EX_MEM_rd,
    input ID_EX_MemRead,
    input ID_EX_regWrite,
    input EX_MEM_regWrite,
    output reg PCWrite,
    output reg IF_ID_Write,
    output reg control_signal_mux
);
    
    always @(*) begin
        PCWrite = 1;
        IF_ID_Write = 1;
        control_signal_mux = 0;
        
        if (ID_EX_MemRead && ((ID_EX_rd == IF_ID_rs1) || (ID_EX_rd == IF_ID_rs2))) begin
            PCWrite = 0;
            IF_ID_Write = 0;
            control_signal_mux = 1;
        end
        if(ID_EX_regWrite && ((ID_EX_rd == IF_ID_rs1) || (ID_EX_rd == IF_ID_rs2))) begin
            PCWrite = 0;
            IF_ID_Write = 0;
            control_signal_mux = 1;
        end
        else if(EX_MEM_regWrite && ((EX_MEM_rd == IF_ID_rs1) || (EX_MEM_rd == IF_ID_rs2))) begin
            PCWrite = 0;
            IF_ID_Write = 0;
            control_signal_mux = 1;
        end
    end

endmodule

module HazardDetectionUnit (
    input ID_EX_MemRead, ID_EX_regWrite, EX_MEM_regWrite,
    input [6:0] opcode,
    input [4:0] IF_ID_rs1, IF_ID_rs2, ID_EX_rd, EX_MEM_rd,
    output reg PCWrite
);
    assign PCWrite = (((ID_EX_MemRead || (ID_EX_regWrite && (opcode == 7'b1100011))) && ((IF_ID_rs1 == ID_EX_rd) || (IF_ID_rs2 == ID_EX_rd))) || ( (EX_MEM_regWrite && (opcode == 7'b1100011)) && ((IF_ID_rs1 == EX_MEM_rd) || (IF_ID_rs2 == EX_MEM_rd)))) ? 1'b1 : 1'b0;
    
endmodule

