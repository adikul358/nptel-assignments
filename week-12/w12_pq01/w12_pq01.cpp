#include <iostream>
#include <future>
#include <cmath>

struct prime_numbers{
    const long long n_;
    prime_numbers(const long long& n) : n_(n) { }
    bool is_prime(long long m){
        if (m <= 1)
            return false;
        for (int i = 2; i <= sqrt(m); i++)
            if (m % i == 0)
                return false;
 
        return true;
    }
		long long operator()() {     //LINE-1
        long long num = 2;
        for(int i = 0; i < n_; num++) {
            if (is_prime(num)) {
                ++i;
            }
        }
        return num - 1;
    }
};

long long get_nth_prime(int n){
    auto a = std::async(prime_numbers(n)) ;    //LINE-2

    return a.get();                  //LINE-3    
}
int main() {
    int n;
    std::cin >> n;
    std::cout << get_nth_prime(n);
    return 0;
}