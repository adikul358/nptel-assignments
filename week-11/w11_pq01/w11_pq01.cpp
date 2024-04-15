#include <iostream>
#include <functional>
     
int main(){
    std::function<int(int,int)> recPow;            //LINE-1
    recPow = [&recPow](int n,int m) {       //LINE-2
        return m == 1 ? n : n * recPow(n, m - 1); 
    };
    auto print = [&recPow](int n, int m) {          //LINE-3
        std::cout << recPow(n, m); 
    };
    int n, m;
    std::cin >> n >> m;
    print(n, m);
    return 0;
}