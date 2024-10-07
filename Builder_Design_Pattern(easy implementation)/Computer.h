#pragma once
#include <string>
#include <iostream>
using namespace std;
class Computer {
private:
	string cpu_;
	string memory_;
	string storage_;
public:
	void setCPU(string cpu);
	void setMenory(string memory);
	void setStorage(string storage);
	void display();
};