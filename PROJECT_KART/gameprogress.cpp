#include "gameprogress.h"

GameProgress::GameProgress()
{
    this->stage = 0;
}

int GameProgress::getStage(){
    return this->stage;
}

void GameProgress::addStage(){
    stage++;
}

void GameProgress::removeStage(){
    stage--;

}

void GameProgress::add(int amount)
{
    stage += amount;
}
