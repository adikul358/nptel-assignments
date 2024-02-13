#include <iostream>
using namespace std;
class myClass {
	private:
		double d;
		public:
			myClass(): d(0,0) { cout << "myClass() "; }
			myClass(double _d) : d(_d) { cout << "myClass(double) "; }
			myClass(const myClass &_od) : d(_od.d) { cout << "myClass(myClass&) "; }
			~myClass() { cout << d << " "; }
};
int main() {
	myClass d1(1,2);
	myClass d2();
	myClass d3 = 2.3;
	myClass d4 = d3;
	return 0;
}