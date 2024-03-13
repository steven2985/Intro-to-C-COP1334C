#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct speakerBureau
{
	string name;
	string TelephoneNumber;
	string SpeakTopic;
	int fee;
};

void getSpeaker(speakerBureau *);
void printSpeaker(speakerBureau *);
void editSpeaker(speakerBureau *);
void searchSpeakTopic(speakerBureau*);

int main()

{
	int NUM_SPEAKERS = 10;
	speakerBureau info[10];


	int menu;
	const int enter = 1,
		change = 2,
		print = 3,
		leave = 4;


	do {
		cout << "\n1. Enter new speaker information"
			<< "\n2. Change speaker information"
			<< "\n3. Display all speaker information"
			<< "\n4. Exit the program"
			<< "\n\nEnter your choice: ";
		cin >> menu;

		switch (menu)
		{
		case enter:
		{

			getSpeaker(info);
		}
		break;
		case change:
		{

			editSpeaker(info);
		}
		break;
		case print:
		{

			printSpeaker(info);
		}
		break;
		} break;
	} while (menu != 4);


	system("pause");
	return 0;
}

void getSpeaker(speakerBureau *p) //array name = pointer
{

	int i = 0;
	int size = 10;
	for (i = 0; i < size; i++)
	{
		cout << "\nSpeaker name: ";
		cin.ignore();
		getline(cin, p[i].name);
		cout << "Telephone: ";
		cin.ignore();
		getline(cin, p[i].TelephoneNumber);
		cout << "Speaking topic: ";
		cin.ignore();
		getline(cin, p[i].SpeakTopic);
		cout << "Fee required: $";
		cin >> p[i].fee;
		cout << "You have entered information for speaker number " << i << endl;;
		cout << "Press enter to continue ...";
	}
}

void printSpeaker(speakerBureau *p)
{
	int i = 0;
	int size = 10; //Array size
	for (i = 0; i < size; i++)
	{
		cout << "The information entered for each speaker is: ";
		cout << "Speaker " << i;
		cout << " Speaker name: " << p[i].name;
		cout << " telephone : " << p[i].TelephoneNumber;
		cout << " Speaking topic: " << p[i].SpeakTopic;
		cout << " Fee required: " << p[i].fee << endl;
		cout << " You have entered information for speaker number " << i << endl << endl;

	}
}

void editSpeaker(speakerBureau *p)
{
	int i;
	cout << "Enter your choice." << endl << endl;
	cin >> i;
	if (i <= 9)
	{
		cout << "\nSpeaker name: ";
		cin.ignore();
		getline(cin, p[i].name);
		cout << "\nTelephone: ";
		cin.ignore();
		getline(cin, p[i].TelephoneNumber);
		cout << "\nSpeaking topic: ";
		cin.ignore();
		getline(cin, p[i].SpeakTopic);
		cout << "\nFee required: $";
		cin >> p[i].fee;
		cout << "\nYou have entered information for speaker number " << i << endl << endl;
	}
	else
	{
		cout << "Please pick a number between 0-9" << endl;
	}
}

void searchSpeakTopic(speakerBureau*p)
{
	int i = 0;
	int topic;

	cout << " Please type a topic in the program" << endl;

	cin >> topic;


}