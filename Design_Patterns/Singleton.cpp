#include "Singleton.h"
Singleton Singleton::m_Instance;
Singleton& Singleton::Instance() {
	return m_Instance;
}

void Singleton::MethodA() {
	cout << "Method A is called";
}

void Singleton::MethodB() {
}
