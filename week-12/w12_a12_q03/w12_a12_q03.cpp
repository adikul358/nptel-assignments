#include <iostream>
#include <thread>
#include <vector>
#include <functional>
using namespace std;

struct summation {
	summation(vector<int>& iv, int* sum) : iv_{iv}, sum_{sum} { }
	void operator()() {
		for (auto& i : iv_) {
			i *= i;
			*sum_ += i;
		}
	}
	vector<int>& iv_;
	int* sum_;
};

int main() {
	vector<int> vec { 1,2,3,4 };
	int res = 0;
	thread t { summation(vec, &res) };
	// thread t { summation(ref(vec), &res) };
	t.join();
	for(auto i : vec)
		cout << i << " ";
	cout << res << " ";

	return 0;
}