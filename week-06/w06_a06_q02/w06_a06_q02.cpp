#include <iostream>
using namespace std;

class ClassA {
	public:
		virtual void fun() = 0;
};

class ClassB {
	public:
		virtual void fun() {}
};

class ClassC {
	int x;
	public:
		void fun() {}
};

int main() {
	cout << sizeof(ClassA) << " " << sizeof(ClassB) << " " << sizeof(ClassC);
	return 0;
}