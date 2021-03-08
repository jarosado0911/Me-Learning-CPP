// Problem1.25.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// This program asks the user to enter two integers, obtains the numbers from the user, then prints the larger
// number followed by the words " is larger". If the numbers are equal, print the message "These numbers are equal"
//
// Written by James Rosado 3-8-2021

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x, y;

    cout << "Please enter in two numbers: ";
    cin >> x >> y;
    cout << endl;

    if (x > y)
    {
        cout << x << " is larger." << endl;
    }
    else if (y > x)
    {
        cout << y << " is larger." << endl;
    }
    else
    {
        cout << "These numbers are equal." << endl;
    }
    
    return 0;
}

