#include <iostream>
using namespace std;

class Test {
	static int a;
	public:
		Test() { a++; }
		static int get() { return a; }
};

int Test::a = 0;

int main() {
	cout << Test::get() << " ";
	Test t[4];
	cout << Test::get();
	return 0;
}