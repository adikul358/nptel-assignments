#include <iostream>
using namespace std;

void print(char* str) {}

template<typename Fun, typename Param>
void caller(Fun func, Param p){
	func(p);
}

int main() {
	char s[2] = "0";
	caller(print, s);
	caller(print, 0);
	caller(print, s[1]);
	caller(print, nullptr);

	return 0;
}