#include "enemy.h"

    Enemy::Enemy(string name, int hitPoints, int armour, int power)
    {
        this->name = name ;
        this->hitPoints = hitPoints ;
        this->armour = armour ;
        this->power = power ;
    }

    string Enemy::getName()
    {
        return name ;
    }

    void Enemy::setHitPoints(int hitPoints)
    {
        this->hitPoints = hitPoints ;
    }

    int Enemy::getHitPoints()
    {
        return hitPoints ;
    }

    int Enemy::getArmour()
    {
        return armour ;
    }

    int Enemy::getPower()
    {
        return power ;
    }

    Enemy::~Enemy()
    {
        delete(name) ;
        delete hitPoints ;
        delete armour ;
        delete power ;
        delete this ;
    }
