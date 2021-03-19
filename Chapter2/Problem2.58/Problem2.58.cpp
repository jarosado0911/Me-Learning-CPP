// Problem2.58.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
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
// Written by James Rosado

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numRows;
	int middleNum;

	cout << "Plese enter in an odd number of rows: ";
	cin >> numRows;

	middleNum = (numRows + 1) / 2;
	cout << middleNum << endl;

	for (int i = 1 ; i <= numRows; i++)
	{
		for (int j = 1; j <= numRows; j++)
		{
			if (i <= middleNum)
			{
				if ((j <= middleNum + i - 1) && (j >= middleNum - i + 1))
				{
					cout << '*';
				}
				else
				{
					cout << ' ';
				}
			}
			else
			{
				if ( (j< (i-middleNum+1)) || (j> (numRows - (i-middleNum)) ))
				{
					cout << ' ';
				}
				else
				{
					cout << '*';
				}
			}
		}
		cout << endl;
	}
	return 0;
}
