#include <iostream>
using namespace std;

template <typename T>
class ttype {
	public:
		ttype() = default;
		ttype(T val) : val_(val) {}
		ttype(const ttype&) = default;
		ttype& operator= (const ttype&) = delete;
		ttype(ttype&&) = default;
		ttype& operator=(ttype&&) = delete;
	private:
		T val_;

};

int main() {
	ttype<char> d1('A');
	ttype<char> d2(d1);
	ttype<char> d3;
	d3 = d1;
	ttype<char> d4 = move(d1);
	ttype<char> d5;
	d5 = move(d1);


	return 0;
}