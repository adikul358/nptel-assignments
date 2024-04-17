#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fl("~/a.txt");
	if (!fl.is_open()) {
		cout << "file does not exist";
	}
	else {
		cout << "file exists";
		fl.close();
	}
	return 0;
}