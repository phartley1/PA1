#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int changecase(int);
int reversechar(int);
int encrypt(int);

int main()
{
	string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	string letter;
	int choice;
	int indexval;
	int ivfinal;

	cout << "enter one letter: " << endl;
	cin >> letter; 

	while (letter.length() > 1)
	{
		cout << "please enter only one letter: " << endl;
		cin >> letter;
	}

	while (isalpha(letter[0]) == false)
	{
		cout << "please enter a letter: " << endl;
		cin >> letter;
			while (letter.length() > 1)
		{
			cout << "please enter only one letter: " << endl;
			cin >> letter;
		}
	}

	cout << "would you like to change case (1), reverse (2), or encrypt (3)?: " << endl;
	cin >>choice;

	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "invalid input, try again: " << endl;
			cin >> choice;
		}

	while (choice != 1 && choice != 2 && choice != 3)
	{
		cout << "invalid input, try again: " << endl;
		cin >> choice;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "invalid input, try again: " << endl;
			cin >> choice;
		}
	}

	indexval = alphabet.find(letter[0]);

	if (choice == 1)
	{
		ivfinal = changecase(indexval);
	}
	else if (choice == 2)
	{
		ivfinal = reversechar(indexval);
	}
	else if (choice == 3)
	{
		ivfinal = encrypt(indexval);
	}

	cout << "result: " << alphabet[ivfinal] << endl;
	return 0;
}

int changecase(int indexval)
{
	int fv;
	if(indexval <= 25)
	{
		fv = indexval + 26;
	}
	else if(indexval > 25)
	{
		fv = indexval - 26;
	}
	return fv;
}

int reversechar(int indexval)
{
	int fv;
	fv = 51 - indexval;
	return fv;
}

int encrypt(int indexval)
{
	int fv;
	if (indexval > 45)
	{
		fv = indexval + (6 - 52);
	}
	else
	{
		fv = indexval + 6;
	}
	return fv;
}