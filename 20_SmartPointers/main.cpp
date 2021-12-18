//
//  main.cpp
//  20_SmartPointers
//
//  Created by David on 12/18/21.
//

#include <iostream>
#include <memory>

using namespace std;

class Base{
public:
    virtual void say_hello() const{
        cout<<"Base object"<<endl;
    }
    Base(){cout<<"Constructor Base"<<endl;};
    ~Base(){cout<<"Destructor Base"<<endl;};
};

class Derived: public Base{
public:
    virtual void say_hello() const override {
        cout<<"Derived object"<<endl;
    }
};


int main(int argc, const char * argv[]) {

    unique_ptr<Base> b1 {new Base{}};
    unique_ptr<Base> b2 =make_unique<Base>();
    //b1 = b2 error can't reassign
    unique_ptr<Base> b3;
    b3=move(b2); //how to move smart pointer
    if(!b2)
        cout<<"b2 is now null because of move"<<endl;
    if(b3)
        cout<<"b3 is valid"<<endl;
    
    unique_ptr<Base> b4 = make_unique<Derived>();
    
    
    
    
    
    
    return 0;
}
