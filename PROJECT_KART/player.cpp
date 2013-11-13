#include "player.h"

/*
 * NEVER INCLUDE INCLUDE DIRECTIVES HERE
 * this is the fourth time i am writing in this project. some commits have this comment, some files too.
 **/

void Player::initialize() {
    weaponMain = NULL;
    shield = NULL;
    inv = new Inventory();
}

Player::Player(string name)
{
    initialize();
    this->name = name ;
    this->hitPoints = 100 ;
    this->foodLevel = 100 ;
    this->armour = 10 ;
    this->power = 10 ;
}

Player::Player(string name, int hitPoints, int foodLevel, int armour, int power)
{
    initialize();
    this->name = name ;
    this->hitPoints = hitPoints ;
    this->foodLevel = foodLevel ;
    this->armour = armour ;
    this->power = power ;
}

void Player::eat(Item* food)
{
    if(food->getType() == "food") {
        Food* other = (Food*)food;
        this->foodLevel += other->getFoodValue();

    }


}

void Player::equip(Item* weapon, bool isMain)
{
    if(weapon->getType() == "weapon") {
        Weapon *wea = (Weapon*)weapon;
        if(isMain) {
            if(this->weaponMain != NULL) {
                inv->addItem(this->weaponMain);
            }
            this->weaponMain = wea ;
        } else {
            if(this->shield != NULL) {
                inv->addItem(this->shield);
            }
            this->shield = wea ;
        }
    }
    else {


    }
}

void Player::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints ;
}

int Player::getHitPoints()
{
    return hitPoints ;
}

bool Player::hasFood()
{
    for(int i = 0 ; i < this->inv->size() ; i++) {
        Food *isItFood ;
        Item *item ;
   //what?      *item = this->inv->getItemAt(i) ;
        //there is no need for trycatch here, due the existence of this method: inline string getType() {, it will return the type of the class
        try {
            //isItFood = dynamic_cast<Food*>(item);
        } catch(std::bad_cast) {

        }
    }
}

Player::~Player()
{
    if(inv != NULL) {
        delete inv;
    }
    if(shield != NULL) {
        delete shield;
    }
    if(weaponMain != NULL) {
        delete weaponMain;
    }
}
