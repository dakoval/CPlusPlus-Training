//
//  main.cpp
//  15_Inheritance
//
//  Created by David on 12/14/21.
//

#include <iostream>
#include "Account.hpp"
#include "Savings_Account.hpp"

int main(int argc, const char * argv[]) {
    Account acc{};
    acc.deposit(200.00);
    acc.withdraw(100.00);
    
    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(230);
    delete p_acc;
    
    
    Savings_Account sav_acc{};
    sav_acc.deposit(200.00);
    sav_acc.withdraw(100.00);
    
    Savings_Account *p_sav_acc {nullptr};
    p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(230);
    delete p_sav_acc;
    
    return 0;
}
