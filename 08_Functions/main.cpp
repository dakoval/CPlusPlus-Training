//
//  main.cpp
//  08_Functions
//
//  Created by David on 11/15/21.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
double calc_cost(double base_cost,double tax_rate=0.06,double shipping=3.5);
using namespace std;

double calc_cost(double base_cost,double tax_rate, double shipping){
    return base_cost+=(base_cost*tax_rate)+shipping;
}

int main(int argc, const char * argv[]) {

    srand(time(nullptr));
    for(size_t i{1};i<=10;i++){
        cout<<rand()<<endl;
    }

    
    // Default arguements
    cout<<"one Paramenter"<<calc_cost(12.0)<<endl;
    cout<<"two Paramenter"<<calc_cost(12.0,.07)<<endl;
    cout<<"three Paramenter"<<calc_cost(12.0,.07,8)<<endl;
    
    
    
    return 0;
}
