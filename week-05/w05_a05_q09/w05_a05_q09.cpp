#include <iostream>
using namespace std;

class A {
	public:
		void printA() { cout << "Class A"; }
};

class B: public A {
	public:
		void printB() { cout << "Class B"; }
};

int main() {
	B b;
	b.printA();
	return 0;
}