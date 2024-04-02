#include <iostream>
using namespace std;

class A {
	public:
		A(const int& n) { cout << "#1 "; }
		A(const A& ob) { cout << "#2 "; }
		A(A&& ob) noexcept { cout << "#3 "; }
};

class B : public A {
	public:
		B(const int& n, const int& m): A(n) { cout << "#4 "; }
		B(const B& ob) : A(ob) { cout << "#5 "; }
		B(B&& ob) noexcept : A(ob) { cout << "#6 "; }
};

int main() {
	B b1(1,2);
	B b2(b1);
	B b3 = move(b1);

	return 0;
}