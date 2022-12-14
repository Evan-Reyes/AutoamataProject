#include "header.h"

/*
FUNCTION: define()
PARAMETERS: none
RETURN: none, a void function
DESCRIPTION: using DFA as a basis, this function uses multiple if/else statements to parse through the user input character by character to recognize the string and then print its definition to the user
*/

void define()
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
					cout << " Any dish in which a main ingredient is combined with cheese and coated with tomato sauce before being baked." << endl;
				else if (userInput[2]=='t')
					cout << "Patatine is usually a side of french fries but in some parts of Italy it can mean potato chips." << endl;
			}
			else if (userInput[1]=='e')
				cout << "Pesca is 'fish' in Italian." << endl;
			else if (userInput[1]=='r')
			{
				if (userInput[2]=='o')
					cout << "In Italian, prosciutto means any kind of ham. There is prosciutto crudo, a raw, cured ham, and prosciutto cotto, or cooked ham." << endl;
				else if (userInput[2]=='i')
					cout << " Primi, or “first dishes,” usually include pasta, risotto (creamy rice) or soup." << endl;
			}
		}
		else if (userInput[0]=='s' || userInput[0]=='S')
		{
			if (userInput[1]=='a')
				cout << "Salsiccia is certainly the most ancient and best known of sausages. It is made from fresh meat, mostly pork, with scraps of pancetta and bits of pork neck. It is usually eaten fresh, but is also often grilled.." << endl;
			else if (userInput[1]=='e')
				cout << "This is a meat, fish or vegetable main dish, and usually most expensive area of the menu." << endl;
			else if (userInput[1]=='t')
				cout << "Stracciatella is a type of Italian or Italian-style ice cream containing fine flakes of chocolate." << endl;
		}
		else if (userInput[0]=='t' || userInput[0]=='T')
			cout << "Tacchino is a turkey recipe that’s served just once a year, on a holiday in November — not that holiday, naturally, but on the 11th of the month, the feast day of the town’s patron saint, San Martino, or St. Martin of Tours as he is remembered elsewhere." << endl;
		else if (userInput[0]=='v' || userInput[0]=='V')
		{
			if (userInput[1]=='a')
				cout << "Vaniglia is a flavor of gelato commonly made with vanilla bean or baccello di vaniglia.." << endl;
			else if (userInput[1]=='e')
				cout << "Verdura refers to all of the vegatation used for cooking, not one specific vegetable." << endl;
		}
		else if (userInput[0]=='0')
			cout << "Returning to home page..." << endl;
		else
			cout << "Sorry, this word is not available for translation. Please make sure the word is spelled correctly and not capitalized." << endl;
	}

}
