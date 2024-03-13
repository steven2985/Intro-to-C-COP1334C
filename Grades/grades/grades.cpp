/*

 Steven Fernandez

 assignment.cpp
 
 Menu-driven interace program that computes a student's final grade and score

 Input: - Menu option
        - student name
		- midterm grade
		- final exam grade
		- project score

 Processing: 1. Propmt user for an option
             2. Ask for the student name, final exam score, and project score
			 3. calculate final grade
			   - finalScore = (midTerm + finalExam + projectScore) / 3;
             4. calculate average grade
			   - averageGrade = static_cast <int> (ceil(finalScore * 100));
             5. Save data into the file

 Output: Display student name, final score, and grade

*/

// Header files
#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	// Variables
	int midTerm, finalExam, projectScore, option, finalScore;
	string studentName, judgement, classGrade;
	fstream myFile;
	double averageGrade;

	do
	{

		// Menu
		cout << "\nStudent's grade ..." << endl;
		cout << "\n1. Calculate Student Grade";
		cout << "\n2. Quit";
		cin >> option;
		cin.ignore();

		switch (option)
		{
			case 1:// Option 1
				getline(cin, studentName); // Clear buffer
				cout << "\nPlease enter Student name: ";
					cin >> studentName;

				if (midTerm <= 100 || midTerm >= 0)
				{
						cout << "\nPlease enter midterm grade: ";
						cin >> midTerm;
				} while (midTerm <= 100 || midTerm >= 0);

				if (finalExam <= 100 || finalExam >= 0)
				{
					cout << "\nPlease enter Student final grade: ";
					cin >> finalExam;
				} while (finalExam <= 100 || finalExam >= 0);
				
				if (projectScore <= 100 || projectScore >= 0)
				{
					cout << "\nPlease enter Student project score: ";
					cin >> projectScore;

				} while (projectScore <= 100 || projectScore >= 0);
				
					// Calculate final score and average 
				finalScore = (midTerm + finalExam + projectScore) / 3;
				averageGrade = static_cast <int> (ceil(finalScore * 100));

				if (finalScore <= 100 && finalScore >= 90)
					classGrade = "A";
				else
					if (finalScore <= 89 && finalScore >= 80)
						classGrade = "B";
					else
						if (finalScore <= 79 && finalScore >= 70)
							classGrade = "C";
						else
							if (finalScore <= 69 && finalScore >= 60)
								classGrade = "D";
							else
								if (finalScore <= 59 && finalScore >= 0)
									classGrade = "F";

				cout << "\nStudent Grade" << endl;
				cout << "---------------------------" << endl;
				cout << setw(25) << left << "Name:"
					<< setw(25) << left << studentName
					<< setw(25) << left << "Final Score:"
					<< fixed << setprecision(1)
					<< setw(25) << left << finalScore
					<< setw(25) << left << "Class Grade:"
					<< setw(25) << left << classGrade << endl;
 
					// Save to file
				myFile.open("COP1334C.txt", ios::app);
				myFile >> studentName >> finalScore >> classGrade;
				myFile.close();

					break;

			case 2: // Quit
				cout << "\nGoog bye" << endl;
						break;
			            default:
							cout << "\nError ... Try Again" << endl;
		}


	} while (option != 2);
	         cout << "Error ... Could not open file" << endl;


    system("pause");
	return 0;

}