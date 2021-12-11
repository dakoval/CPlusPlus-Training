//
//  Mystring.cpp
//  14_OverloadingAssingment
//
//  Created by David on 12/11/21.
//

#include "Mystring.hpp"
#include <iostream>
#include <cstring>

//No-args constructor
Mystring::Mystring()
:str{nullptr}{
    str = new char[1];
    *str='\0';
}

//Overloaded Constructor
Mystring::Mystring(const char *s)
:str{nullptr}{
    if(s==nullptr){
        str=new char[1];
        *str = '\0';
    }else{
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
}

//copy constructor
Mystring::Mystring(const Mystring &source)
:str{nullptr}{
    str = new char[strlen(source.str)+1];
    strcpy(str,source.str);
    std::cout<<"copy constructor used"<<std::endl;
}

//Move Constructor
Mystring::Mystring(Mystring &&source)
:str(source.str){
    source.str = nullptr;
    std::cout<<"Move constructor used"<<std::endl;
}

//Destructor
Mystring::~Mystring(){
    if(str==nullptr){
        std::cout<<"Calling destructor for Mystring : nullptr"<<std::endl;
    }else{
        std::cout<<"Calling destructor for Mystring : "<<std::endl;
    }
    delete [] str;
}

//Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<<"Using copy assingment"<<std::endl;
    
    if(this==&rhs)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}

//Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout<<"using move assignment"<<std::endl;
    if(this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str=nullptr;
    return *this;
}








