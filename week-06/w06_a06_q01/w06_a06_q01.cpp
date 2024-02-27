#include<iostream>
using namespace std;

class ClassA {
	public:
		void fun1() { cout << "A1"; }
		virtual void fun2() { cout << "A2"; }
};

class ClassB: public ClassA {
	public:
		virtual void fun1() { cout << "B1"; }
		void fun2() { cout << "B2"; }
};

int main() {
	ClassA *t = new ClassB();
	t->fun1();
	t->fun2();
	return 0;
}