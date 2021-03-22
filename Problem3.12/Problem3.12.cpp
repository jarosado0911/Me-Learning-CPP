// Problem3.12.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Written by James Rosado 3-21-2021

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::fixed;
using std::setprecision;

#include <cmath>

double calculateCharges(double); // function prototype for computing charges

int main()
{
    double hr1, hr2, hr3; // hours for each customer;
    double totalhr, totalcharges;
    cout << "Please enter in the hours for three customers: ";
    cin >> hr1 >> hr2 >> hr3;

    totalhr = hr1 + hr2 + hr3;
    totalcharges = calculateCharges(hr1) + calculateCharges(hr2) + calculateCharges(hr3);

    cout << "Car\t" << "Hours\t" << "Charge\n"
        << 1 << '\t' << hr1 << '\t' << fixed << setprecision(2) << calculateCharges(hr1) << '\n'
        << 2 << '\t' << hr2 << '\t' << fixed << setprecision(2) << calculateCharges(hr2) << '\n'
        << 3 << '\t' << hr3 << '\t' << fixed << setprecision(2) << calculateCharges(hr3) << '\n'
        << "TOTAL\t" << totalhr << '\t' << fixed << setprecision(2) << totalcharges      << endl;

    return 0;
}

double calculateCharges(double hours)
{
    double charges;

    if (hours <= 3.0)
    {
        charges = 2.0;
    }
    else
    {
        charges = 2.0 + ceil((hours - 3)) * 0.5;
    }

    if (hours >= 24)
    {
        charges = 10.0;
    }
    return charges;
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
