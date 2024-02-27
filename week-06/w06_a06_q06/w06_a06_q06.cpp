#include <iostream>
using namespace std;

class Class1 {
	public:
		virtual void fun() { cout << "Class1::fun() "; }
};

class Class2 : public Class1 {
	public:
		void fun() { cout << "Class2::fun() "; }
};

class Class3 : public Class2 {
	public:
		void fun() { cout << "Class3::fun() "; }
};

int main() {
	Class1 *cb = new Class2;
	cb->fun();
	return 0;
}