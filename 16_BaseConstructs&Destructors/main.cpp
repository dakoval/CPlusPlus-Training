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
    int getValue(){return value;}
};

class Derived : public Base{
private:
    int doubled_value;
public:
    Derived() : Base{},doubled_value {0}{cout<<"Derived no-args constructor"<<endl;}
    Derived(int x) : Base{x}, doubled_value{x*2}{cout<<"Derived (int) overloaded constructor"<<endl;}
    ~Derived() {cout<<"Derived destructor"<<endl;}
    int getDoubledValue(){return doubled_value;}
};

int main(int argc, const char * argv[]) {
    cout<<"---Base------"<<endl;
    Base b;
    cout<<b.getValue()<<endl;
    cout<<"---Base (int)------"<<endl;
    Base bb{100};
    cout<<bb.getValue()<<endl;
    cout<<"---Derived------"<<endl;
    Derived d;
    cout<<d.getDoubledValue()<<":"<<d.getValue()<<endl;
    cout<<"---Derived (int)------"<<endl;
    Derived dd{100};
    cout<<dd.getDoubledValue()<<":"<<dd.getValue()<<endl;
    cout<<"---Destructors------"<<endl;
    return 0;
}
