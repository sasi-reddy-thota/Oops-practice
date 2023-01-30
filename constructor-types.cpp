#include<bits/stdc++.h>
using namespace std;

class Sasi{
    string name;
    int roll;

    public:
    //Defalut Constructor:
    Sasi(){
        cout<<"Default constructor called\n";
    }
    //Parametered Constructor:
    //here both data members and arguments are same inorder to differenctiat the names we can use this key word
    Sasi(string name,int roll){
        this->name=name;
        this->roll=roll;
    }

    void display(){
        cout<<name<<" "<<roll<<"\n";
    }
};


int main(){
    Sasi *a=new Sasi(); //Default Constructor
    Sasi s("kumar",1); //statically
    s.display();

    Sasi *s1=new Sasi("ram",2); //Parameterized constructor
    s1->display();

    Sasi *s2=new Sasi(*s1);// Copy Constructor
    s2->display();

    return 0;
}