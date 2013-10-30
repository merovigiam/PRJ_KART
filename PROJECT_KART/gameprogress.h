/**********************************************************************************************//**
 * \file	C:\Users\a13102966\Documents\GitHub\PRJ_KART\PROJECT_KART\gameprogress.h
 *
 * \brief	Declares the gameprogress class.
 **************************************************************************************************/

#ifndef GAMEPROGRESS_H
#define GAMEPROGRESS_H

/**********************************************************************************************//**
 * \class	GameProgress
 *
 * \brief	This class is intended to provide the game progress stage.
 *
 * \author	A 13102966
 * \date	30/10/2013
 **************************************************************************************************/

class GameProgress
{
private:

	/**********************************************************************************************//**
	 * \brief	This variable will keep track of the game progress. This variabl should go from 0 to 100?
	 * 			
	 *	start of the game: 0
	 *	get key to door: 5
	 *	get out of the woods: 10
	 *	get what?
	 *
	 *	game finished: 100
	 *
	 *
	 **************************************************************************************************/

	static int stage;

public:

    GameProgress();

	int getStage();
	void addStage();
	void removeStage();
    void add(int amount);

};

#endif // GAMEPROGRESS_H
