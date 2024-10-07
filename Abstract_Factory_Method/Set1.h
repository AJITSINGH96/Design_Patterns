#pragma once
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include<iostream>
class ProductA1 :public AbstractProductA {
public:
	void ProductA() override {
		std::cout << "[1] PRODUCT A\n";
	}
};
class ProductB1 :public AbstractProductB {
public:
	void ProductB() override {
		std::cout << "[1] PRODUCT B\n";
	}
};
