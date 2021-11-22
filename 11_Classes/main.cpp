//
//  main.cpp
//  11_Classes
//
//  Created by David on 11/22/21.
//

#include <iostream>
#include <string>
#include "Account.hpp"

using namespace std;





int main(int argc, const char * argv[]) {
    Account frank_account;
    frank_account.set_name("Frank");
    frank_account.set_balance(1000.0);

    return 0;
}
