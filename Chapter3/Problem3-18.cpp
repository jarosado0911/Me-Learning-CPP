// This is the integer power function
// By: James Rosado 5-5-2021

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int integerPower(int,int);

int main()
{
	int base, exp;

	cout << "Please enter in the base and then the exponent: ";
	cin >> base >> exp;
	cout << "base ^ exp = " << base;

	for(int i=1; i<exp; i++)
	{
		cout << '*' << base;
	}
	cout << '='<< integerPower(base,exp);
	return 0;
}

int integerPower(int base, int exp)
{
	int val = base;
	for(int i=1; i<exp ;i++)
	{
		val = val*base;
	}

	return val;
}
