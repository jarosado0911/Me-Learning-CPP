// This program makes a solid square of stars
// by James Rosado

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void dispsquare(int); // function prototype

int main()
{
	int a;

	cout << "Enter in a square size: ";
	cin >> a;

	dispsquare(a);

	return 0;
}

void dispsquare(int a)
{
	for(int j=1; j<= a; j++)
	{
		for(int i=1; i<=a; i++)
		{
			cout << '*';
		}
		cout << endl;
	}
}
	
