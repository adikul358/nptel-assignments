#include <iostream>
using namespace std;

class Flower {
	public:
		virtual void desc() = 0 { cout << "Flower"; }
};

class FlowerWSmell : public Flower {
	void desc() { cout << "Flower with smell"; }
};

class FlowerWOSmell : public Flower {};

class Tuberose: public FlowerWSmell {
	public:
		void desc() { cout << "Tuberose Flower"; }
};

class Jasmine: public FlowerWSmell {
	public:
		void desc() { cout << "Jasmine flower"; }
};

class Sunflower: public FlowerWSmell {
	public:
		void desc() { cout << "Sunflower flower"; }
};

class Dahila: public FlowerWOSmell {};

int main() {
	Flower a;
	FlowerWSmell b;
	FlowerWOSmell c;
	Tuberose d;
	Jasmine e;
	Sunflower f;
	Dahila g;

	return 0;
}