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

/*
//EqualityV1
bool Mystring::operator==(const Mystring &rhs) const {
    return (std::strcmp(str,rhs.str)==0);
}

//Make LowercaseV1
Mystring Mystring::operator-()const{
    char *buff = new char[std::strlen(str)+1];
    std::strcpy(buff,str);
    for(size_t i=0;i<std::strlen(buff);i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//ConcatenateV1
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[std::strlen(str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,str);
    std::strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}
*/

//Display Method
void Mystring::display()const{
    std::cout<<str<<": "<<get_length()<<std::endl;
}

//length getter
int Mystring::get_length() const {return std::strlen(str);}

//string getter
const char *Mystring::get_str()const {return str;}




//EqualityV2
bool operator==(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str,rhs.str)==0);
}

//Make LowercaseV2
Mystring operator-(const Mystring &obj){
    char *buff = new char[std::strlen(obj.str)+1];
    std::strcpy(buff,obj.str);
    for(size_t i=0;i<std::strlen(buff);i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

//ConcatenateV2
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}



//Overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os<<rhs.str;
    return os;
}

//Overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char[1000];
    in>>buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}
