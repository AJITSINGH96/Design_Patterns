#pragma once
#include "ComputerBuilder.h"
class DesktopComputerBuilder :  public ComputerBuilder
{
private:
	Computer computer_;
public:
	DesktopComputerBuilder() {
		computer_ = Computer();
	}
	void buildCPU(string cpu) override {
		computer_.setCPU(cpu);
	}
	void buildMemory(string memory)override {
		computer_.setMenory(memory);
	}
	void buildStorage(string storage) override {
		computer_.setStorage(storage);
	}
	Computer getResult() override {
		return computer_;
	}
};

