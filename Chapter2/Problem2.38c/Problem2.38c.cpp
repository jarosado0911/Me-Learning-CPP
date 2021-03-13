// Problem2.38c.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// This program computes the exponential base e to any power x
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
    double x, e = 1;
    double number, prod, xpow;
    int count;
    int termcount = 1;

    cout << "Enter number of terms to computer e: ";
    cin >> number;
    cout << "Enter in x: ";
    cin >> x;

    while (termcount <= number - 1)
    {
        prod = 1;
        count = termcount;
        xpow = 1;
        while (count > 0)
        {
            prod = prod * count;
            count = count - 1;
            xpow = xpow * x;
        }
        e = e + xpow / (prod);

        termcount = termcount + 1;
    }
    cout << "The value of e = " << fixed << setprecision(12) << e << endl;
    return 0;
}


