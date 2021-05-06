// This is an example of the floor function using rounding
// By James Rosado 5-5-2021

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>

int myround(double); //function prototype for rounding function

int main()
{
	double x;

	while(true)
	{
		cout << "Enter in a number: ";
		cin >> x;
		
		if (x==-1){ break; }
		
		cout << "Original number = " << x << endl;
		cout << "Rounded number = " << myround(x) << endl;
	}
	return 0;
}

int myround(double x)
{
	return floor(x + 0.5);
}

