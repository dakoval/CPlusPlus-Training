//
//  main.cpp
//  16_BaseConstructs&Destructors
//
//  Created by David on 12/14/21.
//

#include <iostream>

using namespace std;

class Base{
private:
    int value;
public:
    Base() : value{0} {cout<<"Base no-args constructor"<<endl;}
    Base(int x) : value{x}{cout<<"Base (int) overloaded constructor"<<endl;}
    ~Base(){cout<<"Base destructor"<<endl;}
};

class Derived : public Base{
    using Base::Base; // To use the corresponding constructor from Base
private:
    int doubled_value;
public:
    Derived() : doubled_value {0}{cout<<"Derived no-args constructor"<<endl;}
    Derived(int x) : doubled_value{x*2}{cout<<"Derived (int) overloaded constructor"<<endl;}
    ~Derived() {cout<<"Derived destructor"<<endl;}
};

int main(int argc, const char * argv[]) {
    cout<<"---Base------"<<endl;
    Base b;
    cout<<"---Base (int)------"<<endl;
    Base bb{100};
    cout<<"---Derived------"<<endl;
    Derived d;
    cout<<"---Derived (int)------"<<endl;
    Derived dd{100};
    cout<<"---Destructors------"<<endl;
    return 0;
}
