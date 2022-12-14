#include "header.h"

char promptUser()
{
	char choice;
	cout << "*******************************************************"<<endl;
	cout << "*  Hello! Welcome to Il Miglior Ristorante Italiano!  *"<<endl;
	cout << "*  1. Display Food Menu                               *"<<endl;
	cout << "*  2. Enter a Translation                             *"<<endl;
	cout << "*  3. Read a Definition                               *"<<endl;
	cout << "*  4. Exit                                            *"<<endl;
	cout << "*******************************************************"<<endl;

	cout << "What would you like to do? Please enter 1, 2, 3, or 4: ";
	cin >> choice;
	return choice;
}
