#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	int box; box = 250;
	int side; side = 100;
	int pre; pre = 50;
	int ga; ga = 25;
	int boxs1;
	int sides1;
	int pres1;
	int gas1;
	int boxs2;
	int sides2;
	int pres2;
	int gas2;
	int boxs3;
	int sides3;
	int pres3;
	int gas3;
	int boxs4;
	int sides4;
	int pres4;
	int gas4;

cout << "Ticket Price" << endl;
cout << "Box = 250" << endl;
cout << "Sideline = 100" << endl;
cout << "Premium = 50" << endl;
cout << "General Admission = 25" << endl;
cout << "\r" << endl;

cout << "Number of Tickets Sold for Game 1" << endl;
cout << "\r" << endl; 
cout << "Enter Box Tickets:" << "\t";
cin >> boxs1;
cout << "Enter Sideline Tickets:" << "\t";
cin >> sides1;
cout << "Enter Premium Tickets:" << "\t";
cin >> pres1;
cout << "Enter General Admission Tickets:" << "\t";
cin >> gas1;
cout << "\r" << endl; 
cout << "Total Box Tickets Sold = " << box * boxs1 << endl;
cout << "Total Sideline Tickets Sold= " << side * sides1 << endl;
cout << "Total Premium Tickets Sold= " << pre * pres1 << endl;
cout << "Total General Admission Tickets Sold= " << ga * gas1 << endl;

cout << "\r" << endl;
cout << "Number of Tickets Sold for Game 2" << "\t";
cout << "\r" << endl; 
cout << "Enter Box Tickets:" << "\t";
cin >> boxs2;
cout << "Enter Sideline Tickets:" << "\t";
cin >> sides2;
cout << "Enter Premium Tickets:" << "\t";
cin >> pres2;
cout << "Enter General Admissions Tickets:" << "\t";
cin >> gas2;
cout << "\r" << endl; 
cout << "Total Box Tickets Sold = " << box * boxs2 << endl;
cout << "Total Sideline Tickets Sold= " << side * sides2 << endl;
cout << "Total Premium Tickets Sold= " << pre * pres2 << endl;
cout << "Total General Admission Tickets Sold= " << ga * gas2 << endl;

cout << "\r" << endl;
cout << "Number of Tickets Sold for Game 3" << "\t";
cout << "\r" << endl; 
cout << "Enter Box Tickets:" << "\t";
cin >> boxs3;
cout << "Enter Sideline Tickets:" << "\t";
cin >> sides3;
cout << "Enter Premium Tickets:" << "\t";
cin >> pres3;
cout << "Enter General Admissions Tickets:" << "\t";
cin >> gas3;
cout << "\r" << endl; 
cout << "Total Box Tickets Sold = " << box * boxs3 << endl;
cout << "Total Sideline Tickets Sold= " << side * sides3 << endl;
cout << "Total Premium Tickets Sold= " << pre * pres3 << endl;
cout << "Total General Admission Tickets Sold= " << ga * gas3 << endl;

cout << "\r" << endl;
cout << "Number of Tickets Sold for Game 4" << endl;
cout << "\r" << endl; 
cout << "Enter Box Tickets:" << "\t";
cin >> boxs4;
cout << "Enter Sideline Tickets:" << "\t";
cin >> sides4;
cout << "Enter Premium Tickets:" << "\t";
cin >> pres4;
cout << "Enter General Admissions Tickets Sold:" << "\t";
cin >> gas4;
cout << "\r" << endl; 
cout << "Total Box Tickets Sold = " << box * boxs4 << endl;
cout << "Total Sideline Tickets Sold= " << side * sides4 << endl;
cout << "Total Premium Tickets Sold= " << pre * pres4 << endl;
cout << "Total General Admission Tickets Sold= " << ga * gas4 << endl;
	-getch();
	return 0;
}
