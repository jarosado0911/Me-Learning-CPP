// Problem1.23.cpp : This file contains the 'main' function. Program execution begins and ends there.//
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
// This program asks the user to enter in two numbers, obtains the two numbers from the user and prints out 
// the sum, product, difference, and quotient of the two numbers

#include <iostream> // for using the input and output stream

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // we will use integers for this program
    // however for the quotient we will get integer answers even though they could be decimal
    int x, y, result;

    cout << "This program requires two numbers, then it will compute the sum, difference, product, and quotient" << endl;
    cout << "Please enter in the two number: ";
    cin >> x >> y;  // get user input

    // compute and print the sum
    result = x + y;
    cout << "The sum " << x << " + " << y << " = " << result << endl;

    // compute and print the difference, there are two differences
    result = x - y;
    cout << "The difference " << x << " - " << y << " = " << result << endl;
    cout << "The difference " << y << " - " << x << " = " << -1 * result << endl;

    // compute the product of the two numbers
    result = x * y;
    cout << "The product " << x << " * " << y << " = " << result << endl;

    // compute the division, need to be careful for division by zero
    if (result != 0) // use the product from before to determine if one number is zero
    {
        // if neither number is zero then we compute both possible quotients
        result = x / y;
        cout << "The quotient " << x << "/" << y << " = " << result << endl;
        result = 1 / result;
        cout << "The quotient " << y << "/" << x << " = " << result << endl;
    }
    else // if one of the numbers is zero then we have two subcases
    {
        cout << "One of the numbers is zero!" << endl;
        if (x == 0) // if the first number entered is zero
        {
            result = x / y;
            cout << "The quotient " << x << "/" << y << " = " << result << endl;
            cout << "The quotient " << y << "/" << x << " is undefined!" << endl;
        }
        else // if the second number entered is zero
        {
            result = y / x;
            cout << "The quotient " << y << "/" << x << " = " << result << endl;
            cout << "The quotient " << x << "/" << y << " is undefined!" << endl;
        }
    }        
        
    return 0; // program finished successfully!
}
// end of the program
