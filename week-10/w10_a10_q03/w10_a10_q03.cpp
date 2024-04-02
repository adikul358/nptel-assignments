#include <iostream>
using namespace std;

class data {
	public: 
		constexpr data(int n=0) : n_{n} {}
	private:
		int n_;
};

const int num_gen1() {
	return 1;
}

constexpr int num_gen2(const int i) {
	return i + 10;
}

int main() {
	int i = 10;
	const int j = 20;
	constexpr data d1(1);
	constexpr data d2(i);
	constexpr data d3(num_gen1());
	constexpr data d4(num_gen2(j));

	return 0;
}