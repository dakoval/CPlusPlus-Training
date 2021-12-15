//
//  Savings_Account.cpp
//  15_Inheritance
//
//  Created by David on 12/14/21.
//

#include "Savings_Account.hpp"
#include <iostream>

Savings_Account::Savings_Account()
:Savings_Account{0.0,0.0}{
    
}

Savings_Account::Savings_Account(double balance, double int_rate)
:Account(balance),int_rate(int_rate){
    
}

Savings_Account::~Savings_Account(){
    
}

void Savings_Account::deposit(double amount){
    std::cout<<"Savings Account Deposit called with "<<amount<<std::endl;
    amount= amount + (amount*int_rate/100);
    Account::deposit(amount);
}

std::ostream &operator <<(std::ostream &os, const Savings_Account &account){
    os<<"Savings account balance: "<<account.balance<<" Interest rate: "<<account.int_rate;
    return os;
}

