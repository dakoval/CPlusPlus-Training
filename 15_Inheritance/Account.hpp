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
class Account
{
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);
    Account();
    ~Account();
};
#endif /* Account_hpp */
