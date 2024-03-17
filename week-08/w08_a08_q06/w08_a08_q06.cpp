#include <iostream>
using namespace std;

template<class Tmp>
Tmp sum(const Tmp &a, const Tmp &b) {
	return a + b;
}

int main() {
	cout << sum(10, 20);
	// cout << sum(10, int('A'));

	return 0;
}