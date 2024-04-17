#include <iostream>
#include <memory>
using namespace std;

void fun(std::shared_ptr<char> p) {
	shared_ptr<char> tp = p;
	cout << "rc = " << tp.use_count() << " ";
}

int main() {
	shared_ptr<char> p1(new char('a'));
	{
		shared_ptr<char> p2(p1);
		cout << "rc = " << p1.use_count() << " ";
	}
	shared_ptr<char> p3 = p1;
	cout << "rc = " << p1.use_count() << " ";
	fun(p1);
	cout << "rc = " << p1.use_count() << " ";
	p3.reset(new char('A'));
	cout << "rc = " << p1.use_count() << " ";
	return 0;
}