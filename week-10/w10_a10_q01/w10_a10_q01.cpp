#include <iostream>
using namespace std;

int main() {
	int n = 10;
	int& rn = n;
	auto tn = rn;

	++tn;
	cout << n << " " << rn << " " << tn;

	return 0;
}