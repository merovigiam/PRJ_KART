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
        //delete(name) ;
        //delete hitPoints ;
        //delete armour ;
        //delete power ;
        //delete this ;
		//we dont do this, its local variables, they will get destroyed normally. c++ is not thaaaaat much of "you have to do everything"
		//desstructor would only be needed when we load pictures, because it would be a pointer to a allocated memory. that memmory that needs to be free only. (and other places that have "new")
    }
