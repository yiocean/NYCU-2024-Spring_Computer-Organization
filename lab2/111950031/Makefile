.PHONY: lab1
lab1:
	make clean
	verilator --build SingleCycleCPU.v Adder.v ALU.v ALUCtrl.v Control.v DataMemory.v ImmGen.v InstructionMemory.v Mux2to1.v PC.v Register.v branchComp.v MuxPC.v MuxWR.v --exe testbench.cpp -cc --trace -Wall
	./obj_dir/VSingleCycleCPU

.PHONY: clean
clean:
	rm -rf obj_dir
	rm -f waveform.vcd