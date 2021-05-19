// The program uses a function to find the minimum of three double precision
// floating point numbers
// James Rosado 5-18-2020

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>

double getmin(double,double,double); // function prototype

int main()
{
	double a,b,c;

	cout << "Please enter in three floats: ";
	cin >> a >> b >> c;

	cout << "The minimum of the three numbers is: " << getmin(a,b,c) << endl;
	return 0;
}

double getmin(double a, double b, double c)
{
	double min = a;

	if (b < min)
	{
		min = b;
	}
	if ( c < min)
	{
		min = c;
	}

	return min;

}
