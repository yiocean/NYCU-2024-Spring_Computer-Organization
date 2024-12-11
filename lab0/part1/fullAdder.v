// module fullAdder(input cin, input a, input b, output s, output cout);
//     // FullAdder compute addition of input cin, a and b,
//     // then output result to s and carry bit to cout.

//     // TODO: implement your fullAdder design here
//     // For testbench verifying, do not modify input and output pin
//     wire AxorB, AxorB_andCin, AandB;
//     xor G1(AxorB, a, b);
//     and G2(AandB, a, b);
//     and G3(AxorB_andCin, AxorB, cin);
//     xor G4(s, AxorB, cin);
//     or G5(cout, AxorB_andCin, AandB);
// endmodule

module Adder (
    input signed [31:0] a,
    input signed [31:0] b,
    output signed [31:0] sum
);
    // Adder computes sum = a + b
    // The module is useful when accumulating PC (Program Counter)

    // TODO: implement your Adder here
    // Hint: you can use operator to implement
    assign sum = a + b;


endmodule


