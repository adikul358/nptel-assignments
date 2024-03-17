#include <iostream>
using namespace std;

void f(int i) {
	try{
		if(i< 0)
			throw "negative";
		else if (i> 0)
			throw 1* 1.00;
		else
			throw 0;
	}
	catch (int) { cout<<"int "; }
	catch (float ) {cout<<"float "; }
	catch(const char* ){cout<<"char * ";}
}

int main() {
	for(int i=2; i>= 0;) {
		try{
			f(--i);
		}
		catch(...){cout<<"all ";}
	}

	return 0;
}