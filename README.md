# TicTacToe
Game of TicTacToe, written in C++, with added features including player naming, player handles, game win, loss, & tie tracking, and win/loss average per player.

&nbsp;
&nbsp;

## File Descriptions
**date.h/date.cpp** &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; class for storing & displaying date information (entered by program user)

**name.h/name.cpp** &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; class for storing & displaying players' first and last names

**player.h/player.ccp** &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;class for keeping track of players' handles & respective wins/losses

**cell.h/cell.cpp** &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;class for handling each cell of data on the 3x3 board.

**TicTacToe.h/TicTacToe.cpp** &nbsp; &nbsp; &nbsp;source file -  allowing player name, handle, and date input from players - along with 

&nbsp; &nbsp;&nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; displaying the board, player movement, updating the board, determining wins, losses, ties, 

&nbsp; &nbsp;&nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; and stats

**driver.cpp** &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; executes game with a menu.

&nbsp;
&nbsp;

## Sample Execution

<pre><code>

*******************************************
*            CLASSIC TICTACTOE            *
*            BY YANCY CARRASCO            *
*******************************************


Let's Start with the Date!
Input today's date. Use forward slashes (ie.: 1/1/1900): 12/23/2015

Thank you! Let's proceed

Player #1
*************

Enter your First Name: Yancy
Enter your Last Name : Carrasco
Enter Your Preferred Handle : @Yancy3018
Enter Your Preferred Marker (X or O): O


Player #2
*************

Enter your First Name: Darcy
Enter your Last Name : Handson
Enter Your Preferred Handle : @DHHammer9
Enter Your Preferred Marker (X or O): A 

***Invalid marker! Marker should be either X or O. Please try again***


Enter Your Preferred Marker (X or O): J

***Invalid marker! Marker should be either X or O. Please try again***


Enter Your Preferred Marker (X or O): X




Thank you! Let's Begin

**************************************************
*                                                *
* Please select from the following options:      *
*                                                *
*                                                *
* (1) Play A New Game                            *
* (2) View Game Statistics                       *
* (3) Exit the program                           *
*                                                *
**************************************************


ENTER SELECTION HERE: 1


      *******************************************
      *                                         *
      *               BASIC RULES               *
      *                                         *
      *  In turns, each player enters a row     *
      *  & column to mark on the game board     *
      *  at that spot. The first player to      *
      *  fully mark a row, column, or diagonal  *
      *  with their mark, X or O, will win!     *
      *                                         *
      *******************************************



|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+


@Yancy3018: Please enter the row and column for the space you want to mark: 1 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 2 2

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 3 3

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 2 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 2 3

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  X  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 2 3

ERROR: That space has been marked. Please try another.

@DHHammer9: Please enter the row and column for the space you want to mark: 1 3

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  X  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 4 4

ERROR: Invalid Entry. Please select a space on the board.

@Yancy3018: Please enter the row and column for the space you want to mark: 2 2

ERROR: That space has been marked. Please try another.

@Yancy3018: Please enter the row and column for the space you want to mark: 3 2

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  X  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 3 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  X  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

	    ********************************   
	   *                                *  
	  *            ┌(.__.)┘	             * 
	 *    @DHHammer9 IS THE WINNER        *
	  *            ┌(ಠ‿ಠ)┘               *  
	   *                                *   
	    ********************************    



Thanks For Playing! You will now be returned to the Main Menu.

**************************************************
*                                                *
* Please select from the following options:      *
*                                                *
*                                                *
* (1) Play A New Game                            *
* (2) View Game Statistics                       *
* (3) Exit the program                           *
*                                                *
**************************************************


ENTER SELECTION HERE: 1


      *******************************************
      *                                         *
      *               BASIC RULES               *
      *                                         *
      *  In turns, each player enters a row     *
      *  & column to mark on the game board     *
      *  at that spot. The first player to      *
      *  fully mark a row, column, or diagonal  *
      *  with their mark, X or O, will win!     *
      *                                         *
      *******************************************



|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+


@Yancy3018: Please enter the row and column for the space you want to mark: 2 2

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 1 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 3 3

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 1 3

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  *  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 1 2

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 2 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 3 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 3 2

	    ********************************    
	   *                                *   
	  *         ¯|_( ͠° ͟ʖ °͠ )_|¯           *  
	 *            IT'S A TIE               * 
	  *              ಠ╭╮ಠ               *   
	   *                                *   
	    ********************************    


|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  X  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+


Thanks For Playing! You will now be returned to the Main Menu.

**************************************************
*                                                *
* Please select from the following options:      *
*                                                *
*                                                *
* (1) Play A New Game                            *
* (2) View Game Statistics                       *
* (3) Exit the program                           *
*                                                *
**************************************************


ENTER SELECTION HERE: 2




General Stats
**************************

Grid Size      : 3x3
Total # Games  : 2
Total # Ties   : 1
Session Leader : @DHHammer9 with 1 wins


Player #1
*************

Name     : Yancy Carrasco
Handle   : @Yancy3018
Marker   : O
# of Wins        : 0
Win/Loss Average : 0.00


Player #2
*************

Name     : Darcy Handson
Handle   : @DHHammer9
Marker   : X
# of Wins        : 1
Win/Loss Average : 0.50




**************************************************
*                                                *
* Please select from the following options:      *
*                                                *
*                                                *
* (1) Play A New Game                            *
* (2) View Game Statistics                       *
* (3) Exit the program                           *
*                                                *
**************************************************


ENTER SELECTION HERE: 1


      *******************************************
      *                                         *
      *               BASIC RULES               *
      *                                         *
      *  In turns, each player enters a row     *
      *  & column to mark on the game board     *
      *  at that spot. The first player to      *
      *  fully mark a row, column, or diagonal  *
      *  with their mark, X or O, will win!     *
      *                                         *
      *******************************************



|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+


@Yancy3018: Please enter the row and column for the space you want to mark: 3 2

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 1 2

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 2 2

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 2 2

ERROR: That space has been marked. Please try another.

@DHHammer9: Please enter the row and column for the space you want to mark: 56 7

ERROR: Invalid Entry. Please select a space on the board.

@DHHammer9: Please enter the row and column for the space you want to mark: 2 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 3 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 2 3

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  O  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 3 3

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  X  |  O  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  O  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

	    ********************************   
	   *                                *  
	  *            ┌(.__.)┘	             * 
	 *    @Yancy3018 IS THE WINNER        *
	  *            ┌(ಠ‿ಠ)┘               *  
	   *                                *   
	    ********************************    



Thanks For Playing! You will now be returned to the Main Menu.

**************************************************
*                                                *
* Please select from the following options:      *
*                                                *
*                                                *
* (1) Play A New Game                            *
* (2) View Game Statistics                       *
* (3) Exit the program                           *
*                                                *
**************************************************


ENTER SELECTION HERE: 1


      *******************************************
      *                                         *
      *               BASIC RULES               *
      *                                         *
      *  In turns, each player enters a row     *
      *  & column to mark on the game board     *
      *  at that spot. The first player to      *
      *  fully mark a row, column, or diagonal  *
      *  with their mark, X or O, will win!     *
      *                                         *
      *******************************************



|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+


@Yancy3018: Please enter the row and column for the space you want to mark: 3 3

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 2 2

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 1 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 1 2

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 2 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@DHHammer9: Please enter the row and column for the space you want to mark: 1 3

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  X  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  *  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

@Yancy3018: Please enter the row and column for the space you want to mark: 3 1

|| @Yancy3018 is [O] |||| @DHHammer9 is [X] ||

		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  X  |  X  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  X  |  *  |  
		  |     |     |     |
		  +-----+-----+-----+
		  |     |     |     |
		  |  O  |  *  |  O  |  
		  |     |     |     |
		  +-----+-----+-----+

	    ********************************   
	   *                                *  
	  *            ┌(.__.)┘	             * 
	 *    @Yancy3018 IS THE WINNER        *
	  *            ┌(ಠ‿ಠ)┘               *  
	   *                                *   
	    ********************************    



Thanks For Playing! You will now be returned to the Main Menu.

**************************************************
*                                                *
* Please select from the following options:      *
*                                                *
*                                                *
* (1) Play A New Game                            *
* (2) View Game Statistics                       *
* (3) Exit the program                           *
*                                                *
**************************************************


ENTER SELECTION HERE: 2




General Stats
**************************

Grid Size      : 3x3
Total # Games  : 4
Total # Ties   : 1
Session Leader : @Yancy3018 with 2 wins


Player #1
*************

Name     : Yancy Carrasco
Handle   : @Yancy3018
Marker   : O
# of Wins        : 2
Win/Loss Average : 0.50


Player #2
*************

Name     : Darcy Handson
Handle   : @DHHammer9
Marker   : X
# of Wins        : 1
Win/Loss Average : 0.25




**************************************************
*                                                *
* Please select from the following options:      *
*                                                *
*                                                *
* (1) Play A New Game                            *
* (2) View Game Statistics                       *
* (3) Exit the program                           *
*                                                *
**************************************************


ENTER SELECTION HERE: 3


BELOW IS A SUMMARY OF YOUR GAMES: 

General Stats
**************************

Grid Size      : 3x3
Total # Games  : 4
Total # Ties   : 1
Session Leader : @Yancy3018 with 2 wins


Player #1
*************

Name     : Yancy Carrasco
Handle   : @Yancy3018
Marker   : O
# of Wins        : 2
Win/Loss Average : 0.50


Player #2
*************

Name     : Darcy Handson
Handle   : @DHHammer9
Marker   : X
# of Wins        : 1
Win/Loss Average : 0.25

THANKS FOR PLAYING!

</code></pre>




