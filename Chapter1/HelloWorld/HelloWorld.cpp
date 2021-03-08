// General information for running console applications
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// This is my first program, it will print hello world to the console

// This is for using the input,output stream
#include <iostream>

using std::cout;	// program uses cout --> printing output
using std::cin;		// program uses cin  --> user input
using std::endl;	// program uses endl --> endline

// function main begins program execution
int main()
{
	int userVal;

	cout << "Hello World!" << endl;				// print hello world
	cout << "Enter in a value: ";				// request user input
	cin >> userVal;								// user enters in a value
	cout << "You entered in: " << userVal;		// print the users numbers

	// this return indicates that the program ended successfully
	return 0;
}