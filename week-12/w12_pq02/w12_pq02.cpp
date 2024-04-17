#include<iostream>
#include<memory>

class node;
class dlist{
    public:
        dlist() = default;
        void insert(const int& item);
        void forward_traverse();
        void backward_traverse();    
    private:
        std::shared_ptr<node> first = nullptr;
        std::shared_ptr<node> last = nullptr;
};
class node{
    public:
        node() = delete;
        node(int info) : info_{info}, next{nullptr} {}
        friend class dlist;       //LINE-1
    private:
        int info_;
        std::shared_ptr<node> next;
        std::weak_ptr<node> prev;
};
void dlist::forward_traverse(){
    for(auto t = first; t != nullptr; t=t->next)   //LINE-2
        std::cout << t->info_ << " ";
}
void dlist::backward_traverse(){
    for(auto p = last; p != nullptr; p = p->prev.lock())   //LINE-3
        std::cout << p->info_ << " ";
}
void dlist::insert(const int& item){
    std::shared_ptr<node> n = std::make_shared<node>(item);
    if(first == nullptr){
        first = n;
        last = first;
    }
    else{
        n->next = first;
        first->prev = n;
        first = n;
    }
}

int main(){
    dlist dl;
    int n, m;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> m;
        dl.insert(m);
    }
    dl.forward_traverse();
    std::cout << std::endl;
    dl.backward_traverse();
    return 0;
}