//
//  main.cpp
//  06_ProgramFlow
//
//  Created by David on 11/5/21.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    enum Color{
        red, green, blue
    };
    Color screen_color {green};
    
    switch(screen_color){
        case red:cout<<"red"<<endl;break;
        case green:cout<<"green"<<endl;break;
        case blue:cout<<"blue"<<endl;break;
        default:cout<<"NONE"<<endl;break;
    }
    
    return 0;
}
