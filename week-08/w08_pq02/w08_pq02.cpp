#include<iostream>
#include<algorithm>
#include<vector>

struct max {    
    max(int cnt = 0, int ss = 0) : cnt_(cnt), ss_(ss)  {}    //LINE-1

    void operator ()(int a){ cnt_++; ss_+= a*a; }    //LINE-2

    int cnt_;    //count of element
    int ss_;     //sum of square of emements
};

int main(){
    std::vector<int> v;
    int n, a;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> a;
        v.push_back(a);
    }
    max mi = for_each(v.begin(), v.end(), max());
    std::cout << "mean = " << (double)mi.ss_/mi.cnt_;
    return 0;	
}