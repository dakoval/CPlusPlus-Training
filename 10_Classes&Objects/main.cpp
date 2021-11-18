//
//  main.cpp
//  10_Classes&Objects
//
//  Created by David on 11/17/21.
//

#include <iostream>

class Player{
  //attributes
public:
    string name;
    int health;
    int xp;
    
    
    //methods
    void talk(string);
    bool is_dead();
    
};
int main(int argc, const char * argv[]) {
    Player a;
    Player b;
    
    Player *c {nullptr};
    c=new Player;
    c->health = 100; //pointer to field in object
    (*c).health = 100;
    delete c;
    
    
    
    
    
    
    return 0;
}
