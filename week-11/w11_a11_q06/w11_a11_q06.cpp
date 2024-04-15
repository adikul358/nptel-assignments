#include <iostream>
#include <string>
using namespace std;

class person {
	public:
		person(){}
		explicit person (int ID) : ID_{ID} {}
	protected:
		int ID_{0};
		string name_ {"unknown"};
};

class customer : public person {
	public:
		explicit customer (double balance) : balance_{balance} {}
		using person::person;
		void print() {
			cout << "[" << ID_ << ", " << name_ << ", " << balance_ << "]";
		}
	protected:
		double balance_ {0.0};
};

int main() {
	customer c1(1011);
	customer c2(30000.0);
	c1.print();
	c2.print();

	return 0;
}