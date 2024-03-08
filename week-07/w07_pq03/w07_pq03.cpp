#include<iostream>
using namespace std;
class B {
    public:
        B(int i) { }
        B() { cout << 1 << " "; }
};
class D1 : public virtual B { //LINE-1
    public:
        D1(int i);
};
class D2 : public virtual B { //LINE-2
    public:
        D2(int i);
};
class D3 : public virtual B { //LINE-3
    public:
        D3(int i);
};
class DD : public D2, public D1, public D3 { //LINE-4
    public:
        DD (int i) : D1(i), D2(i), D3(i) {
            cout << 2 * i << " ";
        }
};

D1::D1(int i) : B(i) {
    cout << 5 * i << " ";
}
D2::D2(int i) : B(i) {
    cout << 4 * i << " ";
}
D3::D3(int i) : B(i) {
    cout << 3 * i << " ";
}
int main() {
    int i = 0;
    cin >> i;
    DD dd(i);
    return i;
}