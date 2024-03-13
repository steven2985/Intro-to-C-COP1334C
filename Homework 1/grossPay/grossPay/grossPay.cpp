/*
  Steven Fernandez 

  grossPay.cpp

  Calculate an employee's weekly gross pay based on the hours worked and the hourly rate

*/

// Header files
#include <iostream>
using namespace std;

int main()
{
	// Display message 
	cout << "\nGross Pay Calculator ...\n" << endl;

	// Declare Variables
	double hours, paid, grosspay;

	// Prom the user for the hours worked this week and the pay per hour
	cout << "How many hours did you work this week? ";
	cin >> hours;

	cout << "How much do you get paid per hour? ";
	cin >> paid; 

	// Calculate gross pay 
	grosspay = hours * paid;

	// Display result 
	cout << "\nYou have earned $" << grosspay << " this week\n" << endl;





	system("pause");
		return 0;


}