/*
  Steven Fernandez

  average5.cpp

  Get the average of a series of values

  Input: num1, num2, num3, num4, and num5

  Processing: 1. Promp user for 5 numbers 
              2. Add the 5 numbers = res
			  3. Take res divide it by 5 = ans
			  4. Display the average number

  Output: The average number
*/

// Header Files

#include <iostream>
using namespace std;

int main()
{
	// Integers 
	int num1, num2, num3, num4, num5, res, ans;

	// Display Message (intro)
	cout << "\nAverage of 5 values ..." << endl << endl;

	// Prompt user to introduce the information
	cout << "Please enter the values for ..." << endl;
	cout << "\tNumber 1: ";
	cin >> num1;
	cout << "\tNumber 2: ";
	cin >> num2;
	cout << "\tNumber 3: ";
	cin >> num3;
	cout << "\tNumber 4: ";
	cin >> num4;
	cout << "\tNumber 5: ";
	cin >> num5;

	// Calculations
	res = (num1 + num2 + num3 + num4 + num5);
	ans = res / 5;

	// Calculate and show result 
	cout << "\nThe average is: " << ans << endl << endl;


	system("pause");
	return 0;
}