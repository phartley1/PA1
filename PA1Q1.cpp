#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double gradevalue(string);

int main()
{

	double finalgpa = 0;
	double fincalc = 0;

	cout << "enter the letter grades for five of your classes, get your gpa." << endl;
	for(int i=1; i<=5; i++)
	{
		double g = 0;
		string letter;
		cout << "\nclass " << i << ": " << endl;
		cin >> letter;
		while(letter != "A" && letter != "A-" && letter != "B+" && letter != "B" && letter != "B-" && letter != "C+" && letter != "C" && letter != "C-" && letter != "D" && letter != "F")
		{
			cout << "\ninvalid entry, try again: " << endl;
			cin >> letter;
		}
		g = gradevalue(letter);
		fincalc = fincalc + g;
	}

	finalgpa = fincalc/5;
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
		cout << "\n oh, love, no" << endl;
	}

	return 0;
}

double gradevalue(string letter)
{
	const double A = 4.0;
	const double Am = 3.7;
	const double Bp = 3.3;
	const double B = 3.0;
	const double Bm = 2.7;
	const double Cp = 2.3;
	const double C = 2.0;
	const double Cm = 1.7;
	const double D = 1.0;
	const double F = 0.0;

	int gvalue = 0;

	if(letter == "A")
		{
			gvalue = A;
		}	
	else if(letter == "B+")
		{
			gvalue = Bp;
		}	
	else if(letter == "B")
		{
			gvalue = B;
		}	
	else if(letter == "B-")
		{
			gvalue = Bm;
		}	
	else if(letter == "C+")
		{
			gvalue = Cp;
		}
	else if(letter == "C")
		{
			gvalue = C;
		}	
	else if(letter == "C-")
		{
			gvalue = Cm;
		}	
	else if(letter == "D")
		{
			gvalue = D;
		}	
	else if(letter == "F")
		{
			gvalue = F;
		}
	return gvalue;
}