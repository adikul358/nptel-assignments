#include <iostream>
using namespace std;

class Base {
	public:
		void print() { cout << "C Programming" << endl; }
};

class Derived: public Base {
	public:
		void print() { cout << "C++ Programming" << endl; }
};

int main() {
	Base *a1 = new Base();
	Base *b1 = new Derived();

	a1->print();
	b1->print();
	return 0;
}