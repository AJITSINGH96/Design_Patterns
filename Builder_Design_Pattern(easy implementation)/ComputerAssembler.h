#pragma once
#include "Computer.h"
#include "DesktopComputerBuilder.h"
// Director Class
class ComputerAssembler
{
public:
	Computer assembleComputer(DesktopComputerBuilder builder) {
		builder.buildCPU("Intel");
		builder.buildMemory("16gb");
		builder.buildStorage("512gb");
		return builder.getResult();
	}
};

