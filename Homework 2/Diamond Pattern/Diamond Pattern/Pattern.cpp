/*
  Steven Fernandez

  Pattern.cpp

  Create a diamond form with *

  Input: Start1, Start3, Start5, and Star7

  Processing: 1. Create the constants
              2. Organize the constants in the desire order and pattern
			  3. Display diamond pattern

  Output: Diamond pattern 
*/

// Header Files

#include<iostream>
#include<string>
using namespace std;

int main()

{
	// Diamond Pattern
	const string START1 = "       *";
	const string START3 = "      ***";
	const string START5 = "     *****";
	const string START7 = "    *******";

	// Execute the program to create the diamond shape 
	cout << endl;
	cout << START1 << endl;
	cout << START3 << endl;
	cout << START5 << endl;
	cout << START7 << endl;
	cout << START5 << endl;
	cout << START3 << endl;
	cout << START1 << endl << endl;
        


	system("pause");
	return 0;

}


