#include<iostream>
using namespace std;

class A {
	public:
		A() { cout << "A "; }
		~A() { cout << "~A "; }
};

class B : public A {
	public: 
		B() { cout << "B "; }
		virtual ~B() { cout << "~B "; }
};

class C: public B {
	public:
		C() { cout << "C "; }
		virtual ~C() { cout << "~C "; }
};

int main() {
	A *t1 = new C;
	delete t1;
	return 0;
}