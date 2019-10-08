#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int ternary(int);
int hamming(int, int);

int main()
{
	int n1;
	int n2;
	int tern1;
	int tern2;
	int hval;

	cout << "enter a value between 0 and 100: " << endl;
	cin >> n1;

	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> n1;
		}

	while(n1 < 0 || n1 > 100)
	{
		cout << "invalid, enter a value between 0 and 100: " << endl;
		cin >> n1;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> n1;
		}
	}

	cout << "enter a second value between 0 and 100: " << endl;
	cin >> n2;

	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> n2;
		}

	while(n2 < 0 || n2 > 100)
	{
		cout << "invalid, enter a value between 0 and 100: " << endl;
		cin >> n2;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> n2;
		}
	}

	tern1 = ternary(n1);
	tern2 = ternary(n2);

	cout << tern1 << " " << tern2 << endl;
	
	hval = hamming(tern1, tern2);

	cout << "the hamming distance between " << n1 << " and " << n2 << " when the values are in ternary format is " << hval << endl;
	return 0;
}

int ternary(int n)
{
	int i = 1;
	int rem;
	int tern = 0;

	do
	{
		rem = n % 3;
		tern += (i*rem);
		n /= 3;
		i *= 10;
	} while (n > 0);
	return tern;
}

int hamming(int tern1, int tern2)
{
	string tern1s = to_string(tern1);
	string tern2s = to_string(tern2);

	int i = 0;
	int hval = 0;

    while (tern1s[i] != '\0') 
    { 
        if (tern1s[i] != tern2s[i]) 
            hval++; 
        i++; 
    } 
    return hval; 
}