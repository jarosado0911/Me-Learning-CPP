// Problem2.49.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	int product;
	double numsold;
	double total;
	
	total = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter in a product number (1,2,3,4,5) and quantity sold: ";
		cin >> product >> numsold;

		switch (product)
		{
		case 1:
			total = total + (2.98 * numsold);
			break;
		case 2:
			total = total + (4.50 * numsold);
			break;
		case 3:
			total = total + (9.98 * numsold);
			break;
		case 4:
			total = total + (4.49 * numsold);
			break;
		case 5:
			total = total + (6.87 * numsold);
			break;
		}
	}
	cout << "The total retail value is $" << total << endl;
	return 0;
}