#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std; 

int main()
{
	float netBalance, payment, averageDailyBalance, interestpm;
	int d1, d2;

	cout << "Enter Balance = " << "\t";
	cin >> netBalance;
	cout << "Enter Payment = " << "\t";
	cin >> payment;
	cout << "Enter Number of Days in the Billing Cycle = " << "\t";
	cin >> d1;
	cout << "Enter Number of Days Payment is Made before Billing Cycle = " << "\t";
	cin >> d2;
	cout << "Enter Interest Rate per Month = " << "\t";
	cin >> interestpm;
	cout << "\r" << endl;
	cout << "\r" << endl;


	cout << "Average Daily Balance:    " << (netBalance * d1 - payment * d2) / d1 << endl;
	averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
	cout << "Interest:    " << (averageDailyBalance * interestpm) << endl;

	-getch();
	return 0;

}