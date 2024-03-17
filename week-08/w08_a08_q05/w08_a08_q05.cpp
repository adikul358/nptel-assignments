#include <iostream>
using namespace std;

template<typename T1 = char, typename T2 = char>
class TempTest {
	public:
		TempTest(T1 a, T2 b) {
			a_ = a;
			b_ = b;
		}
		void test() {
			cout << "a = " << a_ << ", b = " << b_ << endl;
		}
	private:
		T1 a_;
		T2 b_;
};

int main() {
	TempTest<int> tt1(97, 65);
	TempTest<> tt2(97, 65);
	tt1.test();
	tt2.test();

	return 0;
}