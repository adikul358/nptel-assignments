#include<iostream>
using namespace std;
class StringClass{
    int *arr;
    int n;
    public:
        StringClass(int k) : n(k + 1), arr(new int[k]) {} //LINE-1
        operator int() { //LINE-2
            return arr[--n];
        }
        int operator =(int &k){ //LINE-3
            int t;
            for(int j = 0; j < k; j++){
                cin >> t;
                this->arr[j] = t;
            }
            return *this;
        }
};

int main(){
    int k;
    cin >> k;
    StringClass str(k);
    str = k;
    for(int i = 0; i < k; i++)
        cout << static_cast<int>(str) << " ";
    return 0;
}