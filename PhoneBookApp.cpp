#include <iostream>
#include <string>

using namespace std;

int main()
{
	// this is where I will hold the records 
	// and the phone numbers
	string names[100];
	string phones[100];
	int count = 0;

	while(true)
	{
		cout << "Ultimate Phone Book v1.2" << endl;		
		cout << "1- Add a Record" << endl;		
		cout << "2- Search By Name" << endl;		
		cout << "3- Search By Phone" << endl;		
		cout << "4- Display All" << endl;		
		cout << "0- Exit" << endl;		
		
		int choice;
		cout << "What do you want to do? " << endl;
		cin >> choice;

		if (choice == 1)
		{
			string name;
			cout << "Enter Name: ";
			cin >> name;
			
			string phone;
			cout << "Enter Phone Number: ";
			cin >> phone;
			
			names[count] = name;
			phones[count] = phone;

			count++;
		}

		if (choice == 4)  // report all records
		{
			for(int i=0; i < count; i++) {
				cout << names[i] << ": " << phones[i] << endl;
			}
		}


		if (choice == 0)
		{
			break;
		}
	}

}