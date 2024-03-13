/*

  Steven Fernandez

  lowestScore.cpp

  program that calculates the average of a group of five test scores, where the lowest score in the group is dropped. 

  Input: Five scores (0-100)

  Processing: 1. Prompt user for five scores (s1 .... s5)
			  2. Find the lowest score (lowest)
			  3. Calculate the average of the four highest scores 
			      average = (s1 + s2 + s3 + s4 + s5 - lowest) / 4
              4. Display result

  Output: Average of the fourth highest scores 

*/

// Header files
#include<iostream>
#include<iomanip>
using namespace std;

// Function Prototypes
void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);


int main()
{
	// Variables
	int s1, s2, s3, s4, s5;

	// Intro
	cout << "\nAverage of Four Highest Scores App ..." << endl;

	// Prompt user for five scores
	getScore(s1);
	getScore(s2);
	getScore(s3);
	getScore(s4);
	getScore(s5);

	// Calculate and display the average of the four highest scores
	calcAverage(s1, s2, s3, s4, s5);

	system("pause");
	return 0;
}

/*
   void getScore(int & score)

   Prompt user for score between (0-100) and return it 
   through the reference parameter score.

   Return Value: None

*/

void getScore(int & score)
{
	// Prompt user for score between (0-100)
	do
	{
		cout << "\nPlease enter score between (0-100): ";
		cin >> score;
		
		if (score < 0 || score > 100)
			cout << "\tError .. Invalid score. Please Try Again." << endl;

	} while (score < 0 || score > 100);

	return;
}

/*
	void calcAverage(int 1, int 2, int 3, int 4, int 5)

	Calculate and display the average of the four out of five highest scores (s1-s5)

	Return value: None

*/
void calcAverage(int s1, int s2, int s3, int s4, int s5)
{
	double average;
	int lowest;

	// Find the lowest score
	lowest = findLowest(s1, s2, s3, s4, s5);

	// Calculate average of 4 highest scores
	average = (s1 + s2 + s3 + s4 + s5 - lowest) / 4.0;

	// Display result 
	cout << "\nThe average of the four highest scores is "
		<< fixed << showpoint << setprecision(0) << average << endl << endl;

	return;
}

/*
	int findLowest(int s1, int s2, int s3, int s4, int s5)

	Find and return the lowest of the five scores (s1-s5)

	Return Value: Lowest Score

*/

int findLowest(int s1, int s2, int s3, int s4, int s5)
{
	int lowest;

	// Find the lowest score 
	lowest = s1;

	if (s2 < lowest)
		lowest = s2;
	if (s3 < lowest)
		lowest = s3;
	if (s4 < lowest)
		lowest = s4;
	if (s5 < lowest)
		lowest = s5;

	return lowest;
}