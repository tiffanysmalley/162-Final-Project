/******************************************
 * Program Filename: Conductor.hpp
 * Author: TIffany Smalley
 * Date: 6/8/15
 * Description: This is the header file for 
 * the conductor car class
 *****************************************/
#ifndef CONDUCTOR_HPP
#define CONDUCTOR_HPP 
#include"Room.hpp"
#include<string>
 
class Conductor : public Room 
{
	public:
	Conductor(string, string);
	string getClue();
	string getChar();
	string getType();
};
#endif 	
	 
 
