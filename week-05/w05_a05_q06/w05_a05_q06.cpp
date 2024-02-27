#include <iostream>
using namespace std;

int x = 10;

class Class1 {
	protected:
		int x;
	public:
		Class1(): x(20) {}
		~Class1() {}
};

class Class2 : Class1 {
	protected:
		int x;
	public:
		Class2() : x(30) {}
		~Class2() {}
		void print() { cout << x << " " << Class1::x << " " << ::x; }
		// void print() { cout << Class2::x << " " << Class1::x << " " << ::x; }
};

int main() {
	Class2 d;
	d.print();
	return 0;
}