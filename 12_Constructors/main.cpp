//
//  main.cpp
//  12_Constructors
//
//  Created by David on 11/22/21.
//

#include <iostream>


class Player{
private:
    std::string name;
    int health;
    int xp;
    
public:
    void talk(std::string);
    bool is_dead();
    
    Player(std::string name_val="None",int health_val=0,int xp_val=0);
    
};

Player::Player(std::string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
    }


int main(int argc, const char * argv[]) {
    Player p{"test"};
    
    std::cout << "Hello, World!\n";
    return 0;
}
