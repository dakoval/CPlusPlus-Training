//
//  Account_Util.hpp
//  15_Inheritance
//
//  Created by David on 12/14/21.
//

#ifndef Account_Util_hpp
#define Account_Util_hpp

#include <stdio.h>
#include <vector>
#include "Account.hpp"
#include "Savings_Account.hpp"

//Utility helper functions for Account Class
void display(const std::vector<Account> & accounts);
void deposit(std::vector<Account> &accounts,double amount);
void withdraw(std::vector<Account> &accounts, double amount);

//Utility helper functions for Savings_Account Class
void display(const std::vector<Savings_Account> & accounts);
void deposit(std::vector<Savings_Account> &accounts,double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);


#endif /* Account_Util_hpp */
