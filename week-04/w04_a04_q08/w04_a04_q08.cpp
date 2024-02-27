#include <iostream>
using namespace std;

class classA {
	int a = 5;
	public:
		classA(int _a) : a(_a) {}
		int get () { return a; }
};

class classB {
	static classA c1;
	public:
		static int get() {
			return c1.get();
		}
};


int main(void) {
	cout << classB::get();
	return 0;
}


