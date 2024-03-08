#include <iostream>
using namespace std;
class A {public: virtual ~A(){} };
class B : public A{};
class C : public A{};



int main() {
	A objA;
	B objB;

	A* pA = dynamic_cast<A*>(&objB); //L1
	pA == NULL ? cout << "A" : cout << "B";

	B* pB = dynamic_cast<B*>(pA); //L2
	pB == NULL ? cout << "A" : cout << "B";

	C* pC = dynamic_cast<C*>(new A); //L3
	pC == NULL ? cout << "A" : cout << "B";

	pC = dynamic_cast<C*>(&objB); //L4
	pC == NULL ? cout << "A" : cout << "B";


	return 0;
}