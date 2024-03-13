/*
  Steven Fernandez 

  Output Sample.cpp

  Prompts user for personal data to generate an user ID

  Input: fname, lname

  Processing: 1. Promp user for personal data
              2. Display User ID 
               
  Output: User ID 

*/

// Header Files 

#include <iostream>
#include <string>
using namespace std;

int main()

{
	// Declare variables
	string fname, lname, userId;

	// Intro
	cout << "\nUser Id Generator ..." << endl << endl;

	// Prompt user for personal information
	cout << "Please enter first name <no whitespaces>: ";
	cin >> fname;
	cout << "Please enter last name <no whitespaces>: ";
	cin >> lname;
	cout << endl;

	// Generate user ID
	cout << "User ID: " << fname[0] << "_" << lname[0] << lname[1] << lname[2] << lname[3] << endl << endl;


	system("pause");
	return 0;

}
