#include<iostream>
#include "ToyFactory.h"
using namespace std;

int main() {
	int type;
	while (1) {
		cout << endl << "enter type or zero to exit" << endl;
		cin >> type;
		if (!type)
			break;
		Toy* v = ToyFactory::createToy(type);
		if (v) {
			v->showProduct();
			delete v;
		}
	}
	cout << "Exit.." << endl;
	return 0;
}


