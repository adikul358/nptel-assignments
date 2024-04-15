#include <iostream>
class payment{
    public:
        virtual void pay() = 0;
};

class upi_payment : public payment {
    public:
        upi_payment(const int& upi_num) : upi_num_{upi_num}{ 
            std::cout << "lvalue" << " "; 
        }
        upi_payment(int&& upi_num) : upi_num_{upi_num}{
            std::cout << "rvalue" << " "; 
        }
        void pay(){ std::cout << upi_num_ << " "; }
    private:
        int upi_num_;
};

class bank_transfer : public payment {
    public:
        bank_transfer(const int& acc_no) : acc_no_(acc_no){
            std::cout << "lvalue" << " "; 
        }
        bank_transfer(int&& acc_no) : acc_no_(acc_no){ 
            std::cout << "rvalue" << " "; 
        }
        void pay(){ std::cout << acc_no_ << " "; }
    private:
        int acc_no_;
};

template<typename T1, typename T2>          //LINE-1
T1 makePayment(T2&& a){                     //LINE-2
    T1 c(std::forward<T2>(a));
    return c;       //LINE-3
}
int main() {
    int a, b;
    std::cin >> a >> b;
    
    auto p1 = makePayment<upi_payment>(a);
    auto p2 = makePayment<upi_payment>(std::move(a));
    auto p3 = makePayment<bank_transfer>(b);
    auto p4 = makePayment<bank_transfer>(std::move(b));
    std::cout << std::endl;
    p1.pay();
    p2.pay();
    p3.pay();
    p4.pay();
    return 0;
}