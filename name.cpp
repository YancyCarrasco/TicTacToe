/* Filename: name.cpp
 * Author: Yancy Carrasco
 * Date: December 17, 2015
 * Class: CISC 2000 - Computer Science II
 * Professor: Christine Papadakis - Kanaris
 * Description: Contains definitons for the methods
 *		declared in name.h (Name Class) 
 */
 
#include "name.h"
 
//Default Constructor
Name::Name()
{
	 firstName = "Not_Supplied";
	 lastName  = "Not_Supplied";
}

//Input Method
void Name::inputName()
{
	cout << "Enter your First Name: ";
	cin  >> firstName;
	
	cout << "Enter your Last Name : ";
	cin  >> lastName;
}

//Display Method
void Name::displayName()
{
	cout << "Name     : " 
	     << firstName << " "
	     << lastName << endl;
}

//Mutator Methods - FN
void Name::setFirstName(string fname)
{
	firstName = fname;
}

//Mutator Methods - LN
void Name::setLastName(string lname)
{
	lastName = lname;
}

//Accessor Methods - FN
string Name::getFirstName()
{
	return(firstName);
}

//Accessor Methods - LN
string Name::getLastName()
{
	return(lastName);
}

