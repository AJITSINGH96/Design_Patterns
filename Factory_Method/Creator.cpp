#include "Creator.h"
//#include "ConcreteProduct.h"
#include "Product.h"
void Creator::AnOperation() {
	//m_pProduct = new ConcreteProduct{};
	m_pProduct = create();
	m_pProduct->operation();
}
