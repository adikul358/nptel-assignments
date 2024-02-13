#include <iostream>
#include <string>
using namespace std;
void print(int a, int b) { // LINE-1

    int r = b + 10 * a;

    cout << r;
}

int main() {
    int p, q;
    cin >> p >> q;
    print(p, q);
    return 0;
}