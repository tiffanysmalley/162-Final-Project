/***********************************************
 * Program Filename: Room.hpp
 * Author: Tiffany Smalley
 * Date: 6/8/15
 * Description: This is the header file for the 
 * room class
 **********************************************/
#ifndef ROOM_HPP
#define ROOM_HPP
#include<string>

class Room
{
	protected: 
	Room* next;
	Room* previous;
	Room* up;
	Room* down;
	std::string clue;
	std::string character;

	public: 
	Room(std::string, std::string);
	virtual std::string getClue() = 0;
	virtual std::string getChar() = 0;
	void setNext(Room*);
	Room* getNext();
	void setPrev(Room*);
	Room* getPrev();
	void setUp(Room*);
	Room* getUp();
	void setDown(Room*);
	Room* getDown();
};

#endif
