/*
   Steven Fernandez

   pizza.cpp

   Prompt user for the diameter of a figure, calculate and display:
   Radious             of the pizza
   Area                of the pizza
   Number of slices    of the pizza

   Input: Diameter of the pizza

   Processing: 1. Prompt user for the diameter of the pizza
               2. Calculate radius 
			       radius = diameter / 2.0
			  3. Calculate area of the pizza 
			       areaOfPizza = PI * pow(radiusPizza,2)
              4. Calculate number of slices in total
			       totalSlices = areaOfPizza / sliceRadio;
              5. Display results with a precision of 1 decimal place

   Output: Total slices of pizza 

*/

// Header Files
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
    // Constants and Variables
	double PI = 3.14159;
	double sliceRadio = 14.125;
	double diameterOfPizza, areaOfPizza, radiusPizza, totalSlices;

	// Intro
	cout << "\nJoe's Pizza Palace Calculator ..." << endl << endl;

	// Prompt user for the diameter of the figure
	// Calculate radius 
	cout << "Enter the diameter of the pizza (inches): ";
	cin >> diameterOfPizza;
	radiusPizza = diameterOfPizza / 2.0;

	// Calculate area of the pizza 
	areaOfPizza = PI * pow(radiusPizza,2);

	// Calculate number of slices in total
	totalSlices = areaOfPizza / sliceRadio;


	// Display Message
	cout << fixed << showpoint << setprecision(1);
	cout << "\nA " << diameterOfPizza << " inch pizza contains about " << totalSlices << " slices" << endl << endl;

	system("pause");
	return 0;
}