// Problem2.17.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// This program will determine whether a department-store customer has exceeded the credit limit on a charge
// account
// 
// Written by James Rosado
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int accountnumber;
    double beginningbalance, totalcharges, totalcredits, creditlimit;
    double newbalance;

    while (true)
    {
        cout << endl;
        cout << "Enter account number (-1 to end): ";
        cin >> accountnumber;
        if (accountnumber == -1) { break; }
        cout << "Enter beginning balance: ";
        cin >> beginningbalance;
        cout << "Enter total charges: ";
        cin >> totalcharges;
        cout << "Enter total credits: ";
        cin >> totalcredits;
        cout << "Enter credit limit: ";
        cin >> creditlimit;

        newbalance = beginningbalance + totalcharges - totalcredits;
        if (newbalance > creditlimit)
        {
            cout << "Account: " << accountnumber << endl;
            cout << "Credit limt: " << creditlimit << endl;
            cout << "Balance: " << newbalance << endl;
            cout << "Credit Limit Exceeded." << endl;
        }
    }

    return 0;
}


