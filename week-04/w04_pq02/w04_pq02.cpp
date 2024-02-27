#include<iostream>
using namespace std;

class A {
	int x;
	public:
			A(int _x) : x(_x){ cout << "Class A: "; }
			friend void print(int a, int b); //LINE-1
};
class B{
	int x;
	public:
			B(int _x) : x(_x){ cout << "Class B: "; }
			friend void print(int a, int b); //LINE-2
};

void print(int a, int b){
	if(a == 1)
		cout << A(b).x;
	else
		cout << B(b).x;
}

int main(){
	int a, b;
	cin >> a >> b;
	print(a,b);
	return 0;
}