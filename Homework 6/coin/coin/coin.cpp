/*
 
 Steven Fernandez

 coin.cpp

 Simulates the tossing of a coin 

 Input: Number of times the coin will be tossed 

 Processing: 1. Prompt user for the number of times the coin will be tossed (n)
             2. From 1 to n:
			     Genereta a random number (1 or 2)
				 if 1 => Display Heads 
				 if 2 => Display Tails 

 Output: Simulated coin toss (Heads/Tails) as many times as 
         indicated by the user

*/

// Header files
#include<iostream>
#include<random>
#include<ctime>
using namespace std;

// Function prototypes
void coinToss();

int main()
{
	// Variable Declaration
	int n; // Numver of times coin will be tossed

	// Intro
	cout << "\nCoin Toss Simulator ..." << endl << endl;

	// Prompt user for number of times the coin will be tossed
	do
	{
		cout << "How many times will the coin be tossed? ";
		cin >> n;

		if (n < 0)
			cout << "\tError Invalid Number. Try Again" << endl;

	} while (n < 0);

	// Seed random function 
	srand(time(NULL));

	// Simulate coin tosses
	for (int i = 1; i <= n; i++)
		coinToss();

	system("pause");
	return 0;
}

/*
  void coinToss()

  Simulate a coin toss & display Heads/Tails

  Return Value: None

*/
void coinToss()
{
	int toss;
	// Generate random number (1, 2)
	toss = rand() % 2 + 1; // 1 or 2

	// Display Heads/Tails
	if (toss == 1)
		cout << "\tHeads" << endl;
	else
		cout << "\tTails" << endl;

	return; 
}