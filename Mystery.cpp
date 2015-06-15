/**********************************************
 * Program Filename: Mystery.cpp
 * Author: Tiffany Smalley
 * Date: 6/8/15
 * Description: This is the driver program for the
 * train mystery game
 *********************************************/
#include "Room.hpp"
#include "Room.cpp"
#include "Dining.hpp"
#include "Dining.cpp"
#include"Passenger.hpp"
#include"Passenger.cpp"
#include"Conductor.hpp"
#include"Conductor.cpp"
#include"Player.hpp"
#include"Player.cpp"
#include<iostream>
#include<string>
#include<vector>

//function prototypes
void clueText(string);
void charText(string);
void Correct();
void Incorrect();
	
int main()
{
	int roomno, timetaken, timeleft, choice;
	string whichClue, whichChar; 
	vector<string> bcase; 
	int accuse;
 
	Dining diningcar("flag","chef");
	Room *dcar = &diningcar;
	Passenger pass9("weapon","aide");
	Room *p9 = &pass9;
	Passenger pass8("body","engineer");
	Room *p8 = &pass8;
	Passenger pass7("usb","fan");
	Room *p7 = &pass7;
	Passenger pass6("wrist","mib");
	Room *p6 = &pass6; 
	Passenger pass5("cab", "conspiracy");
	Room *p5 = &pass5; 
	Passenger pass4("med", "me");
	Room *p4 = &pass4;
	Passenger pass3("pizza","silent");
	Room *p3 = &pass3;
	Passenger pass2("golf","suit");
	Room *p2 = &pass2;
	Conductor conductor("footprint","conduct");
	Room *cond = &conductor;
	
	dcar->setNext(p9);dcar->setPrev(NULL);dcar->setUp(NULL);dcar->setDown(NULL);
	p9->setNext(p8);p9->setPrev(dcar);p9->setUp(NULL);p9->setDown(NULL);
	p8->setNext(p7);p8->setPrev(p9);p8->setUp(NULL);p8->setDown(NULL);
	p7->setNext(p6);p7->setPrev(p8);p7->setUp(NULL);p7->setDown(NULL);
	p6->setNext(p5);p6->setPrev(p7);p6->setUp(NULL);p6->setDown(NULL);
	p5->setNext(p4);p5->setPrev(p6);p5->setUp(NULL);p5->setDown(NULL);
	p4->setNext(p3);p4->setPrev(p5);p4->setUp(NULL);p4->setDown(NULL);
	p3->setNext(p2);p3->setPrev(p4);p3->setUp(NULL);p3->setDown(NULL);
	p2->setNext(cond);p2->setPrev(p3);p2->setUp(NULL);p2->setDown(NULL);
	cond->setNext(NULL);cond->setPrev(p2);cond->setUp(NULL);cond->setDown(NULL);

	Room *current;

	Player player(p8, 190);
	Player* play;
	cout << "You are a police officer, currently off duty on medical"<<endl;
	cout << "leave after you accidentally killed an undercover officer."<<endl;
	cout << "The train is on the last leg of its journey with" <<endl;
	cout << "only 190 minutes (3 hours and 10 minutes) left until"<<endl;
	cout << "your destination."<< endl;
	cout << "After a meal in the dining car (car 10, the last one)" << endl;
	cout << "you head through the train toward your passenger car (car 4)" <<endl;
	cout << "when you stumble upon a dead body in car 8 on the way..." << endl;  
	cout << "As the only officer on the train, you are asked to help investigate the murder" << endl;
	cout << "There is one clue and one person to talk to in each car."<<endl;
	cout << "You can only fit 5 clues in your briefcase- be careful not to add duplicates!"<<endl;
	cout << "You can move through a room (costs 5 minutes)"<<endl;
	cout << "or you can pick up the clue (10 minutes) or talk to the person (10 minutes)"<< endl;
	cout << "There are 10 cars on the train, the caboose is a dining car, the front is the conductor train"<<endl;
	cout << "and the cars in between are al passenger cars."<<endl;    
	cout << "You must solve the mystery before the train reaches it's destination."<<endl;  
	cout << "Your time (190 minutes) starts now."<< endl;
	cout << "Enter 0 to continue..."<<endl;
	cin >> choice;
	cout << string(50, '\n'); 
	cout << "What do you want to do?" << endl;

	while (player.getTime() != 0)
	{
		cout << "1. Check clue in car & add to case"<< endl;
		cout << "2. Talk to person in car"<<endl;
		cout << "3. Move one car forward"<<endl;
		cout << "4. Move one car back"<<endl;
		cout << "5. Show case clues" <<endl;
		cout << "6. Show current car info"<<endl;
		cout << "7. Accuse person in current car"<<endl;
		cout << "(Option 7 is not available until 1 hour has elapsed)"<<endl;			
	   	cout << "99. Reveal solution"<<endl;
		cin >> choice;

	if (choice == 1)
	{
		current = player.getRoom();
		whichClue = current->getClue();
		clueText(whichClue);
		player.setTime(10);	
		if(bcase.size()>=5)
		{cout << "Case is full"<<endl;} 
		else
		{
		bcase.push_back(whichClue);
		cout << "This clue has been added to your case"<<endl;
		}

		cout << "Time remaining: " << player.getTime()<< " minutes."<< endl;
		cout << "***********************"<<endl;
	}

	if (choice == 2)
	{
		current = player.getRoom();
		whichChar = current->getChar();
		charText(whichChar);
		player.setTime(10);
		cout << "Time remaining: " << player.getTime()<< " minutes.";
		cout << "************************"<<endl;
	}

	if (choice == 3) //go forward a room
	{
		player.setTime(5); 
		cout << "Time remaining: " << player.getTime()<< " minutes.";
		cout << "************************"<<endl;
		if (player.getRoom() == dcar)
		{player.setRoom(p9); continue;}
		if (player.getRoom() == p9)
		{player.setRoom(p8); continue;}
		if(player.getRoom() == p8)
		{player.setRoom(p7); continue;}
		if(player.getRoom() == p7)
		{player.setRoom(p6); continue;}
		if(player.getRoom() == p6)
		{player.setRoom(p5); continue;}
		if(player.getRoom() == p5)
		{player.setRoom(p4); continue;}
		if(player.getRoom() == p4)
		{player.setRoom(p3); continue;}
		if(player.getRoom() == p3)
		{player.setRoom(p2); continue;}
		if(player.getRoom() == p2)
		{player.setRoom(cond); continue;}
		if(player.getRoom() == cond)
		{cout<<"End of train!"<< endl;}
	}

	if (choice == 4)//Go back a room
	{
	
		cout << "Time remaining: " << player.getTime()<< " minutes.";
		cout << "*************************"<<endl;	
		player.setTime(5); 
		if (player.getRoom() == dcar)
		{ cout << "End of train!"<<endl;}
		if (player.getRoom() == p9)
		{player.setRoom(dcar); continue;}
		if(player.getRoom() == p8)
		{player.setRoom(p9); continue;}
		if(player.getRoom() == p7)
		{player.setRoom(p8); continue;}
		if(player.getRoom() == p6)
		{player.setRoom(p7); continue;}
		if(player.getRoom() == p5)
		{player.setRoom(p6); continue;}
		if(player.getRoom() == p4)
		{player.setRoom(p5); continue;}
		if(player.getRoom() == p3)
		{player.setRoom(p4); continue;}
		if(player.getRoom() == p2)
		{player.setRoom(p3); continue;}
		if(player.getRoom() == cond)
		{player.setRoom(p2); continue;}	
	
	}

	if (choice == 5)
	{
		int size = bcase.size(); //number of elements
		if (size==0)
		{cout << "There is nothing in your case"<<endl;}
		else
		{ 
		for (int i = 0; i<size ; i++)
		{
		cout<< i+1 << ". " << bcase[i] << endl;
		}
		}
		cout << "*********************"<<endl;
	}

	if(choice == 6)
	{
		if (player.getRoom() == dcar)
		{ cout << "You are in the dining car" <<endl;}
		if (player.getRoom() == p9)
		{ cout << "You are in the 9th car"<<endl;}
		if(player.getRoom() == p8)
		{ cout << "You are in the 8th car"<<endl;} 
		if(player.getRoom() == p7)
		{ cout<< "You are in the 7th car"<<endl;}
		if(player.getRoom() == p6)
		{ cout << "You are in the 6th car"<<endl;} 
		if(player.getRoom() == p5)
		{ cout << "You are in the 5th car"<<endl;}
		if(player.getRoom() == p4)
		{ cout << "You are in the 4th car (Your car)"<<endl;} 
		if(player.getRoom() == p3)
		{ cout << "You are in the 3rd car"<<endl;}
		if(player.getRoom() == p2)
		{ cout << "You are in the 2nd car"<<endl;}
		if(player.getRoom() == cond)
		{cout << "You are in the conductor car"<<endl;} 
		
	cout << "Time remaining: " << player.getTime()<< " minutes.";
	cout << "***************************"<<endl;
	}

	if (choice == 7)
	{
		if (player.getTime() > 130)
		{cout << "Not enough time has elapsed to accuse somebody"<<endl;
		cout << "**********************************************"<<endl;}
		else
		{	
			if (player.getRoom() == p4)
			{Correct(); player.setTime(131);}
			else
			{Incorrect(); player.setTime(131);}  
		}
	}
	
	if (choice == 99)
	{
	cout << "You are the murderer. The correct sequence of rooms is" << endl;	
	cout << "prev (9), prev (dining), forward (9), forward(8), forward(7)"<<endl;
	cout << "forward(6), forward(5), forward (4)-> collecting all clues" <<endl;
	cout << "and talking to all people on the way."<<endl;
	cout << "In the end, you must accuse yourself."<<endl;   
	}	

	}
	cout << "Your time has run out. " << endl;
	cout << "You have one chance to accuse someone of the crime"<< endl;
	cout << "Who do you choose?"<< endl;
	cout << "1. Chef"<< endl;
	cout << "2. Ambassador's Aide"<<endl;
	cout << "3. Engineer"<< endl;
	cout << "4. Murder Mystery Fan"<<endl; 
	cout << "5. Conspiracy Theorist"<< endl;
	cout << "6. Weird guy in car 5"<<endl;
	cout << "7. Yourself"<<endl;
	cout << "8. Silent Joe"<< endl;
	cout << "9. Suit Man"<<endl;
	cout << "10. Conductor"<<endl; 	
	cin >> accuse; 

	if (accuse == 4)	
	{Correct();}
	else
	{Incorrect();}	
	

return 0;
}

