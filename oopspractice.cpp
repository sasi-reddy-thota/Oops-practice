#include<bits/stdc++.h>
using namespace std;

class Animal{
    int eyes,legs;
    public:
    Animal(int eyes,int legs){
        this->eyes=eyes;
        this->legs=legs;
    }
    void getAnimal(){
        cout<<"Eyes: "<<eyes<<"Legs: "<<legs<<"\n";
    }
};

class Tiger: public Animal{
    int nose;
    public:
    Tiger(int nose,int eyes,int legs):Animal(eyes,legs){
        this->nose=nose;
    }
    void getTiger(){
        getAnimal();
        cout<<"Nose: "<<nose<<"\n";
    }
};
class Cow: public Animal{
    string sound;
    public:
    Cow(string sound,int eyes,int legs):Animal(eyes,legs){
        this->sound=sound;
    }
    void getCow(){
        cout<<"Sound: "<<sound<<"\n";
    }

};
class Cotiger:public Tiger,public Cow{
    int children;
    public:
    Cotiger(int children,int nose,string sound,int eyes,int legs):Cow(sound,eyes,legs),Tiger(nose,eyes,legs){
        this->children=children;
    }
    void getCotiger(){
        getCow();
        getTiger();
        cout<<"Children: "<<children<<"\n";
    }

};
int main(){
   Cotiger *co=new Cotiger(3,1,"how how...",2,4);
   co->getCotiger();
    return 0;
}