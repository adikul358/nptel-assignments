#include <iostream>
using namespace std;

enum class METAL {GOLD, SILVER, TITANIUM, PLATINUM};
enum class CCARD {GOLD, SILVER, TITANIUM, PLATINUM};
enum {GOLD, SILVER, TITANIUM, PLATINUM};

bool check1(METAL type) {
	return type == METAL::GOLD ? true : false;
}

bool check2(METAL type) {
	return type == CCARD::SILVER ? true : false;
}

bool check3(METAL type) {
	type == TITANIUM ? true : false;
}

int main() {


	return 0;
}