// Problem2.22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
//
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
//
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
	int counter, number, largest, secondlargest;
	counter = 1;

	cout << "Enter in a number: ";
	cin >> number;
	largest = number;
	secondlargest = number;

	while (counter != 10)
	{
		cout << "Enter in a number: ";
		cin >> number;
		
		if (number > largest)
		{			
			secondlargest = largest;
			largest = number;
		}
		else if (number > secondlargest)
		{
			secondlargest = number;
		}
		counter++;
	}
	cout << "\nThe largest number is " << largest << endl;
	cout << "The second largest number is " << secondlargest << endl;

	return 0;
}


