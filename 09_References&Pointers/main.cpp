//
//  main.cpp
//  09_References&Pointers
//
//  Created by David on 11/15/21.
//

#include <iostream>

using namespace std;


int *int_ptr{nullptr}; //nullptr is the same as 0


int *create_array(size_t size, int init_value = 0){
    int *new_storage {nullptr};
    new_storage = new int[size];
    for(size_t i{0}; i<size;i++){
        *(new_storage+1)=init_value;
    }
    return new_storage;
}

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
    int a[]{1,2,3,-1};
    int *a_ptr{a};
    cout<<"a is at "<<a<<endl;
    cout<<"a_ptr is at "<<a_ptr<<endl;
    cout<<"Reference by a[1] :"<<a[1]<<endl; //array subscript notation
    cout<<"Reference by a_ptr[1] :"<<a_ptr[1]<<endl; // pointer subscript notation
    cout<<"Reference by *(a_ptr+1) :"<<*(a_ptr+1)<<endl; //pointer offset notation
    cout<<"Reference by *(a+1) :"<<*(a+1)<<endl; //array offset notation
    
    
    //Comparing the data of pointers
    string s1 {"Dave"}, s2{"Dave"};
    string *p1{&s1}, *p2{&s2}, *p3{&s1};
    cout<<boolalpha;
    cout<<"Comparing: (p1==p2) - "<<(p1==p2)<<endl;
    cout<<"Comparing: (p1==p3) - "<<(p1==p3)<<endl;
    cout<<"Comparing: (*p1==*p2) - "<<(*p1==*p2)<<endl;
    cout<<"Comparing: (*p1==*p3) - "<<(*p1==*p3)<<endl;
    
    
    //loop using pointer
    cout<<"--------------------"<<endl;
    while(*a_ptr !=-1){
        cout<<*a_ptr++<<endl;
    }

    
    
    
    
    //Pointers with constants
    int aa{1}, bb{2};
    const int *ptr1 {&aa};
    //*ptr1 = 3; ERROR
    ptr1 = &bb; // VALID
    int *const prt2{&aa};
    *prt2 = 5; // VALID
    //ptr2 = &bb ERROR
    const int *const prt3 {&aa};
    //*prt3 = 5 ERROR
    //prt3 = &bb ERROR
    
    
    //create array with default values
    int *my_array = create_array(5,20);
    
    
    
    return 0;
}
