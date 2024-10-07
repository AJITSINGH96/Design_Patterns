#include "Computer.h"

void Computer::setCPU(string cpu)
{
	cpu_ = cpu;
}

void Computer::setMenory(string memory)
{
	memory_ = memory;
}

void Computer::setStorage(string storage)
{
	storage_ = storage;
}

void Computer::display()
{
	cout << "CPU: " << cpu_ << endl;
	cout << "MEMORY: " << memory_ << endl;
	cout << "STORAGE: " << storage_ << endl;

}
