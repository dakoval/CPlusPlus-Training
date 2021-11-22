//
//  Account.hpp
//  11_Classes
//
//  Created by David on 11/22/21.
//

#ifndef Account_h
#define Account_h

#include <string>

class Account{
private:
    std::string name;
    double balance;
public:
    void set_balance(double bal){balance=bal;}
    double get_balance(){return balance;}
    
    void set_name(std::string n);
    std::string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    
    Account(){
        name="None";
        balance = 0.0;
    }
    Account(std::string s){
        name = s;
        balance =0.0;
    }
    Account(std::string s, double bal){
        name =s;
        balance = bal;
    }
    
    
    ~Account(); // destructor
};

#endif /* Account_h */
