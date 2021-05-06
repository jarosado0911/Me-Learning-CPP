// This problem defines rounding to different decimal positions
// By James Rosado 5-5-2021

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setprecision;
using std::fixed;

#include <cmath>

double roundToInteger(double,int);
double roundToTenths(double);
double roundToHundredths(double);
double roundToThousandths(double);

int main()
{
	double x;

	while(true)
	{
		cout << "Enter in a number: ";
		cin >> x;
		if(x==-1){break;}

		cout << fixed << setprecision(4);
		cout << "Original number = " << x << endl;
		cout << "The rounded number.." << endl;
		cout << " a) Integer = " << roundToInteger(x,1) << endl;
		cout << " b) Tenths = " << roundToTenths(x) << endl;
		cout << " c) Hundredths = " << roundToHundredths(x) << endl;
		cout << " d) Thousandths = " << roundToThousandths(x) << endl;
		cout << endl;
	}

	return 0;
}

double roundToInteger(double x, int p){return floor(x*p+0.5)/p;}
double roundToTenths(double x){return roundToInteger(x,10);}
double roundToHundredths(double x){return roundToInteger(x,100);}
double roundToThousandths(double x){return roundToInteger(x,1000);}


