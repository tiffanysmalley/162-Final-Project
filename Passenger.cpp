/***********************************************
 * Program Filename: Passenger.cpp
 * Author: Tiffany Smalley
 * Date; 6/8/15
 * Descritpion: This is the implementation file for the 
 * passenger class
 ***********************************************/
#include"Passenger.hpp"
#include"Room.hpp"
#include<string>

using namespace std;

/***************************************************
 *Constructor
*****************************************************/
Passenger::Passenger(string clu, string cha):Room(clu, cha)
{

}

/***************************************************
 * 	Passenger::getClue()
 *This function returns the clue in the room
 **************************************************/
string Passenger::getClue()
{ 
	return clue;
}

/***************************************************
 * 	Passenger::getChar()
 *This function returns the character in the room
 **************************************************/
string Passenger::getChar()
{ 
	return character;
}

/***************************************************
 * 	Passenger::getType()
 *This function returns the type of car 
 **************************************************/
string Passenger::getType()
{
	return "Passenger"; 
}

  
  
