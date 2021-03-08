// Problem1.26.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
//
// This program asks the user to input three integers from the keyboard and prints out the sum, average, product,
// smallest and largest of the three numbers.
//
// Written by James Rosado 3-8-2021

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int x, y, z, larger, smaller;

	cout << "Input three different integers: ";
	cin >> x >> y >> z;
	cout << "Sum is " << x + y + z << endl;
	cout << "Average is " << (x + y + z) / 3 << endl;
	cout << "Product is " << x * y * z << endl;

	smaller = x;
	if (y < smaller)
	{
		smaller = y;
	}
	if (z < smaller)
	{
		smaller = z;
	}
	cout << "Smallest is " << smaller << endl;

	larger = x;
	if (y > larger)
	{
		larger = y;
	}
	if (z > larger)
	{
		larger = z;
	}
	cout << "Largest is " << larger << endl;
	return 0;
}

