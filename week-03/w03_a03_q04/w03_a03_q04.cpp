#include <iostream>
using namespace std;
class CharSeq {
	char x, y;
	public:
		CharSeq(char _x, char _y): x(_x), y(_y) { }
		CharSeq(CharSeq &c): x(c.x), y(c.y) { }
		void change(CharSeq *new_c) { this = new_c; }
		void show() { cout << x << ", " << y << endl; }
};

int main() {
	CharSeq c1('a', 'c');
	CharSeq c2('o', 'k');
	CharSeq c3(c1);
	c3.change(&c2);
	c3.show();
	return 0;
}