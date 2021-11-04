//
//  main.cpp
//  03_Variables
//
//  Created by David on 10/15/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    /*
    3 ways to inialize
    int age=0;
    age = (0);
    age = {0};
    */
    
    int l,w;
    cout<<"enter length and width"<<endl;
    cin>>l>>w;
    cout<<"Size = "<<l*w<<endl;
    
    
    char a; //8 bits
    char16_t b; // 16 bits
    char32_t c; // 32 bits
    wchar_t d; // large set
    
    //Signed by default, unsighed need to specified (Positive only)
    short e; //16 bit
    int f; //16 bit
    long g; //32 bit
    long long h; // 64 bits
    
    float i; //7 decimals
    double j; // 15 decimals
    long double k;//19 decimals
    
    bool boolean=true;//true or false; 0 is false, everything else is true;
    
    long ll (1'000'000'000'000);
    cout<<ll;
    
    cout<<sizeof(long long);
    
    //INT_MIN and INT_MAX LLONG_MIN and LLONG_MAX must use <climit>
    
    
    //constants
    const int aa (3);
    
     
    
    return 0;
}
