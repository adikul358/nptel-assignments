#include <iostream>
using namespace std;

class Base {
	int a;
	public:
		Base (int _a) : a(_a) { }
		void f() { cout << a; }
};

class Derived : public Base {
	int b;
	public:
		Derived(int x, int y): Base(x), b(y) {}
		void f() { cout << b; }
};

int main() {
	Derived obj(1,2);
	obj.Base::f();
	return 0;
}