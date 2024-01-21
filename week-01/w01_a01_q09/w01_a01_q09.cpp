#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int iArr[] = { 40,50,10,30,20 };
	sort(iArr, iArr+4);
	for (int i = 0; i < 5; i++) {
		cout << *(iArr + i) << " ";
	}	
	
	return 0;
}