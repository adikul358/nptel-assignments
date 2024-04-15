#include <iostream>
using namespace std;

class base1 {
	public: 
		base1(const int& n) { cout << "base1 - lvalue : " << n << ", "; }
		base1(int&& n) { cout << "base1 - rvalue : " << n << ", "; }
};
class base2 {
	public:
		base2(const int& n) { cout << "base2 - lvalue : " << n << ", "; }
		base2(int&& n) { cout << "base2 - rvalue : " << n << ", "; }
};

class derived : public base1, public base2 {
	public: 
		template<typename T1, typename T2>
		derived(T1&& n1, T2&& n2) : base1(n1), base2(forward<T2>(n2)) {}
		// derived(T1&& n1, T2&& n2) : base1(forward<T1>(n1)), base2(forward<T2>(n2)) {}
};

int main() {
	int i = 10;
	derived b1(i, move(i));

	return 0;
}