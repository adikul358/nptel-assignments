#include <iostream>
using namespace std;

template <typename T, int N>
class NPrint {
	public:
		NPrint(T v): _v(v) {}
		void print() {
			for (int i = 0; i < N; i++) cout << _v;
		}
	private:
		T _v;
};

int main() {
	int n = 3;
	NPrint<char, n> np('Q');
	np.print();

	return 0;
}