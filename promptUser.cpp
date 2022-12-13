#include "header.h"

int promptUser()
{
	int choice;
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