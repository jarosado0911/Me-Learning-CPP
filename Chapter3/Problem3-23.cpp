// This program makes a solid square of a character
// by James Rosado

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void dispsquare(int,char); // function prototype

int main()
{
	int a;
	char ch;

	cout << "Enter in a square size and a character: ";
	cin >> a >> ch;

	dispsquare(a,ch);

	return 0;
}

void dispsquare(int a,char ch)
{
	for(int j=1; j<= a; j++)
	{
		for(int i=1; i<=a; i++)
		{
			cout << ch;
		}
		cout << endl;
	}
}
	
