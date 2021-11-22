//
//  Account.cpp
//  11_Classes
//
//  Created by David on 11/22/21.
//

#include "Account.hpp"
void Account::set_name(std::string n){
    name =n;
}

std::string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance+=amount;
    return true;
}

bool Account::withdraw(double amount){
    balance-=amount;
    return true;
}
