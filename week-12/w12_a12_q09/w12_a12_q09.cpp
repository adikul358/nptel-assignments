#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx_rs;
struct resource {int no_of_instances{10}; };

void consume(resource& r, string s, int n) {
	mtx_rs.lock();
	if(n > r.no_of_instances) {
		cout << "consumation by " << s << " : failed" << ", ";
	}
	else {
		r.no_of_instances -= n;
		cout << "consumation by " << s;
		cout << " : instances available = " << r.no_of_instances << ", ";
	}
	mtx_rs.unlock();
}

int main() {
	resource r;
	thread t1 {consume, ref(r), "X", 3};
	thread t2 {consume, ref(r), "Y", 4};
	thread t3 {consume, ref(r), "Z", 5};

	t1.join(); t2.join(); t3.join();


	return 0;
}