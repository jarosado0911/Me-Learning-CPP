// Problem2.16.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Drivers are concerned with the mileage obtained by their automobiles.
// One driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used
// for each tankful. Develop a program  that uses a while structure to input the miles driven and gallons used
// for each tankful. The program should calculate and display the miles per gallon obtained for each
// tankful. After processing all input information, the program should calculate and print the combined miles
// per gallon obtained for all tankfuls


#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

int main()
{
    int myprecision = 8;
    float gallons, miles;
    float totalgallons = 0.0;
    float totalmileage = 0.0;
    
    while (true)
    {
        cout << "Enter the gallons used (-1 to end): ";
        cin >> gallons;

        if (gallons == -1) { break; }
        
        totalgallons += gallons;
        
        cout << "Enter the miles drive: ";
        cin >> miles;
        cout << "The miles/gallon for this tank was " << setprecision(myprecision) << miles / gallons << endl;
        totalmileage += miles;
    }
    cout << "The overall average miles/gallon was " << setprecision(myprecision) << totalmileage / totalgallons << endl;

    return 0;
}

