#include <iostream>
using namespace std;

class myClass {
	static int a;
	public: 
		void incr() {
			a = a + 5;
		}
		static void display() {
			cout << a;
		}
};

int myClass::a = 0;

int main() {
	myClass m;
	m.incr();
	myClass::display();
	return 0;
}