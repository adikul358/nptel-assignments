#include <iostream>
#include <vector>
using namespace std;

int main() {
	int p = 1, s = 0;
	vector<int> vec {1,2,3,4};
	auto evalute = [&](int m, int& sum) {
		for (auto& i : vec) {
			i *= m;
			sum += i;
		}
	};

	int sum = 0;
	evalute(10,sum);
	for (auto i : vec)
		cout << i << ", ";
	cout << sum;

	return 0;
}