#include <iostream>
using namespace std;

class ClassA {
	int b;
	public:
		ClassA (int i) : b(i) {}
		virtual void f(ClassA *t) { cout << t->b << endl; }
};

class ClassB : public ClassA {
	int d;
	public:
		ClassB(int i=0, int j=0) : ClassA(i), d(j) { }
		void f(ClassB *t) { cout << t->d << endl; }
};

int main() {
	ClassA *t1 = new ClassB(1,2);
	t1->f(new ClassB);
	return 0;
}