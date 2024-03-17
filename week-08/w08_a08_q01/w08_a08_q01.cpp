#include <iostream>
using namespace std;

void f() {
	try {
		throw 10.8;
	}
	catch (int &e) {
		throw e;
	}
}

int main() {
	try {
		f();
	}
	catch(...){ cout<<"all"; }
	catch(int &e) { cout<<"int"; }
	catch(double &e) { cout<<"double"; }

	return 0;
}