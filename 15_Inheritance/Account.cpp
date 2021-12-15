//
//  Account.cpp
//  15_Inheritance
//
//  Created by David on 12/14/21.
//

#include "Account.hpp"
#include <iostream>

Account::Account(std::string name, double balance):name{name},balance(balance){
    
}

Account::~Account(){
    
}

bool Account::deposit(double amount){
    std::cout<<"Account Deposit called with " << amount<<std::endl;
    if(amount<0)
        return false;
    else{
        balance +=amount;
        return true;
    }
}

bool Account::withdraw(double amount){
    std::cout<<"Account Withdraw called with " << amount<<std::endl;
    if(balance-amount>=0){
        balance-=amount;
        return true;
    }else
        return false;
}

double Account::get_balance()const{
    return balance;
}
std::ostream &operator<<(std::ostream &os, const Account &account){
    os<<"[Account: "<<account.name<<":"<<account.balance<<"]";
    return os;
}
