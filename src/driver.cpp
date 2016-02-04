/* Filename: driver.cpp
 * Author: Yancy Carrasco
 * Date: December 17, 2015
 * Description: Driver program for a game of TicTacToe
 */


#include "TicTacToe.h"
#include <stdlib.h>

main()
{
	TicTacToe game;
	bool TopMenu = true;
	
	cout  << endl;
	
	 cout << "*******************************************\n"
	      << "*            CLASSIC TICTACTOE            *\n"
	      << "*            BY YANCY CARRASCO            *\n"
	      << "*******************************************\n";
	 
	 game.inputGameInfo();
	 
	 cout << endl;
	 cout << endl;
	 
	 cout << "Thank you! Let's Begin";
	 
	 cout << endl;
	 cout << endl;
	 
	 do
	 {
		cout << "**************************************************\n"
		     << "*                                                *\n";
		cout << "* Please select from the following options:      *\n" 
		     << "*                                                *\n"                           
	         << "*                                                *\n"; 
		cout << "* (1) Play A New Game                            *\n"
			 << "* (2) View Game Statistics                       *\n"
			 << "* (3) Exit the program                           *\n"
			 << "*                                                *\n" 
	         << "**************************************************\n";
			 
		cout << endl;
		cout << endl;  
		int selection = 0;
		cout << "ENTER SELECTION HERE: ";
		cin  >> selection;
	 
		cout << endl;
		cout << endl;
	 
		switch (selection)
		{
			case 1: //Play A New Game of TicTacToe
			{
				game.initiateGame();
				
				cout << endl;
				
				game.PlayerMovement();
				
				cout << endl;
				cout << endl;
				
				cout << "**************************************************************\n";
				cout << "Thanks For Playing! You will now be returned to the Main Menu.\n";
				cout << "**************************************************************\n";
				
				cout << endl;
				cout << endl;
				
				break;
			}
			
			case 2: //View Game Statistics
			{
				cout << endl;
				cout << endl;
				
				TicTacToe::GeneralSummaryStats();
				game.PlayerStats();
				
				cout << endl;
				cout << endl;
				
				break;
			}
			
			case 3: //Close the Program
			{
				cout << "BELOW IS A SUMMARY OF YOUR GAMES: ";
				
			    cout << endl;   
			    cout << endl;
			    
			    TicTacToe::GeneralSummaryStats(); 
				game.PlayerStats();
				
				cout << endl;
				cout << endl; 
				
				cout << "THANKS FOR PLAYING!";
				
				cout << endl;
				cout << endl; 
			         
				exit(EXIT_SUCCESS);
			}
		}
	}   while (TopMenu);
		 	
}
 
