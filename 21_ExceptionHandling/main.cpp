//
//  main.cpp
//  21_ExceptionHandling
//
//  Created by David on 12/18/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    try{
        if(false){
            throw 0;
        }
    }catch(){
        
    }
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
