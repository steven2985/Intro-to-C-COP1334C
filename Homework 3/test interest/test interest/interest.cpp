
/*
    Steven Fernandez

    interest.cpp

    Prompt user for the compund interest, calculate, and display:
    Interest Rate in the savings account
    Times Compound in the savings account
    Principal in the savings account
    InterestAcumulate in the savings account
    Total in savings in the account

    Input : double interestAcumulate, principal, rate, totalSavings;
	        int compoundTime;

	Process : 1. Prompt user for the principal amount, interest rate, and
	             number of times interest will be compounded
	          2. Calculate the total amount in the savings account 
			     totalSavings = principal * pow((1 + (rate/compoundTime)), compoundTime)
	          3. Calculate the interest acumulate 
	             interestAcumulate = (totalSavings - principal)
	          4. Display results with a precision of 2 decimals

	Output : interest rate, times compounded, principal, interest, amount in savings

	*/

// Header Files 

#include <iostream>
#include <cmath>
#include <iomanip>
	using namespace std;

int main()

{
	// Constants and Variables 

	double interestAcumulate, principal, rate, totalSavings;
	int compoundTime;

	// Intro 
	cout << "\nCompound Interest Calculator ..." << endl << endl;

	// Prompt user for the principal amount, interest rate, and number of times interest will be compounded

	cout << "\nPlease enter the principal amount: ";
	cin >> principal;
	cout << "\   \"     \"   the interest rate: ";
	cin >> rate;
	cout << "\   \"     \"   the number of times interest will be compounded: ";
	cin >> compoundTime;
	cout << endl;

	rate = rate / 100;

	// Calculate the total amount in the savings account 
	totalSavings = principal * pow((1 + (rate/compoundTime)), compoundTime);

	// Calculate the interest acumulate 
	interestAcumulate = (totalSavings - principal);

	rate = rate * 100;

	// Display result 
	cout << fixed << showpoint << setprecision(2)
         << setw(24) << left << "Interest Rate: "
		 << setw(11) << right << rate << "%" << endl
		 << setw(24) << left << "Times Compounded: "
		 << setw(11) << right << compoundTime << endl
		 << setw(24) << left << "Principal: "
		 << setw(2) << right << "$  " << principal << endl
		 << setw(24) << left  << "Interest: "
		 << setw(2) << right <<  "$    " << interestAcumulate << endl
		 << setw(24) << left << "Amount in Savings: "
		 << setw(2) << right << "$  " << totalSavings << endl << endl;




	system("pause");
	return 0;
}