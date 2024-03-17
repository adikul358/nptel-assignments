#include <iostream>
using namespace std;

class complex {
	public:
		complex(int re = 0, int im = 0) : re_(re), im_(im) {}
		int getRe() {return re_;}
		int getIm() {return im_;}
		void setRe(int re) {re_ = re;}
		void setIm(int im) {im_ = im;}
		friend ostream& operator <<(ostream &os, const complex &c);
	private:
		int re_, im_;
};

ostream& operator <<(ostream &os, const complex &c) {
	os << c.re_ << " + i" << c.im_ << endl;
	return os;
}

template <class T> T add(T x, T y) {
	return x + y;
}

template<> complex add(complex x, complex y) {
	complex t;
	t.setRe(x.getRe() + y.getRe());
	t.setIm(x.getIm() + y.getIm());
	return t;
}

int main() {
	complex c1(10, 10);
	complex c2(5, 15);
	cout << add<double>(5.5, 1.4) << ", ";
	cout << add<int>(5,4) << ", ";
	cout << add<complex>(c1, c2);

	return 0;
}