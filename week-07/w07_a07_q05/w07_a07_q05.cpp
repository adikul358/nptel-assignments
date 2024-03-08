#include <iostream>
#include <typeinfo>
using namespace std;
class B { public: ~B(){} };
class D: public B {};

int main() {
	B b;
	D d;
	D *dp = &d;
	B *bp = dp;
	D *dpp = (D*)dp;

	// cout << "typeid(b): " << typeid(b).name() << endl;
	// cout << "typeid(d): " << typeid(d).name() << endl;
	// cout << "typeid(bp): " << typeid(bp).name() << endl;
	// cout << "typeid(dp): " << typeid(dp).name() << endl;
	// cout << "typeid(*bp): " << typeid(*bp).name() << endl;
	// cout << "typeid(*dp): " << typeid(*dp).name() << endl;
	// cout << "typeid(dpp): " << typeid(dpp).name() << endl;
	// cout << "typeid(*dpp): " << typeid(*dpp).name() << endl;

	// Debug Output
	// typeid(b): 1B
	// typeid(d): 1D
	// typeid(bp): P1B
	// typeid(dp): P1D
	// typeid(*bp): 1B
	// typeid(*dp): 1D
	// typeid(dpp): P1D
	// typeid(*dpp): 1D

	cout << (typeid(bp).name() == typeid(dpp).name());
	cout << (typeid(*bp).name() == typeid(*dpp).name());
	cout << (typeid(dp).name() == typeid(dpp).name());
	cout << (typeid(*dp).name() == typeid(*dpp).name());

	return 0;
}