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
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
public:
    Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate=def_int_rate);
    bool deposit(double amount);
};

#endif /* Savings_Account_hpp */
