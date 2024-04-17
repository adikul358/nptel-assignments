#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main() {
	int ai[] = {1,2,3,4,5,6,7};
	list<int> li(3);
	copy(ai + 2, ai + 5, li.begin());
	// copy(&ai[2], &ai[5], li.begin());
	for(list<int>::iterator it = li.begin(); it != li.end(); ++it)
		cout << *it << " ";


	return 0;
}