//
//  main.cpp
//  21_ExceptionHandling
//
//  Created by David on 12/18/21.
//

#include <iostream>
using namespace std;

double calc(int a, int b){
    if(a==0)
      throw 0;
    if(b==0)
        throw "abc";
    return static_cast<double>(a)/b;
};


int main(int argc, const char * argv[]) {

    try{
        calc(1,2);
    }catch(int &ex){ //if int error.
        
    }catch(string &ex){//if string error
        
    }catch(...){ //catch all
        
    }
    return 0;
}
