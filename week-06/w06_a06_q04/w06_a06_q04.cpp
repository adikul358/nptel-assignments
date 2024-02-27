#include <iostream>
using namespace std;

class myClass {
	public:
		virtual void test() = 0;
};

void myClass::test() {
	cout << "Pure virtual function";
}

int main() {
	myClass m;
	myClass *p = new myClass();
	myClass.test();
	return 0;
}