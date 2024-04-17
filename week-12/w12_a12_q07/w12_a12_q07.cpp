#include <iostream>
#include <vector>
#include <thread>
using namespace std;

void add(vector<int>& v) {
	for (int i = 0; i < 2; i++)
		v.push_back(i);
}

int main() {
	vector<int> vi;
	thread t {&add, ref(vi)};
	vi.push_back(3);
	t.join();
	for (auto i : vi)
		cout << i << " ";

	return 0;
}