#ifndef WEAPON_H
#define WEAPON_H
#include "item.h"

class Weapon : public Item
{
public:
    Weapon() ;
    Weapon(int power, int magicPower, bool isMainHand);
    int getPower() ;
    int getMagicPower() ;
    bool isMainHand() ;

private:
    int power, magicPower ;
    bool mainHand ;

};

#endif // WEAPON_H
