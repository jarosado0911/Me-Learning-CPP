// This program checks if a series of numbers is even
// by James Rosado 5-6-2021

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cmath>

bool even(int); //function prototype

int main()
{
	int a;
	while(true)
	{
		cout << "Enter in an integer (0 to quit): ";
		cin >> a;
		if (a == 0){break;}

		if (even(a))
		{
			cout << "The number " << a << " is even." << endl;
		}
		else
		{
			cout << "The number " << a << " is not even." << endl;
		}
	}

	return 0;
}

bool even(int a)
{
	if((a % 2)==0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
