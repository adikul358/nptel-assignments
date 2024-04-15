#include <iostream>
using namespace std;

class customer {
	public:
		explicit customer() : customer(0) {}
		explicit customer(const int ID) : customer(ID, defaultBalance) {}
		explicit customer(const double balance) : customer(0, balance) {}
		explicit customer(const int ID, const double balance) : ID_{ID}, balance_{balance} {}
		friend ostream& operator<< (ostream& os, const customer& st);
	private:
		int ID_;
		double balance_;
		static constexpr double defaultBalance = 1000.0;
};

ostream& operator<< (ostream& os, const customer& c) {
	os << "[" << c.ID_ << ", " << c.balance_ << "]" << ", ";
	return os;
}

int main() {
	customer c1;
	customer c2(1011);
	customer c3(2000.0);
	customer c4(1012, 3000.0);
	cout << c1 << c2 << c3 << c4;

	return 0;
}