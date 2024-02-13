#include <iostream>
using namespace std;
#define DOUBLE1(x) x + x
#define DOUBLE2(x) 2 * x

int main() {
	int a=2;
	int a_e1 = DOUBLE2(a++);
	int a_e2 = DOUBLE1(a++);
	cout << a_e2 << " " << a_e1 << endl;
	return 0;
}