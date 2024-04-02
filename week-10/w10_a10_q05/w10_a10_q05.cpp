#include <iostream>
#include <iomanip>
using namespace std;
constexpr double cr = 12.0;

long double operator"" _FT(long double l) {
	return l;
}
long double operator"" _IN(long double l) {
	return cr*l;
}
class length {
	public:
		length(double l1 = 0, double l2 = 0): l1_(l1), l2_(l2){}
		int operator()(){ return l1_ + l2_; }
	private:
		int l1_,l2_;
};
int main() {
	length len(5.0_FT, 10.0_IN);
	cout << len() << "IN";

	return 0;
}