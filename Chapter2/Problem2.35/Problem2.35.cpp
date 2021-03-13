// Problem2.35.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// This program reads in three nonzero double values and determines if the values could represent
// the side lengths of a triangle
//
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
    double s1, s2, s3;

    cout << "Enter three number: ";
    cin >> s1 >> s2 >> s3;
    if ((s1 > 0) && (s2 > 0) && (s3 > 0))
    {
        if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s3 + s2 > s1))
        {
            cout << "The numbers " << s1 << ',' << s2 << ',' << s3 << " represent sides of a triangle." << endl;
        }
        else
        {
            cout << "The numbers " << s1 << ',' << s2 << ',' << s3 << " do NOT represent sides a triangle." << endl;
        }
    }
    else
    {
        cout << "The numbers " << s1 << ',' << s2 << ',' << s3 << " do NOT represent sides a triangle." << endl;
    }
    return 0;
}

