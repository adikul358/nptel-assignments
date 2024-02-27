#include <iostream>
using namespace std;

namespace n1 {
	int a = 1;
	int b = 2;
}

namespace n2 {
	int c = 3;
	int d = 4;
}

int main() {
	using namespace n2;
	cout << a << endl;
	cout << n1::b << endl;
	cout << n2::c << endl;
	cout << d << endl;
	return 0;
}