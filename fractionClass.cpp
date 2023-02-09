#include<bits/stdc++.h>
using namespace std;

class Fraction{
    int numarator,denominator;
    
    public:
    Fraction(int numarator,int denominator){
        this->denominator=denominator;
        this->numarator=numarator;
    }
    void print(){
        cout<<numarator<<"/"<<denominator;
    }
};

int main(){

    Fraction *f1=new Fraction(23,45);
    f1->print();
    return 0;
}