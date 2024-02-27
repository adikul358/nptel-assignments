#include <iostream>
using namespace std;

class Base {
	public:
		virtual void fun() { cout << "Base"; }
};

class Derived: public Base {
	public:
		void fun(double i) { cout << "Derived"; }
};

int main() {
	Derived t1;
	Base *t2 = new Derived();
	t1.fun();
	t1.fun(3.14);
	t2->fun(9.8);
	t2->fun();
	return 0;
}