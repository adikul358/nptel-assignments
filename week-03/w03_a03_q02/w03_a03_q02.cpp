#include <iostream>
using namespace std;
class Check {
	public:
		Check() {cout << "Default" << endl;}
		Check(int x=0) {cout << "Parameterized" << endl;}
};

int main() {
	Check m1;
	return 0;
}