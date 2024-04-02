#include <iostream>

class ctype { 
    public: 
        ctype() : cp_(nullptr) {  }
        ctype(char c) : cp_(new char(c)) { }
        ctype(ctype& c) : cp_(new char(*(c.cp_))) {}  // LINE-1: copy constructor 
        ctype operator= (ctype& ob) {            // LINE-2: copy assignment 
            if (this != &ob) { 
                delete cp_;  
                cp_ = new char(*(ob.cp_) + 1); 
            } 
            return *this;
        }
        ctype (ctype&& ob) : cp_(new char(*(ob.cp_))) {         // LINE-3: move constructor 
            ob.cp_ = nullptr; 
        }  
        ctype& operator=(ctype&& ob) {               // LINE-4: move assignment 
            if (this != &ob) { 
                cp_ = ob.cp_; 
                ob.cp_ = nullptr; 
            } 
            return *this;
        }
				void print(){
            if(cp_ == nullptr)
                std::cout << "moved, ";
            else
                std::cout << *cp_ << ", ";
        }
        ~ctype() { delete cp_; }
    private:
        char* cp_ = nullptr;
};
int main(){
    char a;
    std::cin >> a;
    
    ctype c1(a);  ctype c2 = c1;
    ctype c3 = c1;
    
    c1.print(); c2.print(); c3.print();
    
    ctype c4 = std::move(c1);
    ctype c5; c5 = std::move(c1);
    c1.print(); c4.print(); c5.print();

    return 0;
}