//
//  Account.hpp
//  15_Inheritance
//
//  Created by David on 12/14/21.
//

#ifndef Account_hpp
#define Account_hpp

#include "string"
#include <stdio.h>
#include <iostream>

class Account
{
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name,double balance = def_balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
    ~Account();
};
#endif /* Account_hpp */
