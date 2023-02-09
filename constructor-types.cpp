#include<bits/stdc++.h>
using namespace std;

class Sasi{
    string name;
    int roll;

    public:
    // Destructor:
    ~Sasi(){
        cout<<"Destructor called\n";
    }
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
    // Sasi *a=new Sasi(); //Default Constructor
    // Sasi s("kumar",1); //statically
    // s.display();

    // Sasi *s1=new Sasi("ram",2); //Parameterized constructor
    // s1->display();

    // Sasi *s2=new Sasi(*s1);// Copy Constructor
    // s2->display();

    // Copy Assignment operator(=)
    Sasi c1("sasi",5);
    c1.display();
    Sasi c2("kumar",6);
    c2.display();

    c2=c1;
    c2.display();
    c1.display();


    Sasi *c3=new Sasi("reddy",45);
    c3->display();
    *c3=c1;
    c3->display();

    delete c3;// for dynamic mememory clearance.
    
    return 0;
}