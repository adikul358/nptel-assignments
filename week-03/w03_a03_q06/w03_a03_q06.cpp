#include <iostream>
using namespace std;
int gdata = 10;
class myClass {
	int mdata;
	public:
		myClass(int mdata_ = 0) : mdata(++mdata_) { ++gdata; }
		~myClass() { mdata = 0; gdata--; }
		void print(){ cout << mdata << ", " << gdata << endl;}
};
void func() {
	myClass ob;
	ob.print();
}
int main() {
	myClass ob;
	func();
	ob.print();
	return 0;
}