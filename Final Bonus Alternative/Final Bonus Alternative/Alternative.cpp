/*
	Steven Fernandez

	Final Test Lab.cpp

	Database management program

	Input:

	Processing:

	Output:

*/

// Header Files
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

// User-Defined Data Type

struct Inventory
{
	int    itemNumber;
	string itemName;
	int    itemCount;
	double itemPrice;
};

// Global Constants 
const int SIZE = 50;

// Function Prototypes
void ReadInData(Inventory[], int&);
void CreateReport(Inventory[], int);
Inventory getItem();
void addItemToFile(Inventory);
float totalCost(Inventory[], int size);

int main()
{
	// Variable Declarations
	Inventory myInventory[SIZE];
	Inventory newItem;
	double	  total;
	int       count;

	// Read in data from Inventory.txt
	ReadInData(myInventory, count);

	// Display data read in
	CreateReport(myInventory, count);


	/*int choice;
	do {
		cout << "\nDo you want to add an item to the Database? (1 for yes and 2 for no)" << endl;
		cin >> choice;
		if (choice == 1)
		{
			// Prompt user for new item
			newItem = getItem();

			// Add new item to inventory.txt
			addItemToFile(newItem);

			ReadInData(myInventory, count);

			// Display total cost of items in my inventory[]
			total = totalCost(myInventory, count);
			cout << endl << endl << "Total Cost of Items: $" << total << endl;

			CreateReport(myInventory, count);
		}
		else if (choice == 2)
		{
			break;
		}
		else
		{
			cout << "Error: Please input either a 1 for yes or 2 for no...!" << endl;
		}
	} while (choice != 1 || choice != 2);*/

	// Prompt user for new item 
	newItem = getItem();

	// Add new item to inventory.txt
	addItemToFile(newItem);

	ReadInData(myInventory, count);

	// Display total cost of items in my inventory[]
	total = totalCost(myInventory, count);
	cout << endl << endl << "Total Cost of Items: $" << total << endl;

	CreateReport(myInventory, count);

	cout << endl;
	system("pause");
	return 0;
}

/*
	void ReadInData(Inventory arr[], int& n)
*/
void ReadInData(Inventory arr[], int& n)
{
	ifstream inFile;

	// Open file
	inFile.open("Inventory.txt");

	if (!inFile)
	{
		cout << "Fatal Error ... Could not open Inventory.txt" << endl;
		exit(EXIT_FAILURE);
	}

	// Read in data from Invetory.txt int arr[] 
	// Update n with items read
	n = 0;
	while (inFile >> arr[n].itemNumber)
	{
		inFile >> arr[n].itemName;
		inFile >> arr[n].itemCount;
		inFile >> arr[n].itemPrice;
		n++;
	}

	// Close File
	inFile.close();

}

/*
	void CreateReport(Inventory arr[], int n)

	Display the contents in the array as a report

	Return Value: None
*/

void CreateReport(Inventory arr[], int n)
{
	// Display header
	cout << "\n*******************************"
		<< "Inventory Report"
		<< "******************************" << endl;
	cout << setw(20) << left << "Item Number"
		<< setw(20) << left << "Item Name"
		<< setw(20) << left << "Item Count"
		<< "Item Price" << endl;
	cout << "-----------------------------"
		<< "------------------"
		<< "------------------------------" << endl;

	// Set number formatting
	cout << fixed << showpoint << setprecision(2);
	// Display items
	for (int i = 0; i < n; i++)
		cout << setw(20) << left << arr[i].itemNumber
		<< setw(20) << left << arr[i].itemName
		<< setw(20) << left << arr[i].itemCount
		<< "$" << arr[i].itemPrice << endl;

}

/*
	Inventory getItem

	Prompt user for a new inventory item and return it

	Return Value: New inventory item

*/

Inventory getItem()
{
	Inventory data;

	// Prompt user for new item 
	cout << "\nPlease enter new inventory item data ..." << endl;
	cout << "Item Number: ";
	cin >> data.itemNumber;
	cout << "Item Name: ";
	cin >> data.itemName;

	do
	{
		cout << "Item Count: ";
		cin >> data.itemCount;

		if (data.itemCount < 1)
			cout << "\nError ... Invalid Count. Please Try Again." << endl;

	} while (data.itemCount < 1);

	do
	{
		cout << "Item Price: ";
		cin >> data.itemPrice;

		if (data.itemPrice < 1)
			cout << "\nError ... Invalid Price. Please Try Again." << endl;

	} while (data.itemPrice < 1);

	return data;
}

/*
	void addItemToFile(Inventory)

	Accepts the new inventory item and appends it to the existing file

	Reurn Value: None
*/

void addItemToFile(Inventory data)
{
	fstream myFile;

	// Open file
	myFile.open("Inventory.txt", ios::app);
	if (myFile)
	{
		myFile << endl << data.itemNumber << "\t" << data.itemName << "\t" << data.itemCount << "\t" << data.itemPrice;
	}
	// Close file
	myFile.close();

	return;
}


/*
	float totalCost(Inventory[], int size)

	Calculate and return the total cost of all of the items in the array

	Return Value:
*/

float totalCost(Inventory arr[], int size)
{
	double Sum = 0;

	for (int i = 0; i < size; i++)
	{
		Sum = Sum + arr[i].itemCount * arr[i].itemPrice;

	}

	return Sum;
}
