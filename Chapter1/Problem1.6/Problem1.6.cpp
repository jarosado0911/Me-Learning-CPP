// Problem1.6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// the beginning of the main program execution
int main()
{
    // declare the three integers
    int x,y,z;
    // declare the result as an integer
    int result;

    // this states what the program will do
    cout << "This program calculates the product of three integers." << endl;
    cout << "Please enter in three integers: ";
    
    // the user enters in three integers
    cin >> x >> y >> z;

    // compute the result
    result = x * y * z;

    // print the result
    cout << "The product is " << result << endl;

    return 0; // program terminated successfully
}
// end of the main program

