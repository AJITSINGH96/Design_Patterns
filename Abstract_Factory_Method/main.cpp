#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include "Set1.h"
#include "Set2.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

void UsePattern(AbstractFactory* pFactory) {
	AbstractProductA* pA = pFactory->CreateProductA();
	AbstractProductB* pB = pFactory->CreateProductB();
	/*AbstractProductA* pA = new ProductA1{};
	AbstractProductB* pB = new ProductB1{};*/
	/*AbstractProductA* pA = new ProductA2{};
	AbstractProductB* pB = new ProductB2{};*/
	pA->ProductA();
	pB->ProductB();
	delete pA;
	delete pB;
}

int main() {
	AbstractFactory* pFactory = new ConcreteFactory1{};
	//AbstractFactory* pFactory = new ConcreteFactory2{};
	UsePattern(pFactory);
	delete pFactory;
}