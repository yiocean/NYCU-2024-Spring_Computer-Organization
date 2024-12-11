.PHONY: lab1
lab1: 
	make clean
	verilator --build PipelineCPU.v Adder.v ALU.v ALUCtrl.v Control.v DataMemory.v ImmGen.v InstructionMemory.v Mux2to1.v Mux3to1.v PC.v Register.v branchComp.v MuxPC.v MuxWR.v IF_ID_register.v ID_EX_register.v EX_MEM_register.v MEM_WB_register.v ForwardingUnit.v HazardDetectionUnit.v AddrMux.v MuxCtrl.v --exe testbench.cpp -cc --trace -Wall
	./obj_dir/VPipelineCPU

.PHONY: clean
clean:
	rm -rf obj_dir
	rm -f waveform.vcd
