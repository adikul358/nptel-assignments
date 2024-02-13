#include <iostream>

using namespace std;

#define THRICE(X) (X)*(X)

int main(){
    int n;
    cin >> n;
    cout << THRICE(n+1);
    return 0;
}