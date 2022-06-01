/**********************************************************************
Lab 4 – Program 5 (Monthly Phone Bill Report)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/20/2018
This program displays a report of the user's inputted information and calculates the amount of money due for a month based on:
the amount of minutes used up and the package ('A', 'B', or 'C') the user has selected.
It also displays how much money Package A customers would
save if they purchased package B or C, and how much money package B customers
would save if they purchased package C. If there would be no savings, no message is printed.
If an invalid package has been inputted (i.e. anything that is not
'A', 'B', or 'C'), the program will display an error message instead.
**********************************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	string customerName;
	string phoneNumber;
	string address;
	char selectedPackage;
	int minutesUsed;

	double amountDue;
	double amountSaved;

	const double PACKAGE_A_MINIMUM = 39.99;
	const int PACKAGE_A_MINUTES = 450;
	const double ADDITIONAL_PACK_A_COSTS = 0.45;

	const double PACKAGE_B_MINIMUM = 59.99;
	const int PACKAGE_B_MINUTES = 900;
	const double ADDITIONAL_PACK_B_COSTS = 0.40;

	const double PACKAGE_C_MINIMUM = 69.99;

	cout << "Input customer's name: ";
	getline(cin, customerName);
	cout << "Input phone number: ";
	getline(cin, phoneNumber);
	cout << "Input address: ";
	getline(cin, address);
	cout << "Input purchased package (A, B, C): ";
	cin.get(selectedPackage);
	cin.ignore(1, '\n');
	cout << "Input minutes used: ";
	cin >> minutesUsed;

	if (selectedPackage != 'A' && selectedPackage != 'B' &&selectedPackage != 'C')
	{
		cout << "Error: Inputted package not found.\n";
	}
	else
	{
		cout << "\n" << setw(53) << "CUSTOMER'S MONTHLY BILL REPORT" << endl;
		cout << "\n/**********************************************************************\n" << endl;
		cout << "Name: " << customerName << endl;
		cout << "Phone Number: " << phoneNumber << endl;
		cout << "Address: " << address << endl;
		cout << "Selected Package: " << selectedPackage << endl;
		cout << "Minutes Used: " << minutesUsed << endl;
		cout << "Monthly Bill / Amount Due: $";
		if (selectedPackage == 'A')
		{
			if (minutesUsed >= PACKAGE_A_MINUTES)
				amountDue = PACKAGE_A_MINIMUM + ((minutesUsed - PACKAGE_A_MINUTES)*ADDITIONAL_PACK_A_COSTS);
			else
				amountDue = PACKAGE_A_MINIMUM;
			cout << showpoint << setprecision(2) << fixed << amountDue << endl;

			if (amountDue > (PACKAGE_B_MINIMUM))
			{
				if (minutesUsed >= PACKAGE_B_MINUTES)
					amountSaved = amountDue - (PACKAGE_B_MINIMUM + ((minutesUsed - PACKAGE_B_MINUTES)*ADDITIONAL_PACK_B_COSTS));
				else
					amountSaved = amountDue - (PACKAGE_B_MINIMUM);
				cout << "Amount Saved with Package B Purchased: $" << amountSaved << endl;
			}

			if (amountDue > PACKAGE_C_MINIMUM)
			{
				amountSaved = amountDue - PACKAGE_C_MINIMUM;
				cout << "Amount Saved with Package C Purchased: $" << amountSaved << endl;
			}
		}
		else if (selectedPackage == 'B')
		{
			if (minutesUsed >= PACKAGE_B_MINUTES)
				amountDue = PACKAGE_B_MINIMUM + ((minutesUsed - PACKAGE_B_MINUTES)*ADDITIONAL_PACK_B_COSTS);
			else
				amountDue = PACKAGE_B_MINIMUM;
			cout << showpoint << setprecision(2) << fixed << amountDue << endl;

			if (amountDue > PACKAGE_C_MINIMUM)
			{
				amountSaved = amountDue - PACKAGE_C_MINIMUM;
				cout << "Amount Saved with Package C Purchased: $" << amountSaved << endl;
			}
		}
		else
		{
			amountDue = PACKAGE_C_MINIMUM;
			cout << showpoint << setprecision(2) << fixed << amountDue << endl;
		}
		cout << "\n**********************************************************************/" << endl;
	}


	char pause;

	cout << "\nPress any key to continue.\n";
	cin.get(pause);
	cin.ignore(1, '\n');
	return 0;
}