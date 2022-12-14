#include "header.h"

int main()
{
	int choice = promptUser();

	while (choice != 4)
	{
		if(choice == 1)
		{
			displayMenu();
			choice = promptUser();
		}
		else if(choice == 2)
		{
			cout << "Translate" << endl;
			choice = promptUser();
		}
		else if (choice == 3)
		{
			cout << "Definition" << endl;
			choice = promptUser();
		}
		else
		{
			cout << "That input was incorrect. Please input only 1, 2, 3, or 4 followed by an enter. Please try again." << endl;
			choice = promptUser();
		}
	}

	cout << "Thank you, come again!" << endl;

	return 0;
}