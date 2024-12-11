.PHONY: lab1
lab1:
	make clean
	verilator --build SingleCycleCPU.v Adder.v ALU.v ALUCtrl.v Control.v DataMemory.v ImmGen.v InstructionMemory.v Mux2to1.v PC.v Register.v ShiftLeftOne.v pipline1.v pipline32.v piplineCtrl.v --exe testbench.cpp -cc --trace -Wall
	./obj_dir/VSingleCycleCPU

.PHONY: clean
clean:
	rm -rf obj_dir
	rm -f waveform.vcd