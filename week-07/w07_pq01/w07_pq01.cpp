#include<iostream>
using namespace std;
class Test1{
    int a = 10;
    public:
        void show(){
            cout << a ;
        }
        void operator =(int x) { //LINE-1
            a = a + x;
        }
};
class Test2 : public Test1{
    int b = 20;
    public:
        void show(){
            cout << b << " ";
        }
};
void fun(const Test2 &t, int x){
    Test2 &u = const_cast<Test2&>(t); //LINE-2
    u.show();
    Test1 &v = static_cast<Test1&>(u); //LINE-3
    v = x;
    v.show();
}
int main(){
    Test2 t1;
    int x;
    cin >> x;
    fun(t1, x);
		return 0;
}