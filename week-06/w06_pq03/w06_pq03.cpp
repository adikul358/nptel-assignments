#include<iostream>
using namespace std;
class A{
    public:
        A(){ cout << "11 "; }
        A(int n){ cout << n + 2 << " "; }
				~A(); //LINE-1
};

class B : public A{
    public:
        B(int n) : A(n)  //LINE-2
        { 
            cout << n + 5 << " 22 "; 
        } 
        B(){ cout << "21 "; }
        virtual ~B(){ cout << "22 "; }
};

A::~A(){ cout << "12 "; }

int main(){
    int i;
    cin >> i;
    A *pt = new B(i);
    delete pt;
    return 0;
}