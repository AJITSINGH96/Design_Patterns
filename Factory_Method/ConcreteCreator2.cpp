#include "ConcreteCreator2.h"
#include "ConcreteProduct2.h"

product* ConcreteCreator2::create()
{
    return new ConcreteProduct2{};
}
