#include <iostream>
using namespace std;

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	for (auto i : arr)
		i *= 2;
	
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";

	return 0;
}