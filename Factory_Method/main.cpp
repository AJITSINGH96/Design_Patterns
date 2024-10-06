#include "Creator.h"
#include "ConcreteCreator.h"
#include "ConcreteCreator2.h"
int main() {
	//Creator ct;
	ConcreteCreator ct1;
	ct1.AnOperation();
	ConcreteCreator2 ct2;
	ct2.AnOperation();
}