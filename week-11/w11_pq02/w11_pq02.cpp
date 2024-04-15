#include <iostream>

template<typename t>       //LINE-1
double getmin(t num){ return num; }    //LINE-2

template<typename t, typename ...ts>       //LINE-3
double getmin(t num, ts ...nums){     //LINE-4  
    return num <= getmin(nums...) ? num : getmin(nums...);   //LINE-4
}

int main(){
    int a, b, c;
    double d, e, f, g;
    std::cin >> a >> b >> c;
    std::cin >> d >> e >> f >> g;
    std::cout << getmin(a, b, c) << " ";
    std::cout << getmin(d, e, f, g) << " ";
    std::cout << getmin(a, b, c, d, e, f, g) << " ";
    return 0;
}