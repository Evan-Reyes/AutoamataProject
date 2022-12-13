#include "header.h"
#include "header.h"

void translate()
{
	char userInput[100];
	bool isValid = false;

	cout << "Unsure what you're ordering? Enter the word in Italian and we'll tell you the definiton and orgigin of the dish!" << endl;
	
	while (userInput[0] != '0')
	{
		cout << "Please enter any single word you see on the menu that you would like to define or enter '0' to return to previous page: ";
		cin >> userInput;

		if (userInput[0]=='a' || userInput[0]=='A')
		{
			cout << "Carré di agnello designates a rack of lamb, which may be appended with “al forno” or “arrosto” meaning baked or roasted. Carré di agnello may come “in crosta de pane alle erbe” meaning a crust of breadcrumbs and herbs." << endl;	
		}
		else if (userInput[0]=='c' || userInput[0]=='C')
		{
			if (userInput[1]=='o')
			{
				if (userInput[2]=='p')
					cout << "A hard dry sausage of Italian origin that is prepared by combining meat from the most marbled part of pork necks and shoulders with seasonings such as cayenne, black or chile peppers." << endl;
				else if (userInput[2]=='n')
					cout << "contorni means a side dish such as a salad or vegetables that are typically served with the main course." << endl;
			}
		}

		else if (userInput[0]=='d' || userInput[0]=='D')
			cout << "Dolce is dessert or sweet foods." << endl;
		else if (userInput[0]=='f' || userInput[0]=='F')
		{
			if (userInput[1]=='i')
				cout << "A type of gelato ice cream made without additional flavourings." << endl;
			else if (userInput[1]=='r')
				cout << "Fritta is any food that is fried or has been deep-fried." << endl;
		}
		else if (userInput[0]=='g' || userInput[0]=='G')
		{
			if (userInput[1]=='e')
				cout << "Gelato is a soft rich ice cream containing little or no air." << endl;
			else if (userInput[1]=='r')
			{
				if (userInput[2]=='a')
				{
					if (userInput[3]=='n')
						cout << "Granita is a semi-frozen dessert made from sugar, water and various flavorings. Originally from Sicily, it is available throughout Italy in varying forms." << endl;
					else if (userInput[4]=='z')
						cout << "The most popular and straightforward way to say thanks in Italian is a hearty grazie. This Italian word is a catch-all that covers both formal and informal situations with just about any audience." << endl;
				}
			}
		}
		else if (userInput[0]=='i' || userInput[0]=='I')
			cout << "Insalata is a mixture of uncooked vegetables, eaten as part of a meal.." << endl;
		else if (userInput[0]=='m' || userInput[0]=='M')
			cout << " Melanzane was consumed by fearless foodies in the Calabrian and Sicilian regions of Italy, although some people were initially wary of the funny egg-shaped produce." << endl;
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
