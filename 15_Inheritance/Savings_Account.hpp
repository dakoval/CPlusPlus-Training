//
//  Savings_Account.hpp
//  15_Inheritance
//
//  Created by David on 12/14/21.
//

#ifndef Savings_Account_hpp
#define Savings_Account_hpp
#include "Account.hpp"

#include <stdio.h>

class Savings_Account:public Account{
    friend std::ostream &operator <<(std::ostream &os, const Savings_Account &account);
protected:
    double int_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double int_rate);
    ~Savings_Account();
    
    void deposit(double amount);
};

#endif /* Savings_Account_hpp */
