/******************************************
 * Program Filename: Dining.hpp
 * Author: TIffany Smalley
 * Date: 6/8/15
 * Description: This is the header file for 
 * the dining car class
 *****************************************/
#ifndef DINING_HPP
#define DINING_HPP 
#include"Room.hpp"
#include<string>
 
class Dining : public Room 
{
	public:
	Dining(string, string);
	string getClue();
	string getChar();
	string getType();
};
#endif 	
	 
 
