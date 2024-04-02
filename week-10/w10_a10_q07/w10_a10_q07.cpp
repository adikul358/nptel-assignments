#include <iostream>
#include <initializer_list>
using namespace std;

template<typename T>
class items {
	public:
		items(){cout << "cont-1 ";}
		items(char c){cout << "cont-2; ";}
		items(initializer_list<T> elms) {cout << "cont-3 ";}
		items(char c, initializer_list<T> elms) {cout << "cont-4 ";}
};

int main() {
	items<char> c1('a');
	items<char> c2({'a', 'b', 'c'});
	items<char> c3{'a','b','c'};
	items<char> c4 = {'a','b','c'};
	items<char> c5('d', {'a','b','c'});

	return 0;
}