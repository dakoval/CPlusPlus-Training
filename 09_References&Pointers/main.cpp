//
//  main.cpp
//  09_References&Pointers
//
//  Created by David on 11/15/21.
//

#include <iostream>

using namespace std;


int *int_ptr{nullptr}; //nullptr is the same as 0


int main(int argc, const char * argv[]) {
    
    int num{10};
    cout<<"Value of num is: "<<num<<endl;
    cout<<"Size of num is: "<<sizeof num<<endl;
    cout<<"Pointer of num is: "<<&num<<endl;
    
    // all pointers have same size = 4 bytes
    
    
    int score {100};
    int *score_ptr {&score};
    cout<<*score_ptr<<endl;
    
    *score_ptr=200;
    cout<<*score_ptr<<endl;
    cout<<score<<endl;
    
    
    
    //dynamic memory allocation
    int *int_ptr {nullptr};
    int_ptr = new int; //allocate an integer on the heap
    cout<<"Dynamic Memory ptr: "<<*int_ptr<<endl;
    cout<<"Dynamic Memory: "<<int_ptr<<endl;
    *int_ptr=100;
    cout<<"Dynamic Memory ptr: "<<*int_ptr<<endl;
    cout<<"Dynamic Memory: "<<int_ptr<<endl;
    delete int_ptr; //frees the allocated storage
    
    
    int *array_ptr{nullptr};
    array_ptr=new int[4];
    delete[] array_ptr;
    
    
    //different ways to reference array
    int a[]{1,2,3};
    int *a_ptr{a};
    cout<<"a is at "<<a<<endl;
    cout<<"a_ptr is at "<<a_ptr<<endl;
    cout<<"Reference by a[1] :"<<a[1]<<endl;
    cout<<"Reference by a_ptr[1] :"<<a_ptr[1]<<endl;
    cout<<"Reference by *(a_ptr+1) :"<<*(a_ptr+1)<<endl;
    cout<<"Reference by *(a+1) :"<<*(a+1)<<endl;
    
    
    

    return 0;
}
