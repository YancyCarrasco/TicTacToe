/* Filename: TicTacToe.h
 * Author: Yancy Carrasco
 * Date: December 21, 2015
 * Description: Contains declarations for methods 
 * 		and private data members of the TicTacToe Class
 */
 
#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "player.h"
#include "cell.h"
#include "date.h"

class TicTacToe
{
	public:
	
		//Default Constructor
		TicTacToe();
		
		//Constructor to Instantiate the game
		//with specific players
		TicTacToe(const Player &P1, const Player &P2);
		
		//Input Date & Player Information
		void inputGameInfo();
		
		//Method to Present Game Rules
		void gameRules();
		
		//Method to Clear the Game Board
		void ClearBoard();
		
		//Method To Display the Board
		void displayBoard();
		
		//Method to Initiate the Game
		void initiateGame();
		
		//Method to Move Between Players
		void PlayerMovement();
		
		//Mutator Methods
		bool setMarker(int row, int column, int marker);
		
		//Method To Check For Winner
		bool WinnerCheck(char marker);
		
		//Method to Check For Tie
		bool TieCheck(char marker);
		
		//Method To Display Message To Winner
		void WinnerMessage(string handle);
		
		//Method To Display Tie Messaage
		void TieMessage();
		
		//Win/Loss Average Calculator
		static double WinLoseAverageP1();
		static double WinLoseAverageP2();
		
		//Accessor Methods
		static int getNumGamesPlayed();
		static int getCurrentPlayer();
		static int getTotalWins();
		static int getTies();
		
		//Method to Display Summary Stats of Games
		static void GeneralSummaryStats();
		
		//Method to Display Summary of Player Stats
		void PlayerStats();
		
	private:
	
		static const int DEFAULT_NUM_PLAYERS = 2;
		static const int ROW = 3;
		static const int COL = 3;
		static int       numGamesPlayed;
		static int       currentPlayer;
		static int       totalWins;
		static int       ties;
		bool			 NoWinner;
		
		Player players[DEFAULT_NUM_PLAYERS];
		Cell   board  [ROW][COL];
		Date   gameDay;
	
};

#endif
