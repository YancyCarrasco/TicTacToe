/* Filename: name.cpp
 * Author: Yancy Carrasco
 * Date: December 17, 2015
 * Class: CISC 2000 - Computer Science II
 * Professor: Christine Papadakis - Kanaris
 * Description: Contains definitons for the methods
 *		declared in player.h (Player Class) 
 */
 
#include "player.h"

int Player::winsP1;
int Player::winsP2;
 
//Default Constructor
Player::Player()
{
	handle = "NOT SUPLLIED";
	marker = 'X';
}

//Input Player Information
void Player::inputPlayerInfo()
{
	player.inputName();
	
	cout << "Enter Your Preferred Handle : @";
	cin  >> handle;
	
	char mark;
	int  counter1 = 0;
	do
	{
		//Loop is an error message. It will be invoked 
		//when the user inputs the wrong marker
		while (counter1 > 0)
		{
			cout << endl;
			cout << "***Invalid marker! Marker should be either X or O. Please try again***" << endl;
			cout << endl;
			cout << endl;
			break;
		}
		
			cout << "Enter Your Preferred Marker (X or O): ";
			cin  >> mark;
			counter1++;
	}		while (!setMarker(mark));
}

//Display Player Name
void Player::displayPlayerName()
{
	player.displayName();
}

//Display Player Information
void Player::displayPlayerInfo()
{
	player.displayName();
	cout << "Handle   : @" << handle << endl;
	cout << "Marker   : "  << marker << endl;
}

//Method to Increase Player 1's # of Wins
void Player::IncrementWinsP1()
{
	winsP1++;
}

//Method to Increase Player 2's # of Wins
void Player::IncrementWinsP2()
{
	winsP2++;
}

//Mutator Method - Marker
bool Player::setMarker(char mark)
{
	bool returnMarker = false;
	
	if (mark =='X' || mark =='O')
	{
		marker       = mark;
		returnMarker = true;
	}
	
	return(returnMarker);
}

//Accessor Methods
string Player::getHandle()
{
	return(handle);
}

//Accessor Method - Get Player's Marker Information
char Player::getMarker()
{
	return(marker);
}

//Accessor Method - Get the # of Wins for Player 1
int Player::getNumofWinsP1()
{
	return(winsP1);
}

//Accessor Method - Get the # of Wins for Player 2
int Player::getNumofWinsP2()
{
	return(winsP2);
}


