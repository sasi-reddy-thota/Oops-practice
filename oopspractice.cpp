#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int legs;
    int eyes;
    Animal(int legs,int eyes){
        this->legs=legs;
        this->eyes=eyes;
    }
    void getAnimal(){
        cout<<"Leges: "<<legs<<"\teyes :"<<eyes<<'\n';
    }
};
class Dog:public Animal{
    string sound;
    public:
    Dog(string sound, int legs, int eyes):Animal(legs,eyes){
        this->sound=sound;
    }
    void getDog(){
        cout<<"Sound: "<<sound<<"\n";
    }

};

int main(){
    Dog *d=new Dog("Bow bow...",5,6);

    d->getAnimal();
    d->getDog();
    return 0;
}