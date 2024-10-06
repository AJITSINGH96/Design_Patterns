#pragma once
#include "Creator.h"
class ConcreteCreator :  public Creator
{
public:
	product* create() override;
};