void clueText(string clueIn)
{
	if (clueIn == "flag")
	{cout << "It appears you have found a flag from the rival country"<<endl;
	cout <<  "of the dead ambassador..."<<endl;}
	else if (clueIn == "weapon")
	{cout << "You have found a 9mm pistol with a silencer, recently fired."<<endl;
	cout << "It was stashed in a trash can."<<endl;}
	else if (clueIn == "body")
	{cout << "The abassador's dead body is in the car, two shots to the head."<<endl;}
	else if (clueIn == "usb")
	{cout << "You find a USB stick. Plugging it into your computer"<<endl;
	cout << "you see instructions for an assasination. There are no"<<endl;
	cout << "identifying details. "<<endl; }
	else if (clueIn == "wrist")
	{cout << "You find a medical wrist band with the number 2217 on it"<<endl;
	cout << "The name is scratched off..."<<endl;}
	else if (clueIn == "cab")
	{cout << "It's an empty cabinet"<< endl;}
	else if (clueIn == "med")
	{cout << "This is your car. You sit for a moment, exhausted from all this commotion."<<endl;
	cout << "You glance over to your anti-psychosis medicine bottle... number 2217"<<endl;}
	else if(clueIn == "pizza")
	{cout << "Sweet. A cheese pizza."<< endl;}
	else if(clueIn == "golf")
	{cout << "You found a golf club"<<endl;}
	else if(clueIn == "footprint")
	{cout << "A bloody footprint??" << endl;}
}

