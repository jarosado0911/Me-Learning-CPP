// Problem1.27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
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
// This program reads in the radius of a circle and prints the circles diameters, circumference, and area.
// This program uses the constant 3.14159 for pi. It will also use floats.
//
// Written by James Rosado 3-8-2021

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	float radius;

	cout << "Please enter in a radius of the circle: ";
	cin >> radius;

	cout << "The diameter of the circle is " << 2 * radius << " units." << endl;
	cout << "The circumference of the circle is " << 2 * 3.14159 * radius << " units." << endl;
	cout << "The area of the circle is " << 3.14159 * radius * radius << " units squared." << endl;

	return 0;
}

