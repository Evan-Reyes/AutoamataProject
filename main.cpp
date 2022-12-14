#include "header.h"

int main()
{
	char choice = promptUser(); //call prompt user function to get what user wants to do

	while (choice != '4')	//as long as user doesn't want to quit, continue prompting the choice menu
	{
		if(choice == '1')
		{
			displayMenu(); //will print the menu with food items in Italian
			choice = promptUser();
		}
		else if(choice == '2')
		{
			translate(); //will ask user for a word they want translated and print translation
			choice = promptUser();
		}
		else if (choice == '3')
		{
			define(); //will ask user for a word they want defined and print definition
			choice = promptUser();
		}
		else
		{
			cout << "That input was incorrect. Please input only 1, 2, 3, or 4 followed by an enter. Please try again." << endl;
			choice = promptUser();
		}
	}

	cout << "Thank you, come again!" << endl;

	//exit program

	return 0;
}
