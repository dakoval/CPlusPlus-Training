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
    //Overloading operators
    {
        Mystring a{"Hello"}; //Overloaded constructor
        a = Mystring{"Hola"}; //Overloaded constructor then Move assingment
        a="Bonjour"; //Overloaded constructor then Move assingment
    }
    
    
    //Overloading operators & member functions
    {
        cout<<boolalpha<<endl;
        
        Mystring larry{"Larry"};
        Mystring moe{"Moe"};
        
        Mystring stooge = larry;
        larry.display();                    //Larry
        moe.display();                      //Moe
        
        cout<<(larry==moe)<<endl;           //false
        cout<<(larry==stooge)<<endl;        //true
        
        larry.display();                    //Larry
        Mystring larry2 = -larry;
        larry2.display();                   //larry
        
        Mystring stooges = larry + "Moe";   //Ok
        //Mystring stooges = "Larry" + moe; //Compile error
        
        Mystring two_stooges = moe +" "+"Larry";
        two_stooges.display();
        
        Mystring three_stooges = moe+" "+larry+" "+"Curly";
        three_stooges.display();
    }
    
    
    //Overloading insertion operator
    {
        Mystring larry{"Larry"};
        Mystring moe{"Moe"};
        Mystring curly;
        
        cout<<"enter name for Curly"<<endl;
        cin >> curly;
        
        cout << "Three names are: "<< larry<<", "<<moe<<", and "<<curly<<endl;
        
        //cin >> larry >>moe>>curly;
        //cout << "Three nmess are: "<< larry<<", "<<moe<<", and "<<curly<<endl;
        
    }
    
    return 0;
}
