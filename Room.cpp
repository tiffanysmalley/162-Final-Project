/********************************************
 * Program Filename: Room.cpp
 * Author: Tiffany Smalley
 * Date: 6/8/15
 * Description: This is the implmementation file
 * for the Room class
 *******************************************/
#include "Room.hpp"
#include<string> 

using namespace std;

/*********************************************
 * 	Room Base Constructor
 * 	  
*********************************************/
Room::Room(string clu, string chara)
{
	clue = clu; 
	character = chara;
}	

/******************************************
 * 	Room::setNext
 *****************************************/
void Room::setNext(Room* nxt)
{
	next = nxt;
}

/*****************************************
 * 	Room::getNext
 *****************************************/
Room* Room::getNext()
{
	return next;
}

/******************************************
 * 	Room::setPrevious
 *****************************************/
void Room::setPrev(Room* prev)
{
	previous = prev;
}

/*****************************************
 * 	Room::getprevious
 *****************************************/
Room* Room::getPrev()
{
	return previous;
}


/******************************************
 * 	Room::setUp
 *****************************************/
void Room::setUp(Room* ahead)
{
	up = up;
}

/*****************************************
 * 	Room::getUp
 *****************************************/
Room* Room::getUp()
{
	return up;
}


/******************************************
 * 	Room::setDown
 *****************************************/
void Room::setDown(Room* dwn)
{
	down = dwn;
}

/*****************************************
 * 	Room::getDown
 *****************************************/
Room* Room::getDown()
{
	return down;
}


 	
 	
 	
 	
