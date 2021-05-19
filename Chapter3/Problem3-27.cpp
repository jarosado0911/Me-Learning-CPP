#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cmath>

int FahToCel(int);// function prototype

int main()
{
	for(int i = 0; i<= 100; i++)
	{
		cout << i << "F = " << FahToCel(i) <<  " C"<< endl;
	}
	return 0;
}

int FahToCel(int fah)
{
	return ((fah-32)*5/9);
}
