#include <iostream>
using namespace std;
int main() {
	char *x = new char('a');
	// char *x = new char(97);
	cout << *x;
	free(x);
	return 0;
}