module Mux2to1 #(
    parameter size = 32
) 
(
    input sel,
    input signed [size-1:0] s0,
    input signed [size-1:0] s1,
    output signed [size-1:0] out
);
    // TODO: implement your 2to1 multiplexer here
    // always @(*) begin
    //     case(sel)
    //         1'b0: out = s0;
    //         1'b1: out = s1;
    //     endcase
    // end
    // bescause out doesn't have reg -> can not use always
    assign out = (sel) ? s1 : s0;
    
endmodule

