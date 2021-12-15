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
protected:
    double balance;
public:
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    Account(double balance);
    ~Account();
};
#endif /* Account_hpp */
