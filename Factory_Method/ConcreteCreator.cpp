#include "ConcreteCreator.h"
#include "ConcreteProduct.h"

product* ConcreteCreator::create()
{
    return new ConcreteProduct{};
}
