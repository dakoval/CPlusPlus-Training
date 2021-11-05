//
//  main.cpp
//  05_Operators
//
//  Created by David on 11/1/21.
//

#include <iostream>
#include <compare>
using namespace std;

int main(int argc, const char * argv[]) {
    //long double>double>float>unsigned long>long>unsigned int>int
    //short and char types are always converted to int

    double average = static_cast<double>(100)/3;

    int num1(), num2(), num3();
    
    cout<<boolalpha; //true or false response
    cout<<(1==1)<<endl;
    
    cout<<noboolalpha; // 0 or 1 response
    cout<<(1==1)<<endl;
    
//    Only used in C++20
//    cout<<("1" <=> "1")<<endl;
//    cout<<(2 <=> 1)<<endl;
//    cout<<(1 <=> 2)<<endl;
    
    
    //Compound Operators
/*
     +=
     -=
     *=
     /+
     %=
     >>=
     <<=
     &=
     ^=
     |=
*/
    
    
    
    
    
    return 0;
}
