#include <iostream>
using namespace std;

class A {
	public:
		int x;
		A(int _x) : x(_x) {}
};

// class B : public A {
class B : private A {
	public:
		int y;
		B(int _x, int _y) : A(_x), y(_y) {}
};

int main() {
	A t1(1);
	B t2(2,3);
	cout << t1.x << " ";
	cout << t2.x;
	return 0;
}