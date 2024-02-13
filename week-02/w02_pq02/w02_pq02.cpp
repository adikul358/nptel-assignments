#include <iostream>

using namespace std;

int sqr(int a) { // LINE-1

    return a*a; // LINE-2
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << sqr(x + y);
    return 0;
}