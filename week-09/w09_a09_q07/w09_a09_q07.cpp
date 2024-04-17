#include <iostream>
#include <functional>
#include <numeric>
#include <vector>
using namespace std;

int operation1(int x, int y) {
	return x- y;
}
int operation2(int x, int y) {
	return x+y;
}

int compute(vector<int> v1, vector<int> v2, int init) {
	return inner_product(v1.begin(), v1.end(), v2.begin(), init, operation1, operation2);
}

int main() {
	vector<int> vi1 = {11, 22, 33};
	vector<int> vi2 = {1, 2, 3};
	cout << compute(vi1, vi2, 0);

	return 0;
}