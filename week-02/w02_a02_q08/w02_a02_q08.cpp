#include <iostream>
using namespace std;
int main() {
	int n = 97;
	const char *p = &n;
	*p = 'x';
	cout << n;
	return 0;
}