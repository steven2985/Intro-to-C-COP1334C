/*
	Steven Fernandez

	monkey.cpp 

	Program that stores this information in a two-dimensional 3 x 5 array,
	where each row represents a different moneky and each column represents a different day of the week.

	Input: Number of pounds consumed by a family of 3 monkeys during 5 days

	Processing: 1. Prompt user for the amount of pounds each monkey consumed each day of the week
				2. Calculate the average of pounds consume by the family each day
				3. Calculate the monkey with the highest and lowest consumption during the week
				4. Determine & Display
				    - Monkey with the highest and lowest consumption 
				  
	Output: Display Report
*/

// Header Files
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

// Global Constants
const int MONKEYS = 3;
const int DAYS = 5;

//Function Prototypes
int highestConsumption(int[][DAYS]);
int lowestConsumption(int[][DAYS]);
void getMessage(int[][DAYS], int);
void getAverage(int[][DAYS], int);
void getNumbers(int[][DAYS], int);

int main()
{
	// Variables Declaration 
	int monkeyPounds[MONKEYS][DAYS];

	// Intro
	cout << "\nMonkey Food Consumption App ..." << endl << endl;

	// Prompt user for the amount of food eaten by each monkey during the week
	getMessage(monkeyPounds, MONKEYS);

	// Calculate Average 
	getAverage(monkeyPounds, MONKEYS);

	// Report with the highest and lowest amount of food consumed by the monkeys 
	getNumbers(monkeyPounds, MONKEYS);
	
	
	system("pause");
	return 0;
}
/*
	void getMessage(int monkeyPounds[][DAYS], int monkeys)

	Prompt user for the amount of food consumed by each monkey every day

	Return Value: None
*/
void getMessage(int monkeyPounds[][DAYS], int monkeys)
{
	int monkey, days;

	cout << "Please enter the amount of food in pounds eaten by each monkey every day " << endl << endl;
	for (monkey = 0; monkey < MONKEYS; monkey++)
	{
		for (days = 0; days < DAYS; days++)
		{
			do
			{
				cout << "Monkey #" << (monkey + 1);
				cout << ", Day " << (days + 1) << ": ";
				cin >> monkeyPounds[monkey][days];
				cout << endl;

				if (monkeyPounds[monkey][days] < 0)
					cout << "Error ... Pounds must be greater than 0. Please try again." << endl;

			} while (monkeyPounds[monkey][days] < 0);
		}
	}
}
/*
	int highestConsumption(int food[][DAYS])

	Calculate the monkey with the highest consumption in the week

	Return Value: Monkey with the highest pound consumption in the week
*/
int highestConsumption(int food[][DAYS])
{
	int highest = INT_MIN;

	for (int monkey = 0; monkey < MONKEYS; monkey++)
	{
		for (int days = 0; days < DAYS; days++)
		{
			if (food[monkey][days] > highest)
				highest = food[monkey][days];
		}
	}
	return highest;
}
/*
	int lowestConsumption(int food[][DAYS])

	Calculate the monkey with the lowest consumption in the week

	Return Value: Monkey with the lowest pound consumption in the week
*/
int lowestConsumption(int food[][DAYS])
{
	int lowest = INT_MAX;

	for (int monkey = 0; monkey < MONKEYS; monkey++)
	{
		for (int days = 0; days < DAYS; days++)
		{
			if (food[monkey][days] < lowest)
				lowest = food[monkey][days];
		}
	}
	return lowest;
}
/*
	void getAverage(int monkeyPounds[][DAYS], int monkeys)

	Calculate and display the average amounf of food consumed by the family each day

	Return Value: None
*/
void getAverage(int monkeyPounds[][DAYS], int monkeys)
{
	int days = 0, total, monkey;
	double average;

	for (days = 0; days < DAYS; days++)
	{
		total = 0;
		for (monkey = 0; monkey < MONKEYS; monkey++)
		{
			total += monkeyPounds[monkey][days];
		}

		average = static_cast<double>(total) / DAYS;

		cout << fixed << showpoint << setprecision(1);
		cout << "The average food consumption of the family of monkeys in day #" << (days + 1) << " was of " << average << " pounds." << endl;
	}
}
/*
	void getNumbers(int monkeyPounds[][DAYS], int monkeys)

	Display the monkey with the lowest and highest food consumption during the week

	Return Value: None
*/
void getNumbers(int monkeyPounds[][DAYS], int monkeys)
{
	int highest, lowest;

	// Highest amount of food eaten by a monkey in the week
	highest = highestConsumption(monkeyPounds);
	cout << "The highest amount of food eaten by a monkey was " << highest << " pounds." << endl;

	// Lowest amount of food eaten by a monkey in the week
	lowest = lowestConsumption(monkeyPounds);
	cout << "The lowest amount of food eaten by a monkey was " << lowest << " pounds." << endl;
}