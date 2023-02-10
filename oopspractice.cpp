#include<bits/stdc++.h>
using namespace std;

class Account{
    int AccountNo;
    string name;

    public:
    static int count_accounts;

        Account(int AccountNo,string name){
            this->AccountNo=AccountNo;
            this->name=name;
            count_accounts+=1;
        }

        void getDetails(){
            cout<<"Account No: "<<AccountNo<<" "<<"\t"<<"Name: "<<name<<"\n";
        }
};
int Account::count_accounts=0;

int main(){
    Account *A1= new Account(123456543,"Sasi Kumar");
    Account *A2= new Account(123456543,"Sasi Kumar");
    Account *A3= new Account(123456543,"Sasi Kumar");
    Account *A4= new Account(123456543,"Sasi Kumar");
    A1->getDetails();

    cout<<Account::count_accounts<<endl;

    return 0;
}