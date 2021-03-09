// Problem2.19.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Written by James Rosado 3-9-2021
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setprecision;
using std::fixed;

int main()
{
	double hours, hourlyrate;
	double grosspay;

	while (true)
	{
		cout << "\nEnter hours worked (-1 to end): ";
		cin >> hours;
		
		if (hours == -1) { break; }
		
		cout << "Enter hourly rate ($00.00): ";
		cin >> hourlyrate;

		grosspay = hours * hourlyrate;
		if (hours > 40)
		{
			grosspay = 40*hourlyrate + (hours - 40)*1.5*hourlyrate;
		}
		cout << "Salary is $" << fixed << setprecision(2) << grosspay << endl;
	}

	return 0;
}


