#include <iostream>
using namespace std;

class Father {
	public:
		void print() { cout << "Father" << endl; }
};

class Son: protected Father {
	public:
		Son() { Father::print(); }
		// Son() { (new Father())->print(); }
};

int main() {
	Son t1;
	return 0;
}