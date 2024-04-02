#include <iostream>
class compex_num{
    public:
        explicit compex_num(double r = 0, double i = 0) : r_(r), i_(i){}
        compex_num operator+(double n){
            compex_num res;
            res.r_ = this->r_ + n;
            res.i_ = this->i_;
            return res;
        }
        compex_num operator+(compex_num c){
            compex_num res;
            res.r_ = this->r_ + c.r_;
            res.i_ = this->i_ + c.i_;
            return res;
        }
        friend std::ostream& operator<<(std::ostream& os, const compex_num& c);
    private:
        double r_, i_;
};

std::ostream& operator<<(std::ostream& os, const compex_num& c){
    os << c.r_ << " + j" << c.i_;
    return os;
}

template <typename t1, typename t2>
void add(t1 n1, t2 n2) {
    typedef decltype(n1+n2) Tmp;    // LINE 3: define new type Tmp
    Tmp sum = n1 + n2;
    
    std::cout << sum << std::endl;
}
int main(){
    int a, b, r1, i1, r2, i2;
    std::cin >> a >> b >> r1 >> i1 >> r2 >> i2;
    compex_num c1(r1, i1);
    compex_num c2(r2, i1);
    add(c1, a);
    add(c1, c2);
    add(a, b);
    return 0;
}