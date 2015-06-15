/***********************************************
 * Program Filename: Dining.cpp
 * Author: Tiffany Smalley
 * Date; 6/8/15
 * Descritpion: This is the implementation file for the 
 * Dining class
 ***********************************************/
#include"Dining.hpp"
#include"Room.hpp"
#include<string>

using namespace std;

/***************************************************
 *Constructor
*****************************************************/
Dining::Dining(string clu, string cha):Room(clu, cha)
{

}

/***************************************************
 * 	Dining::getClue()
 *This function returns the clue in the room
 **************************************************/
string Dining::getClue()
{ 
	return clue;
}

/***************************************************
 * 	Dining::getChar()
 *This function returns the character in the room
 **************************************************/
string Dining::getChar()
{ 
	return character;
}

/***************************************************
 * 	Dining::getType()
 *This function returns the type of car 
 **************************************************/
string Dining::getType()
{ 
	return "Dining";
}

  
  
  
  
