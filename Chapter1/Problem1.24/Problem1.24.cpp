// Problem1.24.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// This program prints the number 1 to 4 on the same line with each pair of adjacent numbers separated by
// one space. I wrote this program using the following methods:
// a) Using one output statement with one stream insertion operator
// b) Using one output statement with four stream inseration operators
// c) Using four output statements
// Written by James Rosado 3-8-2021
////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// part a)
	cout << "1 2 3 4" << endl;
	// part b)
	cout << "1 " << "2 " << "3 " << "4 " << endl;
	// part c)
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4 " << endl;

	return 0;
}


