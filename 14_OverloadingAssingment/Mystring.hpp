//
//  Mystring.hpp
//  14_OverloadingAssingment
//
//  Created by David on 12/11/21.
//

#ifndef Mystring_hpp
#define Mystring_hpp

#include <stdio.h>
#include <iostream>

class Mystring
{
    //V2
    friend bool operator== (const Mystring &lhs, const Mystring &rhs);      //equals
    friend Mystring operator-(const Mystring &obj);                         //make lowercase
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);    //Concatenate
    
    //Overloading stream insertion
    friend std::ostream &operator<<(std::ostream &os,const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);
    
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
    
    //V1
    /*
    Mystring operator-() const;                     //make lowercase
    Mystring operator+(const Mystring &rhs)const;   //Concatenate
    bool operator==(const Mystring &rhs)const;      //equals
    */
    
    void display() const;
    
    size_t get_length() const;
    const char *get_str() const;
    
};
#endif /* Mystring_hpp */
