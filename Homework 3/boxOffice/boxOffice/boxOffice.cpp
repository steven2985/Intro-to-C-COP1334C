/*
  
   Steven Fernandez

   boxOffice.ccp

   Calculates & displays a theater's gross and net 
   box office profit for a night 

   Input: Name of movie, number of adult & child  tickets sold
          Adult & Child ticket prices, Percent of box office profit  
		  the theater keeps.

   Processing: 1. Prompt user for name of movie ,and 
                  number of adult and child tickets sold
               2. Calculate the gross box office profit 
			      grossProfit = adultTickets * ADULT_PRICE + childTickets * CHILD_PRICE 
               3. Calculate amount paid to distributor 
                  netProfit = grossProfit * BOXOFFICE_PERCENT / 100;
			   4. Calculate amount paid to distributor 
			      amountPaid = grossProfit - netProfit 
               5. Display report 


   Output: Report showing the gross and net box office profits 
           for a night 

*/
// Header Files
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// Constants & Variables 

	double ADULT_PRICE = 14.0,
		   CHILD_PRICE = 10.0,
		   BOXOFFICE_PERCENT = 20.0;

	string movie;
	int adultTickets, childTickets;
	double grossProfit, netProfit, amountPaid;

	// Intro
	cout << "\nBox Office Earnings Calculator ..." << endl << endl;

	// Prompt user for the name of the movie and tickets sold
	cout << "Please enter name of movie: ";
	getline(cin, movie);
	cout << "    \"    \"   Adult tickets sold: ";
	cin >> adultTickets;
	cout << "    \"    \"   Child tickets sold: ";
	cin >> childTickets;

	// Calculate gross profits, net profits, and amount paid of
	grossProfit = adultTickets * ADULT_PRICE + childTickets * CHILD_PRICE;
	netProfit = grossProfit * BOXOFFICE_PERCENT / 100;
	amountPaid = grossProfit - netProfit;

	//Display report 
	cout << endl << setw(29) << left << "Movie Name:"
		<< "\"" << movie << "\"" << endl
		<< setw(30) << left << "Adult Tickets Sold"
		<< "  " << adultTickets << endl
		<< setw(30) << left << "Child Tickets Sold:"
		<< "  " << childTickets << endl
		<< setw(30) << left << "Gross Box Office Profit:"
		<< "$ " << fixed << showpoint << setprecision(2) << grossProfit << endl
	    << setw(30) << left << "Net Box Office Profit:"
		<< "$ " << fixed << showpoint << setprecision(2) << netProfit << endl
		<< setw(30) << left << "Amount Paid to Distributor:"
		<< "$ " << fixed << showpoint << setprecision(2) << amountPaid << endl << endl;
	    // Finish Display 


	system("pause");
	return 0;
}