#include <iostream>
using namespace std;

int main() {
	const int i = 100;
	const int *pi = &i;
	int *qi = const_cast<int*>(pi);
	// int *qi = (int*)(pi);
	*qi = 200;
	cout << *qi;

	return 0;
}