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
    //Another way of doing this
    friend bool operator== (const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
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
    
    Mystring operator-() const;                     //make lowercase
    Mystring operator+(const Mystring &rhs)const;   //Concatenate
    bool operator==(const Mystring &rhs)const;      //equals
    
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
    
};
#endif /* Mystring_hpp */