void charText(string charIn)
{
	if (charIn == "chef")
	{cout << "'Hi. I'm just the Chef here, I don't know what happened."<<endl;
	cout << "Stop accusing me of such things...' "<<endl;}  
	else if (charIn == "aide")
	{cout << "You talk to the ambassador's aide.' *Sobbing* Thiss... is just... unthinkable."<<endl;
	cout << "Who me? HOW COULD YOU BE SO CRUEL'"<< endl;}
	else if (charIn == "engineer")
	{cout << "The train engineer is helping you with the investigation 'Wow. How could this day get any worse?"<<endl;
	cout << "What's that you say? Where was I when this happened?"<<endl;
	cout << "In the engine room... of course!'"<< endl;}
	else if (charIn == "fan")
	{cout << "A murder mystery fan... 'Ooo! I just LOVE murder mysteries!'"<<endl;}
	else if (charIn == "mib")
	{cout << "A man in a black suit sits quietly in the room. 'Looks like you did... I mean are doing"<<endl;
	cout << "a great job...'"<<endl;}
	else if (charIn == "conspiracy")
	{cout << "A conspiracy theorist- 'They're everwhere, I tell ya! They're on this train! AND YOU'RE "<< endl;
	cout << "NEXT!!"<<endl;}
	else if (charIn == "me")
	{cout <<"You look in the mirror. 'What a ridiculous series of events.'"<<endl;}
	else if(charIn == "silent")
	{cout << "The man in this car will not talk to you. 'I'm not talking to anyone without my lawyer.'"<< endl;}
	else if(charIn == "suit")
	{cout << "A man in a suit. 'I wish I had more information, I've been sleeping all day, but let me know"<<endl;
	cout << "if I can be of any help at all."<<endl;}
	else if(charIn == "conduct")
	{cout << "You talk to the conductor. 'Thanks for your help in this investigation. I'm sorry to ask this of you'" << endl;
	cout << "considering you're on leave... but I don't know what else to do"<<endl;}
}

void Correct()
{
	cout << "A man in a black suit enters your car."<<endl;
	cout << "'Good work,' he says"<<endl;
	cout << "The train car ceiling door opens, and a harness drops down"<<endl;
	cout << "You look aroud, bewildered."<<endl; 
	cout << "'Let's go!' he exclaims."<< endl;     
}

void Incorrect()
{
	cout << "You are wrong."<< endl; 
	cout << "The passenger you have accused files a complaint with the conductor"<<endl;
	cout << "The uneasy minutes pass... as you reach the destination, you see"<<endl;
	cout << "swarms of police entering the train."<<endl;
	cout << "'GET DOWN ON THE GROUND!' is the last thing you hear"<<endl; 
	cout << "before you go unconcious..."<<endl; 
}  
