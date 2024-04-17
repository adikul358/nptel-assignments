#include <iostream>
#include <memory>
using namespace std;

void update(shared_ptr<char>& p) {
	p.reset(new char('B'));
}

int main() {
	auto p1 = make_shared<char>('a');
	auto p2 = p1;
	weak_ptr<char> wp1 = p1;
	weak_ptr<char> wp2 = p1;
	p1.reset(new char('A'));
	if(auto p = wp1.lock())
		cout << *p << endl;
	else
		cout << "wp1 is expired" << endl;
	update(p2);
	if (auto p = wp2.lock())
		cout << *p << endl;
	else
		cout << "wp2 is expired" << endl;
		

	return 0;
}