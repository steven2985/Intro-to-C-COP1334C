/*
	Steven Fernandez

	numArray.cpp	

	Read values from a file into an array and:
	   - List the values list 
	   - Determine the lowest, highest, & average values

	Input: List of numbers store in a file 

	Processing: 1. Prompt user for filename 
				2. Read file contents into an array 
				3. List values read
				4. Determine & Display
				     - Lowest value in the array
					 - Highest value in the array
					 - Average value in the array

	Output: The list of values store in the file
			The lowest, highest, and average values

*/

// Header Files 
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

// Functions Prototypes
void readValues(int[], int&); // & referrence parameter
void displayValues(int[], int);
int getLowest(int[], int);
int getHighest(int[], int);
double calcAverage(int [], int);

int main()
{
	// Constants & Variables
	const int SIZE = 50;	// Maximum number of values in the array
	int values[SIZE];	    // Array of values read from a file
	int count;			    // Number of actual values in the array
	int lowest, highest;    // Lowest and highest values in the array
	double average;         // Average value in the array

	// Intro
	cout << "\nNumber Analysis App ..." << endl;

	// Prompt user for file name & read content into array
	readValues(values, count);

	// List values read
	cout << "\nList of values: " << endl;
	displayValues(values, count);

	// Determine & display lowest value
	lowest = getLowest(values, count);
	cout << "\nThe lowest values is " << lowest << endl;

	// Determine & display highest value
	highest = getHighest(values, count);
	cout << "\nThe highest value is " << highest << endl;

	// Determine & display the average value 
	average = calcAverage(values, count);
	cout << "\nThe average value is " << fixed << setprecision(2) << average << endl << endl;

	system("pause");
	return 0;
}

/*
	void readValues(int arr[], int &size)

	Prompts user for the name of a file and reads its
	contents into the array arr[].
	Return through the reference parameter size,
	the number of values read.

	Return Value: None
*/

void readValues(int arr[], int& size)
{
	string filename;
	ifstream inFile;

	// Prompt user for a file name 
	cout << "\nPlease enter name of file: ";
	cin >> filename;

	// Open file
	inFile.open(filename);

	if (!inFile)
	{
		cout << "\tFatal Error ... Could not open file." << endl;
		exit(EXIT_FAILURE);
	}

	// Reade values into arr[]
	size = 0;
	while (inFile >> arr[size])
		size++;

	// Close file
	inFile.close();

	return;
}
/*
	void displayValues(int arr[], int size)

	Displays the value stored in arr[] - considering 
	size elements.

	Return Value: None
*/

void displayValues(int arr[], int size)
{
	// Displays values in the array
	for (int i = 0; i < size; i++)
		cout << "\t" << arr[i] << endl;

	return;
}
/*
	int getLowest(int arr[], int size)

	Determine and return the lowest value in the array arr[]
	- considering size elements 

	Return Value: Lowest value in the array
*/
int getLowest(int arr[], int size)
{
	int lowest = INT_MAX;

	// Determine lowest value
	for (int i = 0; i < size; i++)
		if (arr[i] < lowest)
			lowest = arr[i];

	return lowest;
}

/*
	int getHighest(int arr[], int size)

	Determine and return the highest value in the array arr[]
	- considering size elements

	Return Value: Highest value in the array
*/
int getHighest(int arr[], int size)
{
	int highest = INT_MIN;

	// Determine highest value
	for (int i = 0; i < size; i++)
		if (arr[i] > highest)
			highest = arr[i];

	return highest;
}

/*
	double calcAverage(int arr[], int size)

	Calculate and return the average number in array

	Return Value: Average number
*/
double calcAverage(int arr[], int size)
{
	double average;
	int total = 0;

	// Calculate total
	for (int t = 0; t < size; t++)
		total += arr[t];

	average = static_cast <double> (total) / size;

		return average;
}


