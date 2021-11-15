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
#include <string> //string functions

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
    
    
    
    //C++ strings
    string s1; //empty
    string s2 {"David"};
    string s3 {s2};
    string s4 {"David",3}; // Dav
    string s5 {s3,0,2}; // Da
    string s6 (3,'X'); //xxx   - uses () not curly
    cout<<s6<<endl;
    
    string s7 = s2.substr(0,2);
    cout<<s7<<endl;
    cout<<s2.find("a")<<endl;
    cout<<s2.find("a",1)<<endl; //starting index
    
    //getline(cin,s1); //reads the entire line, not just word
    //getline(cin,s1,'x'); //where to stop reading the line at character
    
    
    
    
    return 0;
}
