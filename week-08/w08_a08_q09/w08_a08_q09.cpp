#include <iostream>
using namespace std;

struct statWorld {
	statWorld(double m = 0.0) : m_(m) {}
	void operator()(int arr[], int l, int& s) {
		for (int i = 0; i < l; i++) s += arr[i];
		m_ = (double) s / l;
	}
	double m_;
};

int main() {
	int a[] = {1, 2, 3, 4};
	int n = sizeof(a) / sizeof(a[0]);
	statWorld c1;
	int s = 0;
	c1(a, n, s);
	cout << "sum = " << s << ", ";
	cout << "mean = " << c1.m_ << endl;

	return 0;
}