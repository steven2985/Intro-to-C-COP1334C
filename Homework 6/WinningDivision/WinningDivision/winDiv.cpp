/*

  Steven Fernandez

  winDiv.cpp

  Program that determines which company’s four divisions (Northeast, Southeast, Northwest, and Southwest) 
  had the greatest sales in the quarter.

  Input: Division's quartely sales

  Processing: 1. Prompt user for each division's quartely sales
              2. Calculate the highest earning division
			      - void findHighest(double ne, double se, double nw, double sw)
			  3. Display division with the highest earnings of the quarter 

  Output: The highest sales division with it gross earnings 

*/

// Header Files 
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// Function prototypes 
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	// Variables
	double ne, se, nw, sw;

	// Intro
	cout << "\nWinning Division Calculator ..." << endl << endl;

	// Prompt user for each division quarter sales
	ne = getSales("Northeast");
	se = getSales("Southeast");
	nw = getSales("Northwest");
	sw = getSales("Southwest");

	// Calculate and display the division with the highest sale for the quarter 
	findHighest(ne, se, nw, sw);


	system("pause");
	return 0; 
}

/*
	double getSales()

	Prompt user for the division's quarterly sales

	Return Value: Sales
*/

double getSales(string division)
{
	double sales;

	// Prompt user for the profits of each division in the quarter 
	do
	{
		cout << "Please enter " << division;
		cout << " Division's quarterly sales: " << "$";
		cin >> sales;
		cout << endl;

		if (sales < 0.00)
			cout << "Error ... Invalid amounth. Please Try again." << endl << endl;
	} while (sales < 0.00);

	return sales;
}

/*
	void findHighest(double, double, double, double);

	Passed the four sales totals and it determines which is the largest and 
	prints the name of the high grossing division, along with its sales 

	Return value: Highest grossing division and its sales 
*/

void findHighest(double ne, double se, double nw, double sw)
{
	double highest;

	cout << "The highest grossing division is ";

	if (ne > se && ne > nw && ne > sw)
	{
		highest = ne;
		cout << "Northeast";
	}
	else if (se > ne && se > nw && se > sw)
	{
		highest = se;
		cout << "Southeast";
	}
	else if (nw > se && nw > ne && nw > sw)
	{
		highest = nw;
		cout << "Northwest";
	}
	else
	{
		highest = sw;
		cout << "Southwest";
	}

	cout << fixed << showpoint << setprecision(2);
	cout << "division with $" << highest << " in sales." << endl << endl;

}