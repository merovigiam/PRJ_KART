#ifndef PLAYER_H
#define PLAYER_H

#include <typeinfo>

#include <string>

#include "item.h"
#include "food.h"
#include "weapon.h"
#include "inventory.h"
#include "enemy.h"

using namespace std;

class Player
{
private:
    string name;
    int hitPoints, foodLevel, armour, power ;
    Inventory *inv;
    Weapon *weaponMain, *shield ;
    void initialize();
public:
    Player(string name);
    Player(string name, int hitPoints, int foodLevel, int armour, int power);
    ~Player();
    void attack(Enemy &target) ;
    void eat(Item *food) ;
    void equip(Item *weapon, bool isMain) ; //the characteristic that if a weapon is at the main hand should be at the layer, not inside the weapon.

    void setHitPoints(int hitPoints) ;
    int getHitPoints() ;
    bool hasFood() ;
    inline int getPower()
    {
        return this->power ;
	}



    inline Inventory* getInventory() {
        return inv;
        //to return a pointer to a data i cant change
    }

};

#endif // PLAYER_H
