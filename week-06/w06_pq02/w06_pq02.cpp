#include <iostream>
using namespace std;
const double ir = 7;
const double bonus = 4;
class FD{
    protected:
        double principal;
    public:
        FD(double _p = 0.0) : principal(_p){}
        double getInterest(){ return principal * ir / 100; }
        double getExtraAmt(){ return principal * bonus / 100 ; }
        virtual double getMaturity() = 0;
};
class Customer : public FD{
    public:
        Customer(double _amt) : FD(_amt){}
        double getMaturity();
};
class Employee : public FD{
    public:
        Employee(double _amt) : FD(_amt){}
        double getMaturity();
};
double Customer::getMaturity(){

    return (principal + FD::getInterest()); //LINE-1
}


double Employee::getMaturity(){

    return (principal + FD::getInterest() + FD::getExtraAmt()); //LINE-2
}

int main(){
    double d;
    cin >> d;
    FD *ep[2] = {new Customer(d), new Employee(d)};
    cout << ep[0]->getMaturity() << " ";
    cout << ep[1]->getMaturity();
    return 0;
}