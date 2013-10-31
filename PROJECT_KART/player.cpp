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

void Player::eat(Item food)
{
    if(food.getType() == "food") {
        int value = ((Food)food).getFoodValue();
        this->foodLevel += value;

    }


}

void Player::equip(Weapon weapon, bool isMain)
{
    if(weapon.getType == "weapon") {
        if(isMain == true) {
            this->weaponMain = weapon ;
        } else {
            this->shield = weapon ;
        }
    }
    else {


    }
}
