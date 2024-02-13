#include <iostream>
using namespace std;

int func(int, char* = 0) { cout<< "invoked 1"; }
double func(double = 0, double = 0) { cout<< "invoked 2"; }
float func(float, float, char* = 0) { cout<< "invoked 3"; }
float func(float n) { cout<< "invoked 4"; }
int func(int n1 = 0, int n2 = 0, int n3 = 0) { cout<< "invoked 5"; }

int main() {
	func(2.1, 3.7f);
}
