#include <iostream>
using namespace std;
int add(int n1 = 0) { return n1; }
int add(int n1 = 0, int n2 = 0) { return n1 + n2 - 1; }
int add(int n1 = 0, char c1 = 'a') { return n1 + c1 - 1; }
int add(char c1 = 'z', int n1 = 0) { return n1 + c1; }
int main() {
	int c = add(10, 5);
	cout << c << endl;
	return 0;
}