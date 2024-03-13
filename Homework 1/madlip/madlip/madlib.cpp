/*
  Steven Fernandez

  madlib.cpp

  Prompt the user for personal information and 
  create a story 

*/
// Header Files 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Variables 
	string name, age, city, school, profession, tanimal, pname;

	// Intro 
	cout << "MadLib Game App ..." << endl << endl;
		 
	// Prompt the user for personal information 
	cout << "Please enter the following information (no spaces)..." << endl;
	cout << "\tA person's name: ";
	cin >> name;
	cout << "\tA person's age: ";
	cin >> age;
	cout << "\tA city: ";
	cin >> city;
	cout << "\tA college: ";
	cin >> school;
	cout << "\tA profession: ";
	cin >> profession;
	cout << "\tA type of animal: ";
	cin >> tanimal;
	cout << "\tA pet's name: ";
	cin >> pname;

	// Display story 
	cout << "\n\nThere once was a person named " << name << " who lived in " << city << "." << endl;
	cout << "At the age of " << age << ", " << name << " went to college at " << school << "." << endl;
	cout << name << " graduated and went to work as a " << profession << "." << endl;
	cout << "Then, " << name << " adopted a(n) " << tanimal << " named " << pname << "." << " They both lived happily ever after!\n" << endl;
	
	system("pause");
	return 0;

}