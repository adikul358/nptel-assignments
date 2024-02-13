#include<iostream>
using namespace std;
class Constant{
    int x, y;
    mutable int z; //LINE-1
    public:
        Constant(int _x, int _y) : x(_x), y(_y){}
        void change() const { z = x * y; }; //LINE-2
        void print() const { //LINE-3
            cout << "x = " << x << ", y = " << y << ", z = " << z;
        }
};

int main(){
    int i, j;
    cin >> i >> j;
    const Constant m(i, j);
    m.change();
    m.print();
    return 0;
}