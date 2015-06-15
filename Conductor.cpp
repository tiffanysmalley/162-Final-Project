/***********************************************
 * Program Filename: Conductor.cpp
 * Author: Tiffany Smalley
 * Date; 6/8/15
 * Descritpion: This is the implementation file for the 
 * conductor class
 ***********************************************/
#include"Conductor.hpp"
#include"Room.hpp"
#include<string>

using namespace std;

/***************************************************
 *Constructor
*****************************************************/
Conductor::Conductor(string clu, string cha):Room(clu, cha)
{

}

/***************************************************
 * 	Conductor::getClue()
 *This function returns the clue in the room
 **************************************************/
string Conductor::getClue()
{ 
	return clue;
}

/***************************************************
 * 	Conductor::getChar()
 *This function returns the character in the room
 **************************************************/
string Conductor::getChar()
{ 
	return character;
}

/***************************************************
 * 	Passenger::getType()
 *This function returns the type of car 
 **************************************************/
string Conductor::getType()
{
	return "Conductor"; 
}

  
  
