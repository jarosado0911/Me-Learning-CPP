// This program takes in three arguments hours, min, sec
// then calculates the number of seconds since the last 
// time the clock struct 12
// by James Rosado 5-8-2021

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>

int timediff(int, int,int,int,int,int); // function prototype

int main()
{
	int hr1, min1, sec1;
	int hr2, min2, sec2;
	int tdiff;

	cout << "Enter in the first time in hr min sec: ";
	cin >> hr1 >> min1 >> sec1;
	cout << "Enter in the second tiem in hr min sec: ";
	cin >> hr2 >> min2 >> sec2;
	cout << "The difference in the two times: " << timediff(hr1,min1,sec1,hr2,min2,sec2) << " seconds." << endl;

	return 0;
}

int timediff(int hr1,int min1, int sec1, int hr2, int min2, int sec2)
{
	int tsec1 = hr1*60*60+min1*60+sec1;
	int tsec2 = hr2*60*60+min2*60+sec2;

	return abs(tsec1-tsec2);
}
