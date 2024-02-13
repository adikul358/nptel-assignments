#include <iostream>
using namespace std;

class Student {
	int roll, marks;
	string name;
	public:
		Student(int _roll, string _name, int _marks)
			: roll(_roll), name(_name), marks(_marks) {}
		void incr_marks() { marks++; }
		// void incr_marks() { this->marks++; }
		// void incr_marks() { this.marks++; }
		// void incr_marks() { this->(++marks); }
		void show() {cout << roll << " : " << name << " : " << marks; }
};
int main() {
	Student s(10, "Ram", 85);
	s.incr_marks();
	s.show();
	return 0;
}