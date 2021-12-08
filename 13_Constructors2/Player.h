//
//  Player.h
//  13_Constructors2
//
//  Created by David on 12/8/21.
//

#ifndef Player_h
#define Player_h
#include <string>

class Player{
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
    
public:
    std::string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    
    Player(std::string name_val="None",int health_val=0,int xp_val=0);
    
    Player(const Player &source);
    ~Player();
    
    static int get_num_players();
};

#endif /* Player_h */
