/* Filename: name.h
 * Author: Yancy Carrasco
 * Date: December 17, 2015
 * Class: CISC 2000 - Computer Science II
 * Professor: Christine Papadakis - Kanaris
 * Description: Contains declarations for methods 
 * 		and private data members of the Player Class
 */
 
#ifndef PLAYER_H
#define PLAYER_H
 
#include "name.h"

class Player
{
	public:
		
		//Default Constructor
		Player();
		
		//Input Player Information
		void inputPlayerInfo();
		
		//Display Player Name
		void displayPlayerName();
		
		//Display All Player Information
		void displayPlayerInfo();
		
		//Mutator Method - Marker
		bool setMarker(char mark);
		
		//Incrementation Method For Wins
		static void IncrementWinsP1();
		static void IncrementWinsP2();
		
		//Accessor Methods
		string 	   getHandle();
		char       getMarker();
		static int getNumofWinsP1();
		static int getNumofWinsP2();
		
	private:
		
		Name   player;
		string handle;
		char   marker;
		static int winsP1;
		static int winsP2;
};

#endif	
		
	
	
	
