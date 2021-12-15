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
    Base(const Base &other) : value{other.value}{cout<<"Base copy constructor"<<endl;}
    Base &operator=(const Base &rhs){
        cout<<"Base operator="<<endl;
        if(this==&rhs)
            return *this;
        value = rhs.value;
        return *this;
    }
    ~Base(){cout<<"Base destructor"<<endl;}
    int getValue(){return value;}
    
};

class Derived : public Base{
private:
    int doubled_value;
public:
    Derived() : Base{},doubled_value {0}{cout<<"Derived no-args constructor"<<endl;}
    Derived(int x) : Base{x}, doubled_value{x*2}{cout<<"Derived (int) overloaded constructor"<<endl;}
    Derived(const Derived &other) : Base(other),doubled_value {other.doubled_value}{ cout<<"Derived Copy constructor"<<endl;}
    Derived &operator=(const Derived &rhs){
        cout<<"Derived operator="<<endl;
        if(this == &rhs)
            return *this;
        Base::operator=(rhs);
        doubled_value = rhs.doubled_value;
        return *this;
    }
    ~Derived() {cout<<"Derived destructor"<<endl;}
    int getDoubledValue(){return doubled_value;}
};

int main(int argc, const char * argv[]) {
    cout<<"---Base------"<<endl;
    Base b;
    cout<<b.getValue()<<endl;
    cout<<"---Base (int)------"<<endl;
    Base bb{100};                               // Overloaded Constructor
    cout<<bb.getValue()<<endl;
    Base bb1{bb};                               //Copy Constructor
    bb=bb1;                                     //Copy assignment
    cout<<"---Derived------"<<endl;
    Derived d;
    cout<<d.getDoubledValue()<<":"<<d.getValue()<<endl;
    cout<<"---Derived (int)------"<<endl;
    Derived dd{100};                            //Overloaded Constructor
    cout<<dd.getDoubledValue()<<":"<<dd.getValue()<<endl;
    Derived dd1 {dd};                           //Copy Constructor
    dd =dd1;                                    //Copy assignment
    cout<<"---Destructors------"<<endl;
    return 0;
}
