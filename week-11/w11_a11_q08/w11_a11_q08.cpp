#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> li {10, 20, 30, 40};
	double sum = 0.0;
	
	struct add_closure {
		list<int> val_d;
		double& ref_d;
		add_closure(list<int> li, double& sum) : val_d(li), ref_d(sum) {}
		double operator()(int param) const {
			double res = 0.0;
			for (auto i : val_d) {
				ref_d += i;
				res += (double)i/param;
			}
			return res;
		};
	};
	auto add = add_closure(li,sum);

	double r = add(5);
	cout << sum << ", " << r;


	return 0;
}