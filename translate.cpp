#include "header.h"

void translate()
{
	char userInput[100];
	bool isValid = false;

	cout << "To enhance your experience, we want you to know what tasty dish you're oredring in English!" << endl;
	
	while (userInput[0] != '0')
	{
		cout << "Please enter any single word you see on the menu that you would like to translate or enter '0' to return to previous page: ";
		cin >> userInput;

		if (userInput[0]=='a' || userInput[0]=='A')
		{
			cout << "Agnello is 'lamb' in Italian." << endl;	
		}
		else if (userInput[0]=='c' || userInput[0]=='C')
		{
			if (userInput[1]=='o')
			{
				if (userInput[2]=='p')
					cout << "Coppa is 'pork bowl' in Italian." << endl;
				else if (userInput[2]=='n')
					cout << "Contorni is 'side dish' in Italian." << endl;
			}
		}

		else if (userInput[0]=='d' || userInput[0]=='D')
			cout << "Dolce is 'sweet' in Italian." << endl;
		else if (userInput[0]=='f' || userInput[0]=='F')
		{
			if (userInput[1]=='i')
				cout << "Fiordilatte is 'milk cream' in Italian." << endl;
			else if (userInput[1]=='r')
				cout << "Fritta is 'fried' in Italian." << endl;
		}
		else if (userInput[0]=='g' || userInput[0]=='G')
		{
			if (userInput[1]=='e')
				cout << "Gelato is 'ice cream' in Italian." << endl;
			else if (userInput[1]=='r')
			{
				if (userInput[2]=='a')
				{
					if (userInput[3]=='n')
						cout << "Granita is 'shaved ice' in Italian." << endl;
					else if (userInput[4]=='z')
						cout << "Grazie is 'thank you' in Italian." << endl;
				}
			}
		}
		else if (userInput[0]=='i' || userInput[0]=='I')
			cout << "Insalata is 'salad' in Italian." << endl;
		else if (userInput[0]=='m' || userInput[0]=='M')
			cout << "Melanzane is 'eggplant' in Italian." << endl;
		else if (userInput[0]=='p' || userInput[0]=='P')
		{
			if (userInput[1]=='a')
			{
				if (userInput[2]=='r')
					cout << "Parmigiana is 'parmesan' in Italian." << endl;
				else if (userInput[2]=='t')
					cout << "Patatine is 'potatoes' in Italian." << endl;
			}
			else if (userInput[1]=='e')
				cout << "Pesca is 'fish' in Italian." << endl;
			else if (userInput[1]=='r')
			{
				if (userInput[2]=='o')
					cout << "Prosciutto is 'ham' in Italian." << endl;
				else if (userInput[2]=='i')
					cout << "Primi is 'first' in Italian." << endl;
			}
		}
		else if (userInput[0]=='s' || userInput[0]=='S')
		{
			if (userInput[1]=='a')
				cout << "Salsicce is 'sausages' in Italian." << endl;
			else if (userInput[1]=='e')
				cout << "Secondi is 'seconds' in Italian." << endl;
			else if (userInput[1]=='t')
				cout << "Stracciatella is 'chocolate chip in Italian." << endl;
		}
		else if (userInput[0]=='t' || userInput[0]=='T')
			cout << "Tacchino is 'turkey' in Italian." << endl;
		else if (userInput[0]=='v' || userInput[0]=='V')
		{
			if (userInput[1]=='a')
				cout << "Vaniglia is 'vanilla' in Italian." << endl;
			else if (userInput[1]=='e')
				cout << "Verdura is 'vegetables in Italian." << endl;
		}
		else if (userInput[0]=='0')
			cout << "Returning to home page..." << endl;
		else 
			cout << "Sorry, this word is not available for translation. Please make sure the word is spelled correctly and not capitalized." << endl;
	}

}
