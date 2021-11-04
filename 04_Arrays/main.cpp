//
//  main.cpp
//  04_Arrays
//
//  Created by David on 10/27/21.
//

#include <iostream>
#include <vector>
using namespace std;


int main(int argc, const char * argv[]) {
    int test_scores [5];
    int score [4] ={1,2,3,4};
    int scores[] = {1,2,3};
    
    vector <int> scores1;
    vector <int> scores2 (2); // specify initial size
    vector <int> scores3 {1,2,3}; //sets those values
    vector <int> scores4 (3,10); // size =3, set all to 10
    
    cout<<scores4.at(2)<<endl;
    cout<<scores4.size()<<endl;
    scores4.at(2)=4;
    scores4.push_back(3); //add value to vector
    
    vector<vector<int>> d2
    {
        {1,2,3,4},
        {1,2,3,4}
    };
    
    
    
    return 0;
}
