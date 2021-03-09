// Problem1.37.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// This program will calculate the squares and cubes of the numbers 0 to 10 and print them in table format
//
// Written by James Rosado 3-8-2021

#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int x;
	cout << "number\t" << "square\t" << "cube" << endl;
	x = 0;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 1;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 2;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 3;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 4;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 5;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 6;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 7;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 8;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 9;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	x = 10;
	cout << x << "\t" << x * x << "\t" << x * x * x << endl;
	return 0;
}

