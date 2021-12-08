//
//  main.cpp
//  13_Constructors2
//
//  Created by David on 12/8/21.
//

#include <iostream>
#include "Player.h"

using namespace std;


void display_active_players(){
    cout<<"Active Players: "<<Player::get_num_players()<<endl;
}
int main(int argc, const char * argv[]) {
    display_active_players();
    Player p1{"P1"};
    display_active_players();
    Player p2{"P2",100};
    display_active_players();
    
    {
        Player p3{};
        display_active_players();
    }
    
    display_active_players();
    Player *p4 = new Player("Enemy");
    display_active_players();
    delete p4;
    display_active_players();
    return 0;
}
