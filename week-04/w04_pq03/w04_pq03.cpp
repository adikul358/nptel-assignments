#include<iostream>
using namespace std;
class Emp{
    int id;
    mutable double basic;                    //LINE-1
    mutable double salary;                   //LINE-2
    public:
        Emp(int i, double b, double s = 0) : id(i), basic(b), salary(s){ }
        void setBasic(double b) const {        //LINE-3
            basic = b;
        }
        friend double calculate(const Emp&); //LINE-4
};

double calculate(const Emp &e){
    e.salary = e.basic + e.basic * 0.5;
    return e.salary;
}

int main(){
    int a;
    double b,c;
    cin >> a >> b >> c;
    const Emp e(a,b);
    cout << calculate(e) << " ";
    e.setBasic(c);
    cout << calculate(e);
    return 0;
}