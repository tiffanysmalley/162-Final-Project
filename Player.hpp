/****************************************
 * Program filename: Player.hpp
 * Author: Tiffany Smalley
 * Date: 6/9/15
 * Description: This is the header file
 * for the player class of the final project
 * CS 162
 ***************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include<string>
#include<vector>

using namespace std;

class Player
{
	private: 
	Room* currentroom;
	int time;
	
	public:
	Player(Room*, int);
	Room* getRoom();
	void setRoom(Room*);
	int getTime();
	void setTime(int);
};
#endif
	
