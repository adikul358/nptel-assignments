#include <iostream>
using namespace std;
class student {
	int roll;
	int marks;

	public:
		student(int _r, int _m) : roll(_r), marks(_m) {}
		void update(int m) const {
			(const_cast <student*> (this))->marks = m;
			// ((student*)(this))->marks = m;
		}
		void showInfo() const {
			cout << roll << " : " << marks;
		}
};

int main(void) {
	const student s(3000, 56);
	s.update(50);
	s.showInfo();
	return 0;
}