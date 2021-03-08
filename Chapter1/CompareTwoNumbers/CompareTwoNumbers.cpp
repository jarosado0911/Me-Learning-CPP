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

// This is for using the input,output stream
#include <iostream>

using std::cout;	// program uses cout --> printing output
using std::cin;		// program uses cin  --> user input
using std::endl;	// program uses endl --> endline

int main()
{
	int number1;	// declare the first number as integer
	int number2;	// declare teh second number as integer

	cout << "Enter two integers, and I will tell you\n"
		<< "the relationship they satisfy: ";
	cin >> number1 >> number2;

	if (number1 == number2)
	{
		cout << number1 << " is equal to " << number2 << endl;
	}
	else if ( number1 < number2)
	{
		cout << number1 << " is not equal to " << number2 << endl;
		cout << number1 << " is less than " << number2 << endl;
		cout << number1 << " is not great than " << number2 << endl;
	}
	else
	{
		cout << number1 << " is not equal to " << number2 << endl;
		cout << number1 << " is not less than " << number2 << endl;
		cout << number1 << " is greater than " << number2 << endl;
	}

	return 0;
}