#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

struct printer{
	int no_papers = 0;
};

struct scanner{
	int no_papers = 0;
};

mutex mtx_ptr;
mutex mtx_snr;
static printer pr;
static scanner sc;

void spooler1(int n) {
	unique_lock<mutex> lck1(mtx_ptr);
	unique_lock<mutex> lck2(mtx_ptr);
	pr.no_papers += n;
	sc.no_papers += n;
	cout << pr.no_papers << ", " << sc.no_papers << endl;
}

void spooler2	(int n) {
	unique_lock<mutex> lck1(mtx_ptr);
	unique_lock<mutex> lck2(mtx_ptr);
	pr.no_papers += n;
	sc.no_papers += n;
	cout << pr.no_papers << ", " << sc.no_papers << endl;
}

int main() {
	thread t1{spooler1, 5};
	thread t2{spooler2, 8};
	t1.join();
	t2.join();

	return 0;
}