#include<iostream>
using namespace std;
class Student{
    string n;
    string s;
    int m;
    protected:
        Student(string _n, string _s, int _m) : n(_n), s(_s), m(_m) {}
    public:
        friend void studDetails(const Student&); //LINE-1
};
class Bengali : public Student{
    public:
        Bengali(string n, int m) : Student(n, "Bengali", m) {} //LINE-2
};
class English : public Student{
    public:
        English(string n, int m) : Student(n, "English", m) {} //LINE-3
};

void studDetails(const Student &st){
    cout << st.n << " --> (" << st.s << " - " << st.m << ")";
}
int main(){
    string s;
    int m, n;
    Student *st;
    cin >> m >> s >> n;
    if (m==1)
        st = new Bengali(s, n);
    else if (m==2)
        st = new English(s, n);
    studDetails(*st);
    return 0;
}