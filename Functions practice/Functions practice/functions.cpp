/*
 
  Alexander Brito, Giovanni Menard, & Steven Fernandez

  Program that defines and tests the functions 

  Input: 

  Processing:

  Output:

*/

// Header files
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

// Functions prototypes
void Login();
void IsMultipleThree();
bool IsEven(int);
char LetterGrade(int);
double Average(int, int, int, int);
void Max(int, int, int& );


int main()
{
	// Variables
	
	// Intro

	//



	system("pause");
	return 0;
}

/*



*/

double SphereVolume(double radius)
{
	const double PI = 3.1415;
	double volume;

		volume = 4 / 3.0 * PI * pow(radius, 3);

		return volume;
}


/*


*/
bool IsEven(int number)
{
	bool even;

	if (number %2 == 0)
	{
		even = true;
	
	}
	else even = false;
	return even;

}

/*


*/
char LetterGrade(int grade)
{
	char letterGrade;

	if (grade >= 0 || grade <= 59)
	{
		cout << "try again next time ...";
		letterGrade = 'F';
	}

	if (grade >= 60 || grade <= 69)
	{
		cout << "You got a D ...";
		letterGrade = 'D';
	}

	if (grade >= 70 || grade <= 79)
	{
		cout << "You got a C ...";
		letterGrade = 'C';
	}

	if (grade >= 80 || grade <= 89)
	{
		cout << "You got a B ...";
		letterGrade = 'B';
	}

	if (grade >= 90 || grade <= 100)
	{
		cout << "You got a A ...";
		letterGrade = 'A';

	}
	else cout << "Error Invalid Grade...";

	return letterGrade;
}

/*


*/

double Average(int s1, int s2, int s3, int s4)
{
	double average;

	average = (s1 + s2 + s3 + s4) / 4;

	return average;

}

/*


*/

void Max(int val1, int val2, int& greatest)
{
	int max;

	if (val1 > val2)
		max = val1;
	if (val1 < val2)
		max = val2;
}

/*


*/

void DisplayFile(string file)
{
	string content;
	ifstream openFile(file);
	return;
}

 /*
 
 
 */

void NumberStats()
{

}

/*

*/

void IsMultipleThree()
{

}

/*

*/

void Login()
{

}


