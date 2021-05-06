// This problem I define the hypotenuse function which calculates the hypotenuse
// of a right triangle given two other sides
// by: James Rosado 5-5-2021

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::fixed;
using std::setprecision;

#include <cmath>

double hypotenuse(double, double); // function prototype 

int main()
{
	double a,b;
	
	cout << fixed << setprecision(2);
	for(int i=1; i<=3; i++)
	{
		cout << "Enter in two leg lengths: ";
		cin >> a >> b;
		cout << "The hypotenuse = " << hypotenuse(a,b) << endl << endl;
	}
	return 0;
}

double hypotenuse(double a, double b)
{
	return sqrt(a*a + b*b);
}
