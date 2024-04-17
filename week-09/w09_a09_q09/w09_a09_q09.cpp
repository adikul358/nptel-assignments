#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
using namespace std;

double fun(double x, double y) {
	return x*y;
}

double compute(vector<int>& li) {
	double result = accumulate(li.begin(), li.end(), 0.5, fun);
	return result;
}

int main() {
	int arr[] = {10,20,30,40};
	vector<int> vi(arr, arr+sizeof(arr) / sizeof(*arr));
	cout << compute(vi);

	return 0;
}