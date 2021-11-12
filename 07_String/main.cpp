//
//  main.cpp
//  07_String
//
//  Created by David on 11/8/21.
//

#include <iostream>
#include <cctype> //Basic char functions
#include <cstdlib> //Converts strings into numbers
#include <cstring> //basic string functions

using namespace std;

int main(int argc, const char * argv[]) {
    char c = 'a';
    isalpha(c); // is it a letter
    isalpha(c); //letter or digit
    isdigit(c); //is digit
    islower(c); //lowercase
    isprint(c); //printable character
    ispunct(c); //punctuation
    isupper(c); //uppercase
    isspace(c); //whitespace
    
    tolower(c); // convert to lowercase
    toupper(c); // convert to uppercase
    
    char my_name[8];
    strcpy(my_name, "DAVID"); //Input string into char array
    
    char name[50] {};
    strcpy(name, "David");
    strcpy(name, " ");
    strcpy(name, "Koval");
    
    if(strcmp(name, name)==0) //comparing
        cout<<"Same"<<endl;
    
    for(size_t i{0};i<strlen(name);i++){
        if(isalpha(name[i])){
            name[i]=toupper(name[i]);
        }
    }
    cout<<name<<endl;
    
    return 0;
}
