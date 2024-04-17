#include <iostream>
#include <functional>
using namespace std;

int compute(int a, int b, int c, const int& d) {
	return (d - (a + b + c));
}

int main() {
	using namespace std::placeholders;
	int x = 5;
	auto fun = std::bind(compute, _3, x, _1, std::cref(x));
	x = 10;
	std::cout << fun(1,2,3);
	return 0;
}