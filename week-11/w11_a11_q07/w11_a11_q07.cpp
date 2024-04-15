#include <iostream>
using namespace std;

template<typename T> T pi = T(22L)/7;
int main() {
	pi<int> = 5;
	auto area1 = [](auto(r)) { return pi<decltype(r)> * r * r; }(10);
	auto area2 = [](auto(r)) { return pi<double> * r * r; }(10);
	auto area3 = [](auto(r)) { return pi<decltype(r)> * r * r; }(10.0);
	auto area4 = [](auto(r)) { return pi<int> * r * r; }(10);
	cout << area1 << ", " << area2 << ", " << area3 << ", " << area4;

	return 0;
}