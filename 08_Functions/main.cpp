//
//  main.cpp
//  08_Functions
//
//  Created by David on 11/15/21.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

double calc_cost(double base_cost,double tax_rate=0.0655,double shipping=3.5);
using namespace std;

double calc_cost(double base_cost,double tax_rate, double shipping){
    return base_cost+=(base_cost*tax_rate)+shipping;
}

void print_array(int arr[],size_t size){
    for(int i{0};i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void set_array(int arr[],size_t size,int value){
    for(int i{0};i<size;i++)
        arr[i] =value;
}

int main(int argc, const char * argv[]) {

    srand(time(nullptr));
    for(size_t i{1};i<=10;i++){
        cout<<rand()<<endl;
    }

    
    // Default arguements
    cout<<fixed<<setprecision(2);//Important
    cout<<"one Paramenter "<<calc_cost(12.0)<<endl;
    cout<<"two Paramenter "<<calc_cost(12.0,.07)<<endl;
    cout<<"three Paramenter "<<calc_cost(12.0,.07,8)<<endl;
    
    
    
    cout<<123.5<<endl; //double
    cout<<123.5F<<endl; //float
    
    
    
    int scores[] {1,2,3,4,5};
    int length = sizeof(scores)/sizeof(scores[0]); //get length of array
    print_array(scores, length);
    set_array(scores,length,0);
    print_array(scores,length);
    
    
    
    return 0;
}
