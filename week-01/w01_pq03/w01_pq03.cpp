#include <iostream>
#include <stack>
#include <vector>

void printReverseOrder(std::vector<std::string> words) {
	std::stack<std::string> s;

	for (int i = 0; i < words.size(); i++) {
		s.push(words[i]);
	}
	while (!s.empty()) {
		std::cout << s.top() << " ";
		s.pop();
	}
}

int main() {
	int n;
	std::cin >> n;
	std::vector<std::string> vec;
	for (int i = 0; i < n; i++) {
		std::string wd;
		std::cin >> wd;
		vec.push_back(wd);
	}
	printReverseOrder(vec);
	return 0;
}
