/**********************************************************************
Lab 3 – Program 4 (Monthly/Annual Overhead Calculator)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/06/2018
This program calculates the user's total monthly and annual cost of expenses based on the user's monthly costs for:
rent or mortgage payment, ultilities (gas/water/electricity/trash), cell phone, and internet/cable.
**********************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//declare and initialize variables
	double rentMortgageCost = 0;
	double ultilitiesCost = 0;
	double cellphoneCost = 0;
	double internetCableCost = 0;

	char unpause;

	//prompts user input for monthly costs of rent or mortgage payment, ultilities , cell phone, and internet/cable
	cout << "Monthly/Annual Overhead Calculator" << endl;
	cout << "Please enter the dollar amount for the following bills:" << endl; // display prompt and ask user for actual values/costs of: rentMortgageCost, ultilitiesCost, cellphoneCost, and internetCableCost
	cout << "\tRent (or Mortgage Payment): $";
	cin >> rentMortgageCost; // set rentMortgageCost to user input
	cout << "\tUltilities: $"; 
	cin >> ultilitiesCost; // set ultilitiesCost to user input
	cout << "\tCell Phone: $";
	cin >> cellphoneCost; // set cellphoneCost to user input
	cout << "\tInternet/Cable: $";
	cin >> internetCableCost; // set rentMortgageCost to user input
	
	// calculate monthly expenses based on sum of rent or mortgage payment, ultilities , cell phone, and internet/cable
	double monthlyExpenses = rentMortgageCost + ultilitiesCost + cellphoneCost + internetCableCost;
	double annualExpenses = monthlyExpenses * 12; // annual expenses are calculated based on monthly expenses multiplied by 12 to indicate a full year of expenses

	// display monthly expenses and annual expenses
	cout << "\nYour monthly expenses are: $" << setprecision(2) << fixed << monthlyExpenses << endl;
	cout << "Your annual expenses are: $" << setprecision(2) << fixed << annualExpenses << endl;

	cout << "\nPRESS ANY KEY TO CONTINUE." << endl;
	cin.get(unpause);
	cin.ignore(1, '\n');
	return 0;
}