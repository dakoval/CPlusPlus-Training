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

Account::~Account(){
    
}

void Account::deposit(double amount){
    std::cout<<"Account Deposit called with " << amount<<std::endl;
}

void Account::withdraw(double amount){
    std::cout<<"Account Withdraw called with " << amount<<std::endl;
}
