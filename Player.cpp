/*********************************************
 * Program filename: Player.cpp
 * Author: Tiffany Smalley
 * Date: 6/9/15
 * Description: This is the implmentation file for 
 * the player class of the final project for CS 162
 **************************************************/
#include"Player.hpp"
#include<string>
#include<vector>

using namespace std;

/***************************************************
 * Constructor
 ***************************************************/
Player::Player(Room* curroom, int tim)
{
	currentroom = curroom;	
	time = tim;
}

/**************************************************
 * 	Player::getRoom
 * This method returns the room number of the player
 **************************************************/
Room* Player::getRoom()
{
	return currentroom;
}

/**************************************************
 * 	Player::setRoom
 * This method sets the room number of the player
 *************************************************/
void Player::setRoom(Room* curroom)
{
	currentroom = curroom;
}

/*************************************************
 * 	Player::getTime
 * This method returns the amount of time left for 
 * the player
 ************************************************/
int Player::getTime()
{ 
	return time;
}

/************************************************
 *	Player::setTime
 *This method sets the amount of time left for the
 * player.
 ***********************************************/
void Player::setTime(int tim)
{
	time = time - tim;
}


 		
  	 	
	
