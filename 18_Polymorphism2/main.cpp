//
//  main.cpp
//  18_Polymorphism2
//
//  Created by David on 12/17/21.
//

#include <iostream>
using namespace std;

class Account{
public:
    virtual void withdraw(double amount){
        cout<<"Account-Withdraw"<<endl;
    }
    virtual ~Account(){cout<<"Account: Destructor"<<endl;}
};

class Checking:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"Checking-Withdraw"<<endl;
    }
    virtual ~Checking(){cout<<"Checking: Destructor"<<endl;}
};

class Savings:public Account{
public:
    virtual void withdraw(double amount){
        cout<<"Savings-Withdraw"<<endl;
    }
    virtual ~Savings(){cout<<"Savings: Destructor"<<endl;}
};
class Trust:public Savings{
public:
    virtual void withdraw(double amount){
        cout<<"Trust-Withdraw"<<endl;
    }
    virtual ~Trust(){cout<<"Savings: Destructor"<<endl;}
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}

int main(int argc, const char * argv[]) {
    cout<<"====Pointers===="<<endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    
    p1->withdraw(100);
    p2->withdraw(100);
    p3->withdraw(100);
    
    cout<<"====Cleanup===="<<endl;
    delete p1;
    delete p2;
    delete p3;
    
    cout<<"By Ref-------------------"<<endl;
    Account a;
    Account &ref =a;
    ref.withdraw(100);
    
    Trust t;
    Account &ref1 =t;
    ref1.withdraw(100);
    cout<<"-------------------"<<endl;
    Account a1;
    Checking a2;
    Savings a3;
    Trust a4;
    do_withdraw(a1,100);
    do_withdraw(a2,100);
    do_withdraw(a3,100);
    do_withdraw(a4,100);
    cout<<"Destructor--------"<<endl;
    return 0;
}
