/*
  Steven Fernandez

  wordGame.cpp

  Implement a Mad Lip game 

  Input: User's name, age, a city, a college, a profession, a type of animal, and a pet's name

  Processing: 1. Prompt user for personal data 
              2. Display our Mad Lib story

  Output: Mad Lib story

*/
// Header Files

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Declare variable
	string name, city, college, profession, animal, petName;
	int age;

	// Intro 
	cout << "\nMad Lib Game ..." << endl << endl;

	// Prompt user for personal data 
	cout << "Please enter your name:\t\t";
	getline(cin, name);
	cout << "  \"      \"   your age:\t\t";
	cin >> age;
	cin.ignore();
	cout << "  \"      \"   a city:\t\t";
	getline(cin, city);
	cout << "  \"      \"   a college:\t\t";
	getline(cin, college);
	cout << "  \"      \"   a profession:\t";
	getline(cin, profession);
	cout << "  \"      \"   a type of animal:\t";
	getline(cin, animal);
	cout << "  \"      \"   a pet's name:\t";
	getline(cin, petName);

	// Display Mad Lib story
	cout << "\nThere was once a person named " << name << " who lived in " << city 
		 << ".\n" << "At the age of " << age << ", " << name << " went to college at " << college << ".\n"
         << name << " graduated and went to work as a " << profession << ".\n" << "Then, " << name 
		 << " adopted a(n) " << animal << " named " << petName << ".\n" << "They both lived happily ever after!" << endl << endl;



	system("pause");
	return 0;
}