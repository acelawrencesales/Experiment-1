#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;
 setprecision(2) << A << endl;
int main ()
{
	int mass;
	int den;

	cout << "Enter Mass (grams):" << endl;
	cin >> mass;
	cout << "Enter Density (grams per cubic centimeters):" << endl; 
	cin >> den;

	cout << "\r" << endl;
	cout << "Volume = " << mass / den << endl;

	-getch();
	return 0;

}