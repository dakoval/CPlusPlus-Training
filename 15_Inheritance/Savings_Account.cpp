//
//  Savings_Account.cpp
//  15_Inheritance
//
//  Created by David on 12/14/21.
//

#include "Savings_Account.hpp"
#include <iostream>

Savings_Account::Savings_Account()
:int_rate{.03}{
    
}

Savings_Account::~Savings_Account(){
    
}

void Savings_Account::deposit(double amount){
    std::cout<<"Savings Account Deposit called with "<<amount<<std::endl;
}

void Savings_Account::withdraw(double amount){
    std::cout<<"Savings Account Withdraw called with "<<amount<<std::endl;
}
