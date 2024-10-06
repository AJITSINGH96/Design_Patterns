#pragma once
#include "Creator.h"
class ConcreteCreator2 :  public Creator
{
public:
	product* create() override;
};

