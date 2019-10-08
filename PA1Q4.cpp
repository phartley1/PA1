#include <iostream>
#include <string.h>

using namespace std;

bool palindrome(int);

int main()
{
	int num;
	cout << "enter a number: " << endl;
	cin >> num;

	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> num;
		}

	if (palindrome(num))
		cout << num << " is a palindrome" << endl;
	else if (palindrome(num) == false)
		cout << num << " is not a palindrome" << endl;

}

bool palindrome(int n)
{
	string ns = to_string(n);
	int length = ns.length();
	for (int i = 1; i <= length; i++)
	{
		if(ns[i-1] != ns[length-i])
			return false;
		else
			return true;
	}
}