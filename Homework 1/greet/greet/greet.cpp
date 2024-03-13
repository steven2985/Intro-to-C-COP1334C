/*
  Steven Fernandez

  greet.cpp

  Promp user for his/her name & display a greeting message
*/

// Header Files 
#include <iostream> 
#include <string>
using namespace std; 

int main()
{
	// Variable Declaration 
	string name; 

	// Promp user for his/her name & display a greeting message
	cout << "Please enter your name (no spaces): ";
	cin >> name;

	// Display a greeting message
	cout << "Hello " << name << "!!!!\n" << endl; 

	system("pause");
	return 0;
}