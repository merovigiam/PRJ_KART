#ifndef ENEMY_H
#define ENEMY_H
#include<string>
using namespace std ;

class Enemy
{

private:
    string name ;
    int hitPoints ;
    int armour ;
    int power ;
public:
    Enemy(string name, int hitPoints = 100, int armour = 0 , int power = 10) ;
    ~Enemy() ;
    string getName() ;
    void setHitPoints(int hitPoints) ;
    int getHitPoints() ;
    int getArmour() ;
    int getPower() ;
};

#endif // ENEMY_H
