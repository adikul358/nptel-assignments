#include <iostream>
using namespace std;

class A {
  public:
    virtual void F() { cout << "A::F()\n"; }
    void G() { cout << "A::G()\n"; }
};
class B : public A {
  public:
    virtual void G() { cout << "B::G()\n"; }
    void H() { cout << "B::H()\n"; }
    virtual void I() { cout << "B::I()\n"; };
};
class C : public B {
  public:
    void G() { cout << "C::G()\n"; }
    virtual void H() { cout << "C::H()\n"; }
};

int main() {
	C c;

	c.F();
	c.G();
	c.H();
	c.I();
	
	return 0;
}
// a)
// A::F(A* const)
// C::G(C* const)
// C::H(C* const)
// B::I(B* const)

// b)
// A::F(A* const)
// B::G(B* const)
// C::H(C* const)
// B::I(B* const)

// c)
// A::F(A* const)
// B::G(B* const)
// B::H(B* const)
// C::I(C* const)

// d)
// A::F(A* const)
// B::G(C* const)
// C::H(C* const)
// C::I(C* const)