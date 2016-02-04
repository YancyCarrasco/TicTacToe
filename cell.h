/* Filename: cell.h
 * Author: Yancy Carrasco
 * Date: December 17, 2015
 * Class: CISC 2000 - Computer Science II
 * Professor: Christine Papadakis - Kanaris
 * Description: Contains declarations for methods 
 * 		and private data members of the Cell Class
 */
 
#ifndef CELL_H
#define CELL_H

#include <iostream>
using namespace std;

class Cell
{
	public:
	
		//Default Constructor
		Cell();
	
		//Set Method For Player's Marker
		bool setMarker(int setRow, int setColumn, char mark);
		
		//Accessor Method - Player's Marker
		char getMarker();
		
		//Clear Cell Object To Initial Values
		void clearCellObject(); 
	
	private:
	
		int  row;
		int  column;
		char marker;
		char ival;
};

#endif

		
