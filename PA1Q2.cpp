#include <iostream>
#include <math.h>
using namespace std;

struct pt
{
	float x;
	float y;
};

pt rightcoord(pt, float);
bool dooverlap(pt, pt, pt, pt);

int main()
{
	float x1;
	float y1;
	float a1;
	float x2;
	float y2;
	float a2;

	pt r1;
	pt r2;
	pt l1;
	pt l2;

	cout << "enter the upper left x and y coordinates and the area for the first square:" << endl;
	cout << "\nx-coordinate: " << endl;
	cin >> x1;
	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> x1;
		}
	cout << "\ny-coordinate: " << endl;
	cin >> y1;
	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> y1;
		}
	cout << "\narea: " << endl;
	cin >> a1;
	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> a1;
		}

	cout << "and the second square:" << endl;
	cout << "\nx-coordinate: " << endl;
	cin >> x2;
	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> x2;
		}
	cout << "\ny-coordinate: " << endl;
	cin >> y2;
	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> y2;
		}
	cout << "\narea: " << endl;
	cin >> a2;
	while (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << "enter a number: " << endl;
			cin >> a2;
		}

	l1.x = x1;
	l1.y = y1;
	l2.x = x2;
	l2.y = y2;

	r1 = rightcoord(l1, a1);
	r2 = rightcoord(l2, a2);
	if (dooverlap(l1, r1, l2, r2))
	{
		cout << "squares overlap";
	}
	else
	{
		cout << "squares don't overlap";
	}

	return 0;
}

pt rightcoord(pt l, float a)
{
	pt r;
	float sidelength;
	sidelength = sqrt(a);
	r.x = l.x + sidelength;
	r.y = l.y - sidelength;
	return r;
}

bool dooverlap(pt l1, pt r1, pt l2, pt r2)
{

	if (l1.x > r2.x || l2.x > r1.x)
	{
		return false;
	}
	else if (l1.y < r2.y || l2.y < r1.y)
	{
		return false;
	}
	else return true;
}