#include <iostream>

int convert(double d){
    return int(d);
}
double convert(int i){
    return double(i);
}

template <typename t1, typename t2>    //LINE-1
double divide (t1 n1, t2 n2) {   //LINE-2
    return convert(n1) / convert(n2);
}

int main(){
    int a, b;
    double c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << divide(a, b) << " ";
    std::cout << divide(a, c) << " ";
    std::cout << divide(c, d);
    return 0;
}