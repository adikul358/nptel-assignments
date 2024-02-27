#include <iostream>
using namespace std;

class Test {
	double mutable x;
	public:
		Test(double _x) : x(_x) {}
		void set(double a) const {
			x = a;
		}
		void print() const {
			cout << x << endl;
		}
};

int main() {
	const Test t(3.14);
	t.set(9.81);
	t.print();
	return 0;
}