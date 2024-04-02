#include <iostream>
using namespace std;

constexpr double pi = 3.14;

namespace v1_0 {
	class circle {
		public:
			circle(int r) : r_(r) {}
			double area() { return pi * r_ * r_; }
		private: 
			int r_;
	};
}

inline namespace v2_0 {
	template<typename T>
	class circle{
		public:
			circle(T r) : r_(r) {}
			double area() {return pi*r_*r_;}
		private:
			T r_;
	};
}

int main() {
	v1_0::circle c1(10.5);
	v2_0::circle<int> c2(10.5);
	circle<double> c3(10.5);
	// v1_0::circle c1(10.5);
	// circle<int> c2(10.5);
	// circle<double> c3(10.5);
	cout << c1.area() << " " << c2.area() << " " << c3.area();

	return 0;
}