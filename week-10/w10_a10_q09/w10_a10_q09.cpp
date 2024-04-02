#include <iostream>
using namespace std;

struct double_it{
	int n_;
	double_it(int n) : n_(2*n){}
	int operator()() { cout<<"lval "; return n_; }
};

struct triple_it{
	int n_;
	triple_it(int n): n_(3*n){}
	int& operator()() { cout<<"rval "; return n_; }
};

template <typename T>
auto wrapper(T& op) -> decltype(op()) {
// decltype(auto) wrapper(T& op) {
	return op();
}

int main() {
	double_it o1{10};
	triple_it o2(10);

	cout << wrapper(o1) << " ";
	cout << (wrapper(o2) = 20);

	return 0;
}