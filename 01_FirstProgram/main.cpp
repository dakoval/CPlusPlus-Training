//
//  main.cpp
//  01_FirstProgram
//
//  Created by David on 7/27/21.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int favorite_number;
    std::cout << "Enter your favorite number between 1 and 100:";
    std::cin >> favorite_number;
    std::cout << "That is my favorite number too." << std::endl;
    std::cout << "No really, " <<favorite_number << " is my favorite number."<<std::endl;
    return 0;
}
