//
//  main.cpp
//  20_SmartPointers
//
//  Created by David on 12/18/21.
//

#include <iostream>
#include <memory>
#include <vector>
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
    
    cout<<"============Shared pointers"<<endl;
    shared_ptr<Base> s1 = make_shared<Base>();
    shared_ptr<Base> s2 = make_shared<Derived>();
    vector<shared_ptr<Base>> vec;
    vec.push_back(s1);
    vec.push_back(s2);
    
    cout<<"object has pointers: "<<s1.use_count()<<endl;// s1 and vector are pointing to it = 2
    
    //Memory is automatical cleared, no need to use delete method
    //unique_ptr - one one pointer for each object
    //shared_prt - multiple things point to the same object, use_count() to see how many pointers object has
    //
    
    cout<<"end--------"<<endl;
    
    
    return 0;
}
