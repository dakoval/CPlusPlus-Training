//
//  Mystring.hpp
//  14_OverloadingAssingment
//
//  Created by David on 12/11/21.
//

#ifndef Mystring_hpp
#define Mystring_hpp

#include <stdio.h>

class Mystring
{
private:
    char *str;
public:
    Mystring();                         // No-args constructor
    Mystring(const char *s);            //Overloaded constructor
    Mystring(const Mystring &source);   //Copy constructor
    Mystring(Mystring &&source);        //Move constructor
    ~Mystring();                        //Destructor
    
    Mystring &operator=(const Mystring &rhs);   //Copy Assignment
    Mystring &operator=(Mystring &&rhs);        //Move Assignment
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
    
};
#endif /* Mystring_hpp */
