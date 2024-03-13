/*
  Steven Fernandez

  restaurant.cpp

  Calculate and display a restaurant bill

  Input: Cost of Meal
         Tax & Tip rates

  Processing: 1. Promp the user for cost of meal (mealCost)
              2. Calculate tax charge 
			     taxCharge = mealCost * TAX_RATE / 100
		      3. Calculate the tip charge
			     tipCharge = (mealCost + taxCharge) * TIP_RATE / 100
			  4. Calculate total bill 
                 totalBill = mealCost + taxCharge + tipCharge 
              5. Display restaurant bill
			   

  Output: Restaurant bill 

*/

// Header Files 
#include <iostream>
using namespace std;

int main ()
{
	// Constant & Variable Declarations 
	const double TAX_RATE = 7.0;
	const double TIP_RATE = 20.0;

	double mealCost, taxCharge, tipCharge, totalBill;

	// Intro  
	cout << "\nRestaurant Bill Calculator ..." << endl << endl;

	// Promp the user for cost of meal
	cout << "Please enter cost of meal: ";
	cin >> mealCost;

	// Calculate tax charge, tip charge, and total bill
	taxCharge = mealCost * TAX_RATE / 100;
	tipCharge = (mealCost + taxCharge) * TIP_RATE / 100;
	totalBill = mealCost + taxCharge + tipCharge;

	// Display restaurant bill
	cout << "lnRestaurant Bill" << endl << endl;
	cout << "Meal:\t$" << mealCost << endl
		<< "Tax:\t$" << taxCharge << endl
		<< "Tip:\t$" << tipCharge << endl
		<< "-------------------------------" << endl
		<< "Total:\t$" << totalBill << endl << endl;
 







	system("pause");
	return 0;
}