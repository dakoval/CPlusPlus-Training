//
//  main.cpp
//  14_OverloadingAssingment
//
//  Created by David on 12/11/21.
//

#include <iostream>
#include <vector>
#include "Mystring.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Mystring a{"Hello"}; //Overloaded constructor
    a = Mystring{"Hola"}; //Overloaded constructor then Move assingment
    a="Bonjour"; //Overloaded constructor then Move assingment
    
    return 0;
}
