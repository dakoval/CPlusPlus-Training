//
//  main.cpp
//  17_Polymorphism
//
//  Created by David on 12/17/21.
//

#include <iostream>
#include <memory>

using namespace std;
class Base{
public:
    void say_hello() const{
        cout<<"Base object"<<endl;
    }
};

class Derived: public Base{
public:
    void say_hello() const{
        cout<<"Derived object"<<endl;
    }
};

void greetings(const Base &obj){
    cout<<"hello: ";
    obj.say_hello(); //will always bind to Base say hello
};

int main(int argc, const char * argv[]) {
    Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    greetings(b);
    greetings(d);
    
    Base *ptr = new Derived();
    ptr->say_hello(); //Base say hello
    
    unique_ptr<Base> ptr1 = make_unique<Derived>();
    ptr1->say_hello();
    
    
    
    return 0;
}
