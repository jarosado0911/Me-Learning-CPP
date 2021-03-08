// Problem1.30.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// This program reads in five integers and determines and prints the largest and the smallest integers in
// the group.
//
// Written by James Rosado 3-8-2021
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a, b, c, x, y;
	int larger, smaller;

	cout << "Please enter in five integers: ";
	cin >> a >> b >> c >> x >> y;

	smaller = a;
	if (b < smaller) { smaller = b; }
	if (c < smaller) { smaller = c; }
	if (x < smaller) { smaller = x; }
	if (y < smaller) { smaller = y; }

	larger = a;
	if (b > larger) { larger = b; }
	if (c > larger) { larger = c; }
	if (x > larger) { larger = x; }
	if (y > larger) { larger = y; }

	cout << "The largest is " << larger << endl;
	cout << "The smallest is " << smaller << endl;

	return 0;
}


