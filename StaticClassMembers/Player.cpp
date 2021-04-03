#include "Player.h"

int Player::numPlayers {0};

Player::Player(std::string name_val, int health_val, int xp_val)
 :name{name_val}, health{health_val}, xp{xp_val} {
     numPlayers++;
 }

Player::Player(const Player &source)
 :Player {source.name, source.health, source.xp} {
    }

Player::~Player() {
    numPlayers--;
}

int Player::getNumPlayers() {
    return numPlayers;
}

