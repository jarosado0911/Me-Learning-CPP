// This program determines given a pair of integers one integer is a multiple
// of the other integer

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

bool multiple(int,int); //function prototype

int main()
{
	int a,b;
	bool val;

	while(true)
	{
		cout << "Enter in two integers (0 0 to quit): ";
		cin >> a >> b;
		if ((a==0) && (b==0)){break;}

		val = multiple(a,b);
		if (val==true)
		{
			cout << b << " is a  multiple of " << a << endl;
		}
		else
		{
			cout << b << " is not a multiple of " << a << endl;
		}
	}

	return 0;
}

bool multiple(int a, int b)
{
	bool val = false;

	if ((b % a) == 0){val = true;}

	return val;
}
