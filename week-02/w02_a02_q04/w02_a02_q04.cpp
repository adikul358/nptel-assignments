#include <iostream>
using namespace std;

void compute(int x1, int x2, int x3, int* x4) {
	x3 = x1 + x2;
	*x4 = x1 * x3;
}

int main() {
	int a = 10, b = 20, c = 1, d = 1;
	compute(a,b,c,&d);
	cout << c << ", " << d;
	return 0;
}