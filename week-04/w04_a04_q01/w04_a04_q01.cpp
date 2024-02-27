#include <iostream>
using namespace std;

class Test {
	int x;
	public:
		Test(int _x) : x(_x) {}
		friend class ReTest;
};

class ReTest {
	int d;
	public:
		ReTest(int x) : d(x) {}
		void update(const Test &r) {
			cout << (d+r.x);
		}
};

int main() {
	Test t(10);
	ReTest rt(20);
	rt.update(t);
	return 0;
}