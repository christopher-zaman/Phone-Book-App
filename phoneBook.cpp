#include <iostream>
#include <string>
using namespace std;
int main()
{
	// This is where I will hold the records 
	string names[100];
	string numbers[100];
	int count = 0;

	//Loop until break, Display menu 
	while (true)
	{
		cout << "Welcome to phone book appplication" << endl;
		cout << "1 - Add a record" << endl;
		cout << "2 - Search by Name" << endl;
		cout << "3 - Search by Number" << endl;
		cout << "4 - Display All Contacts" << endl;
		cout << "0 - Exit" << endl;

		//User choice
		int choice;
		cout << "Pick one" << endl;
		cin >> choice;

		//Add contact to Phone Book
		if (choice == 1)
		{
			string name;
			cout << "Enter name: " << endl;
			cin >> name;

			string number;
			cout << "Enter Number: " << endl;
			cin >> number;

			names[count] = name;
			numbers[count] = number;
			count++;

		}
		//Search by name and display corresponing number.
		else if (choice == 2)
		{
			cout << "Enter the name to look up: " << endl;
			string searchName;
			cin >> searchName;
			for (int i = 0; i < count; i++)
			{
				if (searchName == names[i])
				{
					cout << searchName << "'s" << " number is: " << numbers[i] << endl;
				}
			}
		}
		//Search by number and display corresponding name.
		else if (choice == 3)
		{
			cout << "Enter the number to look up: " << endl;
			string searchNum;
			cin >> searchNum;
			for (int i = 0; i < count; i++)
			{
				if (searchNum == numbers[i])
				{
					cout << "The number " << searchNum << " Belongs to " << names[i] << endl;
				}
			}
		}
		//Display all records in the phone book.
		else if (choice == 4)
		{
			for (int i = 0; i < count; i++)
			{
				cout << "Name: " << names[i] << "Number: " << numbers[i] << endl;
			}
		}
		//Exit the program.
		else if (choice == 0)
		{
			break;
		}
	}

	system("pause");
	return 0;
}