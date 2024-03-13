/*
	Steven Fernandez

	hiTemp.cpp

	Practice program to demostrate two-dimensional array processing:
	  - Random access 
	  - By row
	  - By column
	  - Whole array 

	Input:

	Processing:

	Output:

*/

// Header Files
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// Global constants
const int WEEKS = 52;
const int DAYS = 7;
const string dayName[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

// Function Prototypes
double getAvgWeek(int[][DAYS], int);

int main()
{
	// Variable Declarations 
	int hiTemp[WEEKS][DAYS] = { {32, 40, 20, 25, 30, 27, 25},
							    {20, 25, 20, 21, 30, 38, 20},
							    {15, 18, 15, 18, 15, 18, 20} };
	
	int week, day;

	// Intro 
	cout << "\nHiTemp Yearly Recording App ..." << endl;

	// Random access 

	// Display the highest temperature for a particular week on a particular day

	// Prompt user for week & day 
	cout << "\nPlease enter week (1-52): ";
	cin >> week;

	cout << "   \"   enter day  (Mon:1 - Sun:7): ";
	cin >> day;

	// Display highest temperature
	cout << "\nThe highest temperature on " << dayName[day - 1] << " during week " << week << " is " << hiTemp[week - 1][day - 1] << endl;

	// Process by row

	// Calculate & Display the average high temperature for a particular week 
	// A particular week

	// Prompt user for week
	cout << "\nPlease enter week (1-52): ";
	cin >> week;

	// Display average temperature for week
	cout << fixed << showpoint << setprecision(1) << "\tThe average temperature for week " << week
		<< " is " << getAvgWeek(hiTemp, week - 1) << endl;

	system("pause");
	return 0;
}
/*
	double getAvgWeek(int arr[][DAYS], int weekIdx)

	Calculate & return the average temperature in arr[][] for a particular week
	 - indexed at weekIdx 

	Return Value: Average high temperature for a week
*/

double getAvgWeek(int arr[][DAYS], int weekIdx)
{
	double average;
	int total = 0;

	// Calculate total
	for (int d = 0; d < DAYS; d++)
		total += arr[weekIdx][d];

	// Calculate average
	average = static_cast <double> (total) / DAYS;

	return average;
}