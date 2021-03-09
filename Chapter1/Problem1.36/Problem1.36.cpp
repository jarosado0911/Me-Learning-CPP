// Problem1.36.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// This program requires the user to input a five-digit number, separates the number into it s individual
// digits and prints the digits separated from one another by three spaces.
//
// Written by James Rosado 3-8-2021

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x,y;

    cout << "Please enter a five digit number: ";
    cin >> x;
    
    cout << (x / 10000) % 10 << "   " << (x / 1000) % 10 << "   " << (x / 100) % 10 << "   " << (x / 10) % 10 << "   " << x % 10 << endl;
    return 0;
}

