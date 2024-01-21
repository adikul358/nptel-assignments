#include <iostream>
#include <algorithm>
using namespace std;

bool max_str(string p1, string p2) {
	return !lexicographical_compare(p1.begin(), p1.end(), p2.begin(), p2.end());
}

int main() {
	string words[5], word;
	for (int i = 0; i < 5; i++) {
		cin >> word;
		words[i] = word;
	}
	sort(words, words+5, max_str);
	for (int i=0; i<5; i++) {
		cout << words[i] << " ";
	}

	return 0;
}