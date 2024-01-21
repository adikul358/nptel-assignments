#include <iostream>
#include <cmath>
using namespace std;

struct point {
	int x, y;
};

double get_len(point p1, point p2) {
	return sqrt(pow((p1.y - p2.y), 2) + pow((p1.x - p2.x), 2));
}

int main() {
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	point p1, p2;
	p1.x = x1;
	p1.y = y1;
	p2.x = x2;
	p2.y = y2;
	cout << get_len(p1, p2);
	return 0;
}