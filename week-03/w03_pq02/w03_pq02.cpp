#include <iostream>

using namespace std;

class CharArray {
	char *arr;
	int size;

	public:
		CharArray(int n) : size(n), arr(new char[10]) {} // LINE-1
		~CharArray() { delete[] arr; } // LINE-2
		void EnterEle() {
			for (int i = 0; i < size; i++) 
				cin >> arr[i];
		}
		void FindMax() {
			char max = -1;
			for (int i = 0; i < size; i++) {
				if (max < arr[i])
					max = arr[i];
			}
			cout << "Max: " << max;
		}
};
int main() {
	int n;
	cin >> n;
	CharArray a(n);
	a.EnterEle();
	a.FindMax();
	return 0;
}