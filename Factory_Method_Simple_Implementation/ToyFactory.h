#pragma once
#include "ToyFactoryObject.cpp"
class ToyFactory {
public:
	static Toy* createToy(int type);
};
