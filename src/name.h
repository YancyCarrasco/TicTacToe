/* Filename: name.h
 * Author: Yancy Carrasco
 * Date: December 17, 2015
 * Class: CISC 2000 - Computer Science II
 * Professor: Christine Papadakis - Kanaris
 * Description: Contains declarations for methods 
 * 		and private data members of the Name Class
 */

#ifndef NAME_H
#define NAME_H
 
#include <iostream>
using namespace std;

class Name
{
	public:
		
		//Default Constructor
		Name();
		
		//Input/Display Methods
		void inputName();
		void displayName();
		
		//Mutator Methods
		void setFirstName(string fname);
		void setLastName(string lname);
		
		//Accessor Methods
		string getFirstName();
		string getLastName();
		
	private:
	
		string firstName, lastName;
};

#endif
		
