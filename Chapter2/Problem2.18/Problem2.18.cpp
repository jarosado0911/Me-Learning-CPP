// Problem2.18.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Written by James Rosado 3-8-2021
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setprecision;
using std::fixed;

int main()
{
    double grossSales, salary;

    while (true)
    {
        cout << "\nEnter sales in dollars (-1 to end): ";
        cin >> grossSales;
        if (grossSales == -1) { break; }
        salary = 200 + 0.09 * grossSales;
        cout << "Salary is: $" << fixed << setprecision(2) <<salary << endl;
    }
    return 0;
}

