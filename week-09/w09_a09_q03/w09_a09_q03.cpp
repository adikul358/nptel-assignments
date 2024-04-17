#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout.precision(4);
	cout << setfill('0') << setw(8) << (double) 10/3;
	return 0;
}