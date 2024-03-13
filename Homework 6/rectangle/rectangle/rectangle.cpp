/*

 Steven Fernandez

 rectangle.cpp

 Prompt user for the width & height of a rectangle, calculate
 its area, and display the result 

 Input: Reactangle's length & width 

 Processing: 1. Prompt user for the width & length of a rectangle
             2. Calculate rectangle's area
			     area = length * width
             3. Display result 

 Output: Display rectangle's area

*/

// Header files
#include<iostream>
using namespace std;

// Function prototypes 
double getWidth();
double getLength();
double calcArea(double, double);
void displayData(double, double, double);

int main()
{
	// Variable declaration 
	double length, width, area;

	// Intro 
	cout << "\nRectangle Area Calculator ..." << endl;

	// Prompt user for the width & length
	width = getWidth();
	length = getLength();

	// Calculate rectangle's area
	area = calcArea(length, width);

	// Display area 
	displayData(length, width, area);

	system("pause");
	return 0;
}

/*
	double getLength()

	Prompt user for the length of a rectangle & return it to the caller

	Return value: rectangle's length

*/
double getLength()
{
	double length;

	// Prompt user for the length of a rectangle (>0)
	do
	{
		cout << "\nEnter length of a rectangle: ";
		cin >> length;

		if (length < 0)
			cout << "Error ... Invalid length. Please Try again." << endl;

	} while (length < 0);

	return length;
}

/*
    double getWidth()

	Prompt user for the width of a rectangle & return it to the caller

	Return Value: rectangle's width 

*/

double getWidth()
{
	double width;
	
	// Prompt user for the width of a rectangle (>0)
	do
	{
		cout << "\nEnter width of a rectangle: ";
		cin >> width;

		if (width < 0)
			cout << "Error ... Invalid width. Please Try again." << endl;

	} while (width < 0);

	return width;
}

/*
	double calcArea(double len, double wid)

	Calculate the area of the rectangle

	Return value: rectangle's area

*/

double calcArea(double len, double wid)
{
	double area;

	// Calcualte area of the rectangle 
	area = len * wid;

	return area;
}

/*
	void displayData(double l, double w, double a)

	Display the area of the rectangle

*/
void displayData(double l, double w, double a)
{
	cout << "\nThe length of the rectangle is " << l << endl;
	cout << "The width of the rectangle is " << w << endl;
	cout << "The area of the rectangle is " << a << endl << endl;

}
