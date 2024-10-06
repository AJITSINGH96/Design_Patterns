#pragma once
#pragma once
using namespace std;
#include<iostream>
class Singleton
{
	Singleton()  =default;
	static Singleton m_Instance;
public:
	static Singleton& Instance();
	void MethodA();
	void MethodB();
};
