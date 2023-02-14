#include<bits/stdc++.h>
using namespace std;

class A{
    int x;

    public:
    A(int x){
        this->x=x;
    }
    friend class B;

};

class B{
    public:
    void display(A a){
        cout<<a.x;
    }
};

int main(){
    A *a= new A(5);
    B *b=new B;
    b->display(*a);
    return 0;
}