/******************************************
 * Program Filename: Passenger.hpp
 * Author: TIffany Smalley
 * Date: 6/8/15
 * Description: This is the header file for 
 * the passenger car class
 *****************************************/
#ifndef PASSENGER_HPP
#define PASSENGER_HPP 
#include"Room.hpp"
#include<string>
 
class Passenger : public Room 
{
	public:
	Passenger(string, string);
	string getClue();
	string getChar();
	string getType();
};
#endif 	
	 
 
