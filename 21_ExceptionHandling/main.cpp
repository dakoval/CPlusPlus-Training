//
//  main.cpp
//  21_ExceptionHandling
//
//  Created by David on 12/18/21.
//

#include <iostream>
using namespace std;

class ExceptionA{};
class ExceptionB{};

double calc(int a, int b){
    if(a==0)
      throw 0;
    if(b==0)
        throw "abc";
    if(a==1)
        throw ExceptionA();
    if(a==1)
        throw ExceptionB();
    return static_cast<double>(a)/b;
};


int main(int argc, const char * argv[]) {

    try{
        calc(1,2);
    }catch(int &ex){ //if int error.
        
    }catch(string &ex){//if string error
        
    }catch(ExceptionA &ex){//my own exception
    
    }catch(ExceptionB &ex){
        
    }catch(...){ //catch all
        
    }
    return 0;
}
