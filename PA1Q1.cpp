#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double gradevalue(string);

int main()
{

	double finalgpa = 0;
	double fincalc = 0;

	cout << "enter the letter grades for five of your classes to get your gpa." << endl;
	for(int i=1; i<=5; i++)
	{
		double g = 0;
		string letter;
		cout << "class " << i << ": ";
		cin >> letter;

		while(letter != "A" && letter != "A-" && letter != "B+" && letter != "B" && letter != "B-" && letter != "C+" && letter != "C" && letter != "C-" && letter != "D" && letter != "F")
		{
			cout << "invalid entry, try again: " << endl;
			cin >> letter;
		}
		g = gradevalue(letter);
		fincalc = fincalc + g;
	}

	finalgpa = fincalc/5.0;
	cout << fixed;
	cout << setprecision(1);
	cout << "\nyour gpa is " << finalgpa << endl;
	if(finalgpa > 3.0)
	{
		cout << "\ngreat work!" << endl;
	}
	else if (finalgpa < 2.0 && finalgpa > 0.0)
	{
		cout << "\noof" << endl;
	}
	else if (finalgpa == 0.0)
	{
		cout << "\n yike" << endl;
	}

	return 0;
}

double gradevalue(string letter)
{
	double gvalue = 0;

	if(letter == "A")
		{
			gvalue = 4.0;
		}	
	else if(letter == "A-")
		{
			gvalue = 3.7;
		}
	else if(letter == "B+")
		{
			gvalue = 3.3;
		}	
	else if(letter == "B")
		{
			gvalue = 3.0;
		}	
	else if(letter == "B-")
		{
			gvalue = 2.7;
		}	
	else if(letter == "C+")
		{
			gvalue = 2.3;
		}
	else if(letter == "C")
		{
			gvalue = 2.0;
		}	
	else if(letter == "C-")
		{
			gvalue = 1.7;
		}	
	else if(letter == "D")
		{
			gvalue = 1.0;
		}	
	else if(letter == "F")
		{
			gvalue = 0.0;
		}
	return gvalue;
}