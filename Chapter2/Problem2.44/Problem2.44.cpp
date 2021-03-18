// Problem2.44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

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
    int prod = 1;
    int last = 15;

    for (int i = 1; i <= last; i++)
    {
        prod = 1;
        for (int j = 1; j <= i; j++)
        {
            prod = prod * j;
            if (i == 1)
            {
                cout << j;
            }
            else if (j==i)
            {
                cout << j;
            }
            else
            {
                cout << j << '*';
            }
        }
        cout <<'='<<prod <<endl;
    }
    return 0;
}

