#include<iostream>
using namespace std;
class B{
    protected:
        int b1;
    public:
        B(int b) : b1(b){}
};
class D{
    protected:
        int b2;
    public:
        D(int b) : b2(b){}
};
class DD : public D, public B { //LINE-1

    int d;
    public:
        DD(int x) : d(x), B(x*2), D(x*3) {} //LINE-2

        void show(){
            cout << d << ", " << b1 << ", " << b2;
        }
};

int main(){
    int x;
    cin >> x;
    DD t1(x);
    t1.show();
    return 0;
}