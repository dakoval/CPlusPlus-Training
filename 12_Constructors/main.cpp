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
    bool is_dead(int);
    
    Player(std::string name_val="None",int health_val=0,int xp_val=0);
    Player(const Player &p);
    

    ~Player(){}; //desctructor
};

Player::Player(std::string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
    }

//Copying constructor
/*
Player::Player(const Player &source)
    :name{source.name},health{source.health},xp{source.xp}{
}*/
Player::Player(const Player &source) //delagating to use above constructor
    :Player{source.name,source.health,source.xp}{
}

bool Player::is_dead(int xp){
    if(this->xp ==xp) return false;
    else return true;
}


int main(int argc, const char * argv[]) {
    Player p{"test"};
    Player p2{p};
    
    std::cout << "Hello, World!\n";
    return 0;
}
