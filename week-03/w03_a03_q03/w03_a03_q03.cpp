#include <iostream>
using namespace std;
class Line {
	int _sp;
	int _ep;
	Line(int x, int y) {
		_sp = x;
		_ep = y;
		cout << _sp << " " << _ep;
	}
};

int main() {
	Line l(1,9);
	return 0;
}