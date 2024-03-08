#include <iostream>
using namespace std;

int main() {
	char c = 'C';
	int d = 10;
	char *cp = &c;
	int *pd;

	c = static_cast<char>(d);
	d = static_cast<int>(c);
	pd = static_cast<int*>(cp);
	c = static_cast<char>(&c);
	return 0;
}