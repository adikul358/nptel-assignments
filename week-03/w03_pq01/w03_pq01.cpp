#include<iostream>
#include<cmath>
using namespace std;
class Complex_num{
    const int x,y;
    public:
        Complex_num(int _x=0, int _y=0) : x(_x), y(_y) {} //LINE-1
        Complex_num(const Complex_num& c) : x(c.x), y(c.y) {} //LINE-2
        Complex_num addition(Complex_num c) {
            return Complex_num(x+c.x, y+c.y); //LINE-3
        }
				void print(){ cout << "(" << x << ", " << y << ")" << endl; }
};
int main(){
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Complex_num c1(x1,y1), c2(x2,y2);
    Complex_num c3 = c1.addition(c2);
    c3.print();
    return 0;
}