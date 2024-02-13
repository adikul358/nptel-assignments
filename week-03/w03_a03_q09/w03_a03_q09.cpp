#include <iostream>
using namespace std;

class Pointer {
	int *y, *x, *z;
	public:
		Pointer(int a, int b, int c) : x(seta(a)), y(setb(b)), z(setc(c)) {}
		int *seta(int a) {
			cout << a;
			return (new int(a));
		}
		int *setb(int b) {
			cout << b;
			return (new int(b));
		}
		int *setc(int c) {
			cout << c;
			return (new int(c));
		}
};
int main() {
	Pointer p(1,0,2);
	return 0;
}