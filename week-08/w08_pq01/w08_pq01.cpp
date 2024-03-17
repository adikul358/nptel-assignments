#include <iostream>

class Computation{
    public:
        int sum(int a, int b) { return a + b; }
        int sub(int a, int b) { return a - b; }
};

int call(Computation *obj, int x, int y, int (Computation::*func)(int,int)){    //LINE-1

    return (*obj.*func)(x, y);    //LINE-2
}

int main() {
    int a, b;
    Computation *c;
    std::cin >> a >> b;
    std::cout << call(c, a, b, &Computation::sum) << " ";
    std::cout << call(c, a, b, &Computation::sub);
    return 0;
}