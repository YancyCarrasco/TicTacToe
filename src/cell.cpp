/* Filename: name.cpp
 * Author: Yancy Carrasco
 * Date: December 17, 2015
 * Description: Contains definitons for the methods
 *		declared in Cell.h (Cell Class) 
 */
 
#include "cell.h"
 
//Default Constructor
Cell::Cell()
{
	row    =  -1;
	column =  -1;
	marker = '*';
	ival   = '*';
}

//Set Method For Player's Marker
bool Cell::setMarker(int setRow, int setColumn, char mark)
{
	bool returnMarker = false;
	
	if ((row == -1) && (column == -1))
	{
		row    = setRow;
		column = setColumn;
		marker = mark;
		returnMarker = true;
	}
	
	return(returnMarker);
} 

//Accessor Method - Player's Marker
char Cell::getMarker()
{
	return(marker);
}

//Clear Cell Object To Initial Values
void Cell::clearCellObject()
{
	row    =  -1;
	column =  -1;
	marker = '*';
	ival   = '*';
}
