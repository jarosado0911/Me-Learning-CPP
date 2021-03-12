// Problem2.30.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// This program allows the user to enter in a binary number and then 
// converts the binary number to its decimal equivalent.
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
    int binaryNumber, tempNumber,theDigit;
    int numDigits, sum = 0;
    int powerTwo = 1;

    cout << "How many digits does the binary number have? ";
    cin >> numDigits;

    cout << "Enter in the binary number: ";
    cin >> binaryNumber;
    tempNumber = binaryNumber;

    for (int i = 0; i < numDigits; i++)
    {
        theDigit = tempNumber % 10;
        tempNumber = tempNumber / 10;
        sum = sum + theDigit * powerTwo;
        powerTwo = powerTwo * 2;
    }
    cout << "The binary number " << binaryNumber << " is equivalent in decimal to " << sum << endl;
    return 0;
}


