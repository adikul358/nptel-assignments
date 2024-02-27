#include<iostream>
#define PI 3.14
using namespace std;
class Area{
    public:
        double getVal(int r){ return (4*PI*r*r); }
};
class Volume{
    public:
        double getVal(int r){ return (4*PI*r*r*r/3); }
};
class Sphere : public Area, public Volume{
    int r;
    public:
        Sphere(int _r) : r(_r){ }
        double getArea(){ return Area::getVal(r); } //LINE-1
        double getPerimeter(){ return Volume::getVal(r); } //LINE-2
};
int main(){
    int a;
    cin >> a;
    Sphere s(a);
    cout << s.getArea() << ", " << s.getPerimeter();
    return 0;
}