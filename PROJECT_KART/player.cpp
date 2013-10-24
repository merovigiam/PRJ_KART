#include "player.h"
#include "inventory.h"

Player::Player(string name, int hitPoints, int foodLevel, int armour, int power)
{
    this->name = name ;
    this->hitPoints = hitPoints ;
    this->foodLevel = foodLevel ;
    this->armour = armour ;
    this->power = power ;
}
