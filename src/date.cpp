/* Filename: date.cpp
 * Author: Yancy Carrasco
 * Date: December 17, 2015
 * Description: Contains definitons for the methods
 *		declared in date.h (Date class) 
 */

#include "date.h"

//Default Constructor
Date::Date()
{
	month = day = 1;
	year = 1900;
}

//Input Method
void Date::inputDate()
{
	char slash;
	cout << "Input today's date. Use forward slashes (ie.: 1/1/1900): ";
	cin  >> month >> slash >> day >> slash >> year;
}

//Display Method
void Date::displayDate()
{
	cout << "DATE: " 
	     << month << "/" 
	     << day   << "/" 
	     << year  << endl;
}

//Mutator Methods
void Date::setMonth(int m)
{
	month = m;
}

void Date::setDay(int d)
{
	day = d;
}

void Date::setYear(int y)
{
	year = y;
}

//Accessor Methods
int Date::getMonth()
{
	return(month);
}

int Date::getDay()
{
	return(day);
}

int Date::getYear()
{
	return(year);
}

