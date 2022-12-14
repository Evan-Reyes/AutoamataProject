#include "header.h"

/*
FUNCTION: promptUser()
PARAMETERS: none
RETURN: char value 'choice'
DESCRIPTION: prints a menu of choices the user can choose from and then reads user input into char 'choice' which will be passed back to main
*/

char promptUser()
{
	char choice;
	cout << "**************************************************"<<endl;
	cout << "*  Hello! Welcome to **NAME RESTAUARANT HERE** ! *"<<endl;
	cout << "*  1. Display Food Menu                          *"<<endl;
	cout << "*  2. Enter a Translation                        *"<<endl;
	cout << "*  3. Read a Definition                          *"<<endl;
	cout << "*  4. Exit                                       *"<<endl;
	cout << "**************************************************"<<endl;

	cout << "What would you like to do? Please enter 1, 2, 3, or 4: ";
	cin >> choice;
	return choice;
}
