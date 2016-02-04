/* Filename: date.h
 * Author: Yancy Carrasco
 * Date: December 17, 2015
 * Description: Contains declarations for methods 
 * 		and private data members of the Date Class
 */
 
#ifndef DATE_H
#define DATE_H
 
#include <iostream>
using namespace std;

class Date
{
	public:
		
		//Default Constructor	
		Date();
		
		//Input/Display Methods
		void inputDate();
		void displayDate();
		
		//Mutator Methods
		void setMonth(int m);
		void setDay(int d);
		void setYear(int y);
		
		//Accessor Methods	
		int getMonth();
		int getDay();
		int getYear();
			
	private:
			
		int month, day, year;
};

#endif
