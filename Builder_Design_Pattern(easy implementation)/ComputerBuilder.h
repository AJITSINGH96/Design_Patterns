#pragma once
#include <string>
#include "Computer.h"

class ComputerBuilder
{
public:
	virtual void buildCPU(string cpu) = 0;
	virtual void buildMemory(string memory) = 0;
	virtual void buildStorage(string storage) = 0;
	virtual Computer getResult() = 0;
};

