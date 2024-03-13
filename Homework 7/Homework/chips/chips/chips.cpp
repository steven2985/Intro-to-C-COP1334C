/*
	Steven Fernandez

	chips.cpp

	program that lets a maker of chips and salsa keep track of sales for five different types of salsa:
	mild, medium, sweet, hot, and zesty.

	Input: Number of jars sold last month of each salsa

	Processing: 1. Prompt user for the number of jars sold for each salsa type
				2. Calculate total of jars sold
				3. Calculate the salsa with the highest number of jars sold
				4. Calculate the salsa with the lowest number of jars sold
				5. Determine & Display
				     - Total sales for each type of salsa with the highest and lowest salsa's sales

	Output: Report that displays for each salsa type, total sales, and the names of the highest selling and lowest selling products.

*/

// Header Files
#include <iostream>
#include <string>
using namespace std;

// Global Constants 
const int TOTAL_SALSAS = 5;

// Function Prototypes
void getMessage(int[], string[]);
int getTotal(int[], int);
int getHighest(int[], int, int&);
int getLowest(int[], int, int&);
void getNumbers(int[], string []);

int main()
{
	// Variables Declaration
	string salsas[TOTAL_SALSAS] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int numberJarsSold[TOTAL_SALSAS];

	// Intro 
	cout << "\nSalsa Jars Sales App ..." << endl << endl;

	// Prompt user for the amount of salsas sold during the last months
	getMessage(numberJarsSold, salsas);

	// Sales' report
	getNumbers(numberJarsSold, salsas);
	
	system("pause");
	return 0;
}
/*
	void getMessage(int numberJarsSold[], string salsas[])

	Prompt user for the quantity of jars sold of each type of salsa during the last month 

	Return Value: None
*/
void getMessage(int numberJarsSold[], string salsas[])
{

	for (int i = 0; i < TOTAL_SALSAS; i++)
	{
		do
		{
			cout << "How many " << salsas[i] << " salsa jars were sold the last month: ";
			cin >> numberJarsSold[i];

			if (numberJarsSold[i] < 0)
				cout << "Error ... The number of jars must be greater than 0. Please try again. " << endl;
		} while (numberJarsSold[i] < 0);
	}
}

/*
	int getTotal(int arr[], int size)

	Calculate total of jars sold during the month 

	Return Value: Total of jars sold 
*/

int getTotal(int arr[], int size)
{
	int total = 0;

	// Calculate total of jars sold
	for (int i = 0; i < size; i++)
		total += arr[i];

	return total;
}
/*
	int getHighest(int arr[], int size, int &highestIndex)

	Calculate the type of salsa with the highest sales in the last month

	Return Value: Salsa with the highest jars sold in the last month 
*/

int getHighest(int arr[], int size, int &highestIndex)
{
	int highest = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= highest)
		{
			highest = arr[i];
			highestIndex = i;
		}
	}
	return highest;
}
/*
	int getLowest(int arr[], int size, int &lowestIndex)

	Calculate the type of salsa with the lowest sales in the last month

	Return Value: Salsa with the lowest jars sold in the last month 
*/

int getLowest(int arr[], int size, int &lowestIndex)
{
	int lowest = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] <= lowest)
		{
			lowest = arr[i];
			lowestIndex = i;
		}
	}
	return lowest;
}
/*
	void getAverage(int numberJarsSold[], string salsas[])

	Display the numbers of jars sold for each salsa type including the highest and lowest

	Return Value: None
*/
void getNumbers(int numberJarsSold[], string salsas[])
{
	int highest, lowest, highestSalsa, lowestSalsa;

	cout << "\nThe total number of jars sold last month were: " << endl << endl;
	for (int i = 0; i < TOTAL_SALSAS; i++)
	{
		cout << "The " << salsas[i] << " salsa jars sold were: " << numberJarsSold[i] << "." << endl;

		// Highest salsa sold 
		highest = getHighest(numberJarsSold, TOTAL_SALSAS, highestSalsa);
		cout << "The most sold salsa in the last month was " << salsas[highestSalsa] << " with " << highest << " jars sold." << endl;

		// Lowest salsas sold 
		lowest = getLowest(numberJarsSold, TOTAL_SALSAS, lowestSalsa);
		cout << "The least sold salsa in the last month was " << salsas[lowestSalsa] << " with " << lowest << " jars sold." << endl << endl;
	}
}