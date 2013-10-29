#include "food.h"
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

void Player::eat(Food *food)
{
    this->foodLevel += food->getFoodValue() ;
}

void Player::equip(Weapon *weapon, bool isMain)
{
    if(isMain == true) {
        this->weaponMain = *weapon ;
    } else {
        this->weaponOff = *weapon ;
    }
}
