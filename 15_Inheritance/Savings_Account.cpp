//
//  Savings_Account.cpp
//  15_Inheritance
//
//  Created by David on 12/14/21.
//

#include "Savings_Account.hpp"
#include <iostream>

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
:Account{name, balance}, int_rate{int_rate}{
    
}

bool Savings_Account::deposit(double amount){
    std::cout<<"Savings Account Deposit called with "<<amount<<std::endl;
    amount= amount + (amount*int_rate/100);
    return Account::deposit(amount);
}

std::ostream &operator <<(std::ostream &os, const Savings_Account &account){
    os<<"[Savings_Account: "<<account.name<<": "<<account.balance<<","<<account.int_rate<<"%";
    return os;
}

