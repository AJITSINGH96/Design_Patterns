#pragma once
# include "AbstractFactory.h"
#include "Set2.h"
class ConcreteFactory2 : public AbstractFactory
{
public:
	AbstractProductA* CreateProductA() override;
	AbstractProductB* CreateProductB() override;
};

