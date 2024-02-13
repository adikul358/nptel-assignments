#include <iostream>
using namespace std;
class instance {
	int i;
	public:
		instance(int i_ = 0): i(i_){cout << i << " ";}
		~instance() { cout << i << " "; }
};
instance obj1(2);
int main() {
	instance *pObj = new instance(1);
	instance obj2(3);
	{
		instance obj3(4);
		delete pObj;
	}
	return 0;
}