/* Filename: TicTacToe.cpp
 * Author: Yancy Carrasco
 * Date: December 21, 2015
 * Description: Contains definitons for the methods
 *		declared in TicTacToe.h (TicTacToe Class) 
 */
 
#include "TicTacToe.h"

int TicTacToe::numGamesPlayed;
int TicTacToe::currentPlayer;
int TicTacToe::totalWins;
int TicTacToe::ties;
 
//Default Constructor
TicTacToe::TicTacToe()
{
	//selectROW = -1;
	//selectCOL = -1;
	NoWinner  = true;
}

//Constructor to Instantiate the game
//with specific players
TicTacToe::TicTacToe(const Player &P1, const Player &P2)
{
	//selectROW  = -1;
	//selectCOL  = -1;
	NoWinner   = true;
	players[0] = P1;
	players[1] = P2;
}

//Input Date & Player Information
void TicTacToe::inputGameInfo()
{
	cout << endl;
	cout << endl;
	
	cout << "Let's Start with the Date!" << endl;
	gameDay.inputDate();
	
	cout << endl;
	 
	cout << "Thank you! Let's proceed";
	
	cout << endl;
	cout << endl;
	
	for (int i = 0; i < DEFAULT_NUM_PLAYERS; i++)
	{
		cout << "Player #"      << (i + 1) << endl;
		cout << "*************" << endl;
		cout << endl;
		players[i].inputPlayerInfo();
		currentPlayer++;
		
		cout << endl;
		cout << endl;
	}
}

//Method to Present Game Rules
void TicTacToe::gameRules()
{
	cout << "      *******************************************\n"
	     << "      *                                         *\n"
	     << "      *               BASIC RULES               *\n"
	     << "      *                                         *\n"
	     << "      *  In turns, each player enters a row     *\n"
	     << "      *  & column to mark on the game board     *\n"
	     << "      *  at that spot. The first player to      *\n"
	     << "      *  fully mark a row, column, or diagonal  *\n"
	     << "      *  with their mark, X or O, will win!     *\n" 
	     << "      *                                         *\n"
	     << "      *******************************************\n";
}

//Method to Clear the Game Board
void TicTacToe::ClearBoard()
{
	for (int r = 0; r < ROW; r++)
	{
		for (int c = 0; c < COL; c++)
		{
			(board[r][c]).clearCellObject();
		}
	}
	
	NoWinner = true;
}

//Method To Display the Board
void TicTacToe::displayBoard()
{
	cout << endl;
	
	for (int i = 0; i < DEFAULT_NUM_PLAYERS; i++)
	{
		cout << "|| @" << players[i].getHandle() << " is [" << players[i].getMarker() << "] ||";
	}
	
	cout << endl;
	cout << endl;
	
	cout << "\t\t  +-----+-----+-----+\n";
	
	for (int r = 0; r < ROW; r++)
	{
		cout << "\t\t  |     |     |     |\n";
		cout << "\t\t  |  " << (board[r][COL-COL]).getMarker() << "  |  " 
			                << (board[r][COL-2]).getMarker()   << "  |  " 
			                << (board[r][COL-1]).getMarker()   << "  |  " << endl;
		cout << "\t\t  |     |     |     |\n";
		cout << "\t\t  +-----+-----+-----+\n";
	}
}

//Method to Initiate the Game
void TicTacToe::initiateGame()
{
	ClearBoard();
	gameRules();
	
	cout << endl;
	cout << endl;
	
	displayBoard();
	numGamesPlayed++;
}

//Method to Move Between Players
void TicTacToe::PlayerMovement()
{
	do
	{
		for (int i = 0; i < currentPlayer; i++)
		{
			cout << endl;    
		     
			int selectROW;
			int selectCOL;
			
			int  counter1 = 0;
			do
			{
				cout << "@" << players[i].getHandle() << ": Please enter the row and column "
				     << "for the space you want to mark: "; 
				cin  >> selectROW >> selectCOL;
				counter1++;
			}	while (!setMarker(selectROW, selectCOL, players[i].getMarker()));
		
			if((WinnerCheck(players[i].getMarker())))
			{
				if(i == 0)
				{
					Player::IncrementWinsP1();
					totalWins++;
					displayBoard();
					WinnerMessage(players[i].getHandle());
					NoWinner = false;
				    break;
				}
				else if(i == 1)
				{
					Player::IncrementWinsP2();
					totalWins++;
					displayBoard();
					WinnerMessage(players[i].getHandle());
					NoWinner = false;
				    break;
				}
			}
			else if ((TieCheck(players[i].getMarker())))
			{
				TieMessage();
				ties++;
				NoWinner = false;
				displayBoard();
				break;
			}
			else
			{
				displayBoard();
			}
		}   
	}   while (NoWinner);		   
}

//Mutator Methods
bool TicTacToe::setMarker(int row, int column, int marker)
{
	bool setM = false;
	
	if( (row    > ROW || row    < 0) ||
	    (column > COL || column < 0) )
	{
		cout << endl;
		cout << "ERROR: Invalid Entry. Please select a space on the board.\n";
		cout << endl;
	}
	
	else if((board[row-1][column-1]).setMarker(row, column, marker))
	{
		setM = true;
	}
	else
	{
		cout << endl;
		cout << "ERROR: That space has been marked. Please try another.";
		cout << endl;
		cout << endl;
	}
	
	return(setM);
}

//Method To Check For Winner
bool TicTacToe::WinnerCheck(char marker)
{
	bool Winner = false;

	//Check For Winner By Row
	for(int r = 0; r < ROW; r++)
	{
		if ( ((board[r][0].getMarker()) == marker) &&
			 ((board[r][1].getMarker()) == marker) &&
			 ((board[r][2].getMarker()) == marker) )
		{
			 Winner = true;
			 break;
		}
	}
	
	//Check For Winner By Column
	for(int c = 0; c < COL; c++)
	{
		if ( ((board[0][c].getMarker()) == marker) &&
			 ((board[1][c].getMarker()) == marker) &&
			 ((board[2][c].getMarker()) == marker) )
		{
			 Winner = true;
			 break;
		}
	}
	
	//Check For Winner By Forward Diagonal
	if ( ((board[0][0].getMarker()) == marker) &&
		 ((board[1][1].getMarker()) == marker) &&
	     ((board[2][2].getMarker()) == marker) )
	{
		Winner = true;
	}
	//Check for Winner By Backwards Diagonal
	else if( ((board[0][2].getMarker()) == marker) &&
		     ((board[1][1].getMarker()) == marker) &&
	         ((board[2][0].getMarker()) == marker) )
	{
		Winner = true;
	}
	
	return(Winner);
}

//Method To Check For a Tie
bool TicTacToe::TieCheck(char marker)
{
	bool Tie = false;
	
	int counter = 0;
	
	for (int r = 0; r < ROW; r++)
	{
		for (int c = 0; c < COL; c++)
		{
			if( (board[r][c]).getMarker() == players[0].getMarker()  ||
			    (board[r][c]).getMarker() == players[1].getMarker())
			{
				counter++;
			}
		}
	}
	
	if(counter >= 8)
	{
		Tie = true;
	}
	
	return(Tie);
}
				       
//Method To Display Message To Winner
void TicTacToe::WinnerMessage(string handle)
{
	cout << endl;
	cout << "\t    ********************************   \n"
	     << "\t   *                                *  \n"
		 << "\t  *            ┌(.__.)┘	             * \n"
		 << "\t *    @" << handle      << " IS THE WINNER        *\n"
	     << "\t  *            ┌(ಠ‿ಠ)┘               *  \n"
	     << "\t   *                                *   \n"
	     << "\t    ********************************    \n" << endl;
}
		
//Method To Display Tie Messaage
void TicTacToe::TieMessage()
{
	cout << endl;
	cout << "\t    ********************************    \n"
	     << "\t   *                                *   \n"
		 << "\t  *         ¯|_( ͠° ͟ʖ °͠ )_|¯           *  \n"
		 << "\t *            IT'S A TIE               * \n"
	     << "\t  *              ಠ╭╮ಠ                                     *  \n"
	     << "\t   *                                *   \n"
	     << "\t    ********************************    \n" << endl;
	
}

//Win/Loss Calc for P1
double TicTacToe::WinLoseAverageP1()
{
	double calc1;
	
	calc1 = (double(Player::getNumofWinsP1()))/(double(numGamesPlayed));
	
	return(calc1);
}

//Win/Loss Calc for P1
double TicTacToe::WinLoseAverageP2()
{
	double calc1;
	
	calc1 = (double(Player::getNumofWinsP2()))/(double(numGamesPlayed));
	
	return(calc1);
}

//Accessor Method - Returns numGamesPlayed
int TicTacToe::getNumGamesPlayed()
{
	return(numGamesPlayed);
}

//Accessor Method - Returns 
int TicTacToe::getCurrentPlayer()
{
	return(currentPlayer);
}

//Access Method - Total # of Wins
int TicTacToe::getTotalWins()
{
	return(totalWins);
}

//Accessor Method - Total # of Wins
int TicTacToe::getTies()
{
	return(ties);
}

//Method to Display Summary Statistics
//of All Games Played
void TicTacToe::GeneralSummaryStats()
{
	cout << "General Stats"              << endl;
	cout << "**************************" << endl;
	cout << endl;
	
	cout << "Grid Size      : " << ROW << "x" << COL << endl;
	cout << "Total # Games  : " << getNumGamesPlayed() << endl;
	cout << "Total # Ties   : " << getTies()           << endl;
}

//Method to Display Summary of Player Stats
void TicTacToe::PlayerStats()
{
	if(Player::getNumofWinsP1() > Player::getNumofWinsP2())
	{
		cout << "Session Leader : @" << players[0].getHandle() << " with " 
		     << players[0].getNumofWinsP1() << " wins" << endl;
	} 
	else if (Player::getNumofWinsP1() < Player::getNumofWinsP2())
	{
		cout << "Session Leader : @" << players[1].getHandle() << " with " 
		     << players[1].getNumofWinsP2() << " wins" << endl;
	}
	else
	{
		cout << "Session Leader : None";
	}
	
	cout << endl;
	cout << endl;
	
	cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
	
	for (int i = 0; i < DEFAULT_NUM_PLAYERS; i++)
	{
		cout << "Player #"      << (i + 1) << endl;
		cout << "*************" << endl;
		cout << endl;
		
		players[i].displayPlayerInfo();
		
		if (i == 0)
		{
			cout << "# of Wins        : " << players[0].getNumofWinsP1()   << endl;
			cout << "Win/Loss Average : " << WinLoseAverageP1()            << endl;
		}
		else
		{
			cout << "# of Wins        : " << players[1].getNumofWinsP2()   << endl;
			cout << "Win/Loss Average : " << WinLoseAverageP2()            << endl;
		}
		
		cout << endl;
		cout << endl;
	}
}
