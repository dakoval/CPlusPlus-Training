//
//  main.cpp
//  06_ProgramFlow
//
//  Created by David on 11/5/21.
//

#include <iostream>
#include <vector>
#include <iomanip>
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
    
    cout<< ((1==1) ? "true":"false")<<endl;
    
    
    for(int i{0}; i<6;i++){
        cout<<i<<endl;
    }
    
    for(int i{0},j{1};i<3;i++,j++){
        cout<<i<<" "<<j<<endl;
    }
    
    
    
    vector<int> nums {10,20,30,40,50};
    for(unsigned i{0};i<nums.size();i++){//unsigned or int
        cout<<nums[i]<<" A "<<endl;
    }
    
    for(auto i:nums){ //can deduce type by using auto
        cout<<i<<" B"<<endl;
    }
    
    for(auto temp:{1,2,3}){ //initialize and use array
        cout<<temp<<"C"<<endl;
    }
    for(auto c:"David"){//iterate over a string
        cout<<c<<endl;
    }
    
    //set and remove precision, total number length, not just decimals
    double round {15.875};
    cout<<round<<setprecision(3)<<" -> "<<round<<setprecision(2)<<" -> "<<round<<setprecision(-1)<<" -> "<<round<<endl;

    
    //2d array
    vector<vector<int>> vec2d
    {
        {1,2,3},
        {10,20,30,40},
        {100,200,300,400,500}
    };
    for(auto vec:vec2d){
        for(auto val: vec){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
