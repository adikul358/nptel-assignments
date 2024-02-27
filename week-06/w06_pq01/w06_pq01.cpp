#include<iostream>

using namespace std;

class Base{
		protected:
			int s;

    public:
        Base(int i=0) : s(i){}
        virtual ~Base() {}     //LINE-1
        virtual int fun() = 0; //LINE-2
};

class Derived : public Base{
    int x;
    public:
        Derived(int i, int j) : Base(i), x(j) {}
        ~Derived();
        int fun(){
            return s*x;
        }
};
class Wrapper{
    public:
        void fun(int a, int b){
            Base *t = new Derived(a,b); //LINE-3
            int i = t->fun();
            cout << i << " ";
            delete t;
        }
};

Derived::~Derived(){ cout << int(s/x) << " "; }
int main(){
    int i, j;
    cin >> i >> j;
    Wrapper w;
    w.fun(i,j);
    return 0;
}
