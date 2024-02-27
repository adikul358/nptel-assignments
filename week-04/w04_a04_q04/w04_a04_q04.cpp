#include <iostream>
using namespace std;

class Test {
	static int s;
	public:
		void incr(int x) { s = s+x; }
		void print() { cout << s; }
};

int Test::s = 10;

int main() {
	Test t1;
	t1.incr(5);
	Test t2;
	t2.incr(10);
	t1.print();
	return 0;
}