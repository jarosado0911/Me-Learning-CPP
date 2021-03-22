// Problem3.11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Written by James Rosado 3-21-2021
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cmath>

int main()
{
    cout << fabs(7.5) << endl;
    cout << floor(7.5) << endl;
    cout << fabs(0.0) << endl;
    cout << ceil(0.0) << endl;
    cout << fabs(-6.4) << endl;
    cout << ceil(-6.4) << endl;
    cout << ceil(-fabs(-8 + floor(-5.5))) << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
