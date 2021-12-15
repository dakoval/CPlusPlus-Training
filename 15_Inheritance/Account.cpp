//
//  Account.cpp
//  15_Inheritance
//
//  Created by David on 12/14/21.
//

#include "Account.hpp"
#include <iostream>

Account::Account()
:balance{0.0},name{"Account"}{
    
}

Account::Account(double balance):balance(balance){
    
}

Account::~Account(){
    
}

void Account::deposit(double amount){
    balance += amount;
    std::cout<<"Account Deposit called with " << amount<<std::endl;
}

void Account::withdraw(double amount){
    std::cout<<"Account Withdraw called with " << amount<<std::endl;
    if(balance-amount>=0)
        balance-=amount;
    else
        std::cout<<"insufficient Funds"<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Account &account){
    os<<"Account balance: "<<account.balance;
    return os;
}
