#include <iostream>
using namespace std;

class Test1 { };
class Test2 : public Test1 { };

int main() {
	Test1* t1 = new Test1;
	Test2* t2 = new Test2;
	t2 = static_cast<Test2*>(t1);
	// t2 = reinterpret_cast<Test2*>(t1);

	return 0;
}