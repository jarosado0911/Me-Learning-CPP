// Problem2.29.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Written by James Rosado 3-10-2021
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::fixed;
using std::setprecision;

int main()
{
	int number, tempnumber;
	int originalnumber,flippednumber;
	
	flippednumber = 0;

	cout << "Enter in a five-digit number: ";
	cin >> originalnumber;
	number = originalnumber;

	for (int i = 0; i <= 4; i++)
	{
		cout << number % 10 << endl;
		tempnumber = number % 10;
		
		for (int j = 4; j >i; j--)
		{
			tempnumber = tempnumber * 10;
		}
		
		number = number / 10;
		flippednumber = flippednumber + tempnumber;
	}

	if (flippednumber == originalnumber)
	{
		cout << "The number " << originalnumber << " is a palindrome." << endl;
	}
	else
	{
		cout << "The number " << originalnumber << " is not a palindrome." << endl;
	}

	return 0;
}