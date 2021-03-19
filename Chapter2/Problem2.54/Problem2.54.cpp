// Problem2.54.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// Written by James Rosado
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::fixed;
using std::setprecision;

int main()
{
	int numDigits;
	double pi = 0;

	cout << "Enter in the number of digits to compute pi: ";
	cin >> numDigits;

	for (int i = 0; i < numDigits; i++)
	{
		if ((i/2)*2 == i) // even case
		{
			pi = pi + 4.0 / ((2 * (double)i) + 1);
		}
		else
		{
			pi = pi - 4.0 / ((2 * (double)i) + 1);
		}
		
		cout << i + 1 << " terms, pi ~ " << pi << endl;
	}

	return 0;
}