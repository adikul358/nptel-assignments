#include <iostream>
using namespace std;
class myclass {
	public: void print() {}
};

template <typename T>
class SmartPointer {
	public:
		explicit SmartPointer(T* ptr = nullptr) {
			cout << "SmartPtr::ctor(), ";
			ptr_ = ptr;
		}
		~SmartPointer() { delete (ptr_); }
		T& operator*() {
			cout << "SmartPtr::operator*(), ";
			return *ptr_;
		}
		T* operator->() {
			cout << "SmartPtr::operator->(), ";
			return ptr_;
		}
	private:
		T* ptr_;
};

int main() {
	SmartPointer<myclass> ptr(new myclass);
	myclass* mc = new myclass;
	*ptr = *mc;
	ptr->print();
	

	return 0;
}