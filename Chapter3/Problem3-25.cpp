// This program calculates the integer portion of a quotient
// and the remainder portion of a quotient
// by James Rosado

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>

// function prototypes
int getInteger(int,int);
int getRemainder(int,int);

int main()
{
	int a,b, pow;
	pow = 1;

	cout << "Please enter in two integers: ";
	cin >> a >> b; 

	cout << "The integer part of " << a << "/" << b << " is " << getInteger(a,b) << endl;
	cout << "The reminder part of " << a << "/" << b << " is " << getRemainder(a,b) << endl;
	getRemainder(a,b);


	cout << "Now enter in a number (between 1 and 32767): ";
	cin >> a;

	b = a;
	while(getInteger(a,10) !=0)
	{
		pow = pow*10;
		a = getInteger(a,10);
	}
	cout << "The power of 10 is: " << pow << endl;

	a = b*10;
	pow = pow*10;

	cout << ' ' << getInteger(a,pow) << ' ';
	a = getRemainder(a,pow);
	pow = pow/10;

	while(getInteger(a,10) !=0)
	{
		cout << getInteger(a,pow) << ' ';
		a = getRemainder(a, pow);
		pow = pow/10;
	}

	return 0;
}

int getInteger(int a, int b)
{
	return floor((a/b)+0.5);
}

int getRemainder(int a, int b)
{
	return (a % b);
}




