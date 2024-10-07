#include"Computer.h"
#include "DesktopComputerBuilder.h"
#include "ComputerAssembler.h"

int main() {
	DesktopComputerBuilder desktopbuilder;
	ComputerAssembler assembler;
	Computer desktop = assembler.assembleComputer(desktopbuilder);
	cout << "Desktop Configuration :" << endl;
	desktop.display();
}

//Key components of the Builder Pattern in C++
// 
//Director: The Director is the main component of the builder pattern it basically responsible for the construction process of the program.It works with a Builder to build an object.
//The Director knows the actual steps required to build an object, but it does not know the details of how each step is implemented.
// 
//Builder : The Builder is the main interface or an abstract class that defines the construction steps required to create an object.
// 
//Concrete Builder : Basically, these are the classes that implement the Builder interface.Each Concrete Builder is responsible for constructing a particular variant of the object.
// 
//Product : The Product is the complex object that we want to create.
//The Product class may have methods to access or manipulate these components.It often has multiple parts or components that are built by the Builder.