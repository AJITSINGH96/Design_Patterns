#include<iostream>
using namespace std;


class Toy {
protected:
	string name;
	float price;
public:
	virtual void prepareParts()=0;
	virtual void combineParts()=0;
	virtual void assembleParts()=0;
	virtual void applyLabel()=0;
	virtual void showProduct() = 0;

};
class Car :public Toy {
public:
	virtual void prepareParts() { cout << "preparing car parts" << endl; };
	virtual void combineParts() { cout << "combining car parts" << endl; };
	virtual void assembleParts() { cout << "assembling car parts" << endl; };
	virtual void applyLabel() { cout << "applying car label" << endl; };
	virtual void showProduct() { cout << "Name: " << name << endl << "price: " << endl; };
};
class Bike :public Toy {
public:
	virtual void prepareParts() { cout << "preparing Bike parts" << endl; };
	virtual void combineParts() { cout << "combining Bike parts" << endl; };
	virtual void assembleParts() { cout << "assembling Bike parts" << endl; };
	virtual void applyLabel() { cout << "applying Bike label" << endl; };
	virtual void showProduct() { cout << "Name: " << name << endl << "price: " << endl; };
};
class Plane :public Toy {
public:
	virtual void prepareParts() { cout << "preparing Plane parts" << endl; };
	virtual void combineParts() { cout << "combining Plane parts" << endl; };
	virtual void assembleParts() { cout << "assembling Plane parts" << endl; };
	virtual void applyLabel() { cout << "applying Plane label" << endl; };
	virtual void showProduct() { cout << "Name: " << name << endl << "price: " << endl; };
};