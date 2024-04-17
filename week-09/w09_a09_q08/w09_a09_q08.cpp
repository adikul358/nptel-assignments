#include <iostream>
#include <vector>
using namespace std;

template<typename Itr, typename T>
int findmin(Itr first, Itr last, T& mval)
// int findmin(T first, T last, Itr& mval)
{
	int minpos = 0, i = 0;
	mval = *first++;
	while (first != last) {
		if(*first < mval) {
			mval = *first;
			minpos = i + 1;
		}
		++first;
		++i;
	}
	return minpos;
}

int main() {
	vector<int> vi = {3,2,6,1,6,8,7};
	int mVal = 0;
	int pos = findmin(vi.begin(), vi.end(), mVal);
	cout << pos << " : " << mVal;

	return 0;
}