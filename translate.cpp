#include "header.h"

void translate()
{
	char userInput[100];
	bool reject = false;

	cout << "To enhance your experience, we want you to know what tasty dish you're ordering in English!" << endl;
	
	while (userInput[0] != '0')
	{
		cout << "Please enter any single word you see on the menu that you would like to translate or enter '0' to return to previous page: ";
		cin >> userInput;

		if (userInput[0]=='a' || userInput[0]=='A')
		{
			if(userInput[1]!='g' && userInput[2]!='n' && userInput[3]!='e' && userInput[4]!='l' && userInput[5]!='l' && userInput[6]!='o')
				reject = true;	
			else
				cout << "Agnello is 'lamb' in Italian." << endl;

		}
		else if (userInput[0]=='c' || userInput[0]=='C')
		{
			if (userInput[1]=='o')
			{
				if (userInput[2]=='p')
				{
					if (userInput[3]!='p' && userInput[4]!='a')
						reject = true;
					else
						cout << "Coppa is 'pork bowl' in Italian." << endl;
				}
				else if (userInput[2]=='n')
				{
					if (userInput[3]!='t' && userInput[4]!='o' && userInput[5]!='r' && userInput[6]!='n' && userInput[7]!='i')
						reject = true;
					else
						cout << "Contorni is 'side dish' in Italian." << endl;
				}
			}
		}

		else if (userInput[0]=='d' || userInput[0]=='D')
		{
			if (userInput[1]!='o' && userInput[2]!='l' && userInput[3]!='c' && userInput[4]!='e')
				reject = true;
			else 
				cout << "Dolce is 'sweet' in Italian." << endl;
		}
		else if (userInput[0]=='f' || userInput[0]=='F')
		{
			if (userInput[1]=='i')
			{
				if (userInput[2]!='o' && userInput[3]!='r' && userInput[4]!='d' && userInput[5]!='i' && userInput[6]!='l' && userInput[7]!='a' && userInput[8]!='t' && userInput[9]!='t' && userInput[10]!='e')
					reject == true;
				else
					cout << "Fiordilatte is 'milk cream' in Italian." << endl;
			}
			else if (userInput[1]=='r')
			{
				if (userInput[2]!='i' && userInput[3]!='t' && userInput[4]!='t' && userInput[5]!='a')
					reject = true;
				cout << "Fritta is 'fried' in Italian." << endl;
			}
		}
		else if (userInput[0]=='g' || userInput[0]=='G')
		{
			if (userInput[1]=='e')
			{
				if (userInput[2]!='l' && userInput[3]!='a' && userInput[4]!='t' && userInput[5]!='o')
					reject = true;
				else
					cout << "Gelato is 'ice cream' in Italian." << endl;
			}
			else if (userInput[1]=='r')
			{
				if (userInput[2]=='a')
				{
					if (userInput[3]=='n')
					{
						if (userInput[4]!='i' && userInput[5]!='t' && userInput[6]!='a')
							reject = true;
						else
							cout << "Granita is 'shaved ice' in Italian." << endl;
					}
					else if (userInput[3]=='z')
					{
						if (userInput[5]!='i' && userInput[6]!='e')
							reject = true;
						else
							cout << "Grazie is 'thank you' in Italian." << endl;
					}
				}
			}
		}
		else if (userInput[0]=='i' || userInput[0]=='I')
		{
			if (userInput[1]!='n' && userInput[2]!='s' && userInput[3]!='a' && userInput[4]!='l' && userInput[5]!='a' && userInput[6]!='t' && userInput[7]!='a')
				reject = true;
			else
				cout << "Insalata is 'salad' in Italian." << endl;
		}
		else if (userInput[0]=='m' || userInput[0]=='M')
		{
			if (userInput[1]!='e' && userInput[2]!='l' && userInput[3]!='a' && userInput[4]!='n' && userInput[5]!='z' && userInput[6]!='a' && userInput[7]!='n' && userInput[8]!='e')
				reject = true;
			else
				cout << "Melanzane is 'eggplant' in Italian." << endl;
		}
		else if (userInput[0]=='p' || userInput[0]=='P')
		{
			if (userInput[1]=='a')
			{
				if (userInput[2]=='r')
				{
					if (userInput[3]!='m' && userInput[4]!='i' && userInput[5]!='g' && userInput[6]!='i' && userInput[7]!='a' && userInput[8]!='n' && userInput[9]!='a')
						reject = true;
					else
						cout << "Parmigiana is 'parmesan' in Italian." << endl;
				}
				else if (userInput[2]=='t')
				{
					if (userInput[3]!='a' & userInput[4]!='t' && userInput[5]!='i' && userInput[6]!='n' && userInput[7]!='e')
						reject = true;
					else
						cout << "Patatine is 'potatoes' in Italian." << endl;
				}
			}
			else if (userInput[1]=='e')
			{
				if(userInput[2]!='s' && userInput[3]!='c' && userInput[4]!='a')
					reject = true;
				else
					cout << "Pesca is 'fish' in Italian." << endl;
			}
			else if (userInput[1]=='r')
			{
				if (userInput[2]=='o')
				{
					if (userInput[3]!='s' && userInput[4]!='c' && userInput[5]!='i' && userInput[6]!='u' && userInput[7]!='t' && userInput[8]!='t' && userInput[9]!='o')
						reject = true;
					else
						cout << "Prosciutto is 'ham' in Italian." << endl;
				}
				else if (userInput[2]=='i')
				{
					if (userInput[3]!='m' && userInput[4]!='i')
						reject = true;
					else
						cout << "Primi is 'first' in Italian." << endl;
				}
			}
		}
		else if (userInput[0]=='s' || userInput[0]=='S')
		{
			if (userInput[1]=='a')
			{
				if (userInput[2]!='l' && userInput[3]!='s' && userInput[4]!='i' && userInput[5]!='c' && userInput[6]!='c' && userInput[7]!='e')
					reject = true;
				else
					cout << "Salsicce is 'sausages' in Italian." << endl;
			}
			else if (userInput[1]=='e')
			{
				if (userInput[2]!='c' && userInput[3]!='o' && userInput[4]!='n' && userInput[5]!='d' && userInput[6]!='i')
					reject = true;
				else
					cout << "Secondi is 'seconds' in Italian." << endl;
			}
			else if (userInput[1]=='t')
			{
				if (userInput[2]!='r' && userInput[3]!='a' && userInput[4]!='c' && userInput[5]!='c' && userInput[6]!='i' && userInput[7]!='a' && userInput[8]!='t' && userInput[9]!='e' && userInput[10]!='l' && userInput[11]!='l' && userInput[12]!='a')
					reject = true;
				else
					cout << "Stracciatella is 'chocolate chip in Italian." << endl;
			}
		}
		else if (userInput[0]=='t' || userInput[0]=='T')
		{
			if (userInput [1]!='a' && userInput[2]!='c' && userInput[3]!='c' && userInput[4]!='h' && userInput[5]!='i' && userInput[6]!='n' && userInput[7]!='o')
				reject = true;
			else
				cout << "Tacchino is 'turkey' in Italian." << endl;
		}
		else if (userInput[0]=='v' || userInput[0]=='V')
		{
			if (userInput[1]=='a')
			{
				if (userInput[2]!='n' && userInput[3]!='i' && userInput[4]!='g' && userInput[5]!='l' && userInput[6]!='i' && userInput[7]!='a')
					reject = true;
				else
					cout << "Vaniglia is 'vanilla' in Italian." << endl;
			}
			else if (userInput[1]=='e')
			{
				if (userInput[2]!='r' && userInput[3]!='d' && userInput[4]!='u' && userInput[5]!='r' && userInput[6]!='a')
					reject = true;
				else
					cout << "Verdura is 'vegetables in Italian." << endl;
			}
		}
		else if (userInput[0]=='0')
			cout << "Returning to home page..." << endl;
		else if (reject == true)
			cout << "Sorry, this word is not available for translation. Please make sure the word is spelled correctly and not capitalized." << endl;
		else 
			cout << "Sorry, this word is not available for translation. Please make sure the word is spelled correctly and not capitalized." << endl;


	}

}
