/**********************************************************************
Lab 3 – Program 1 (Simple Calculator Program)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/06/2018
This program takes in two numbers and produces their: sum,
difference, product, quotient, and remainder.
**********************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare and initialize variables
	int value1 = 1;
	int value2 = 1;

	char unpause;

	//prompts user for 2 int inputs
	cout << "Please enter two integer values:";
	cin >> value1 >> value2;

	// calculations of the sum, difference, product, dividend, and dividend's remainder based on the two user inputs
	int valueSum = value1 + value2;
	int valueDifference = value1 - value2;
	int valueProduct = value1 * value2;
	int valueDividend = value1 / value2;
	int dividendRemainder = value1 % value2;

	// display sum, difference, product, dividend, and dividend's remainder of the two inputs
	cout << "\n" << value1 << " + " << value2 << " = " << valueSum << endl;
	cout << value1 << " - " << value2 << " = " << valueDifference << endl;
	cout << value1 << " * " << value2 << " = " << valueProduct << endl;
	cout << value1 << " / " << value2 << " = " << valueDividend << " with a remainder of " << dividendRemainder << endl;

	cout << "\nPRESS ANY KEY TO CONTINUE." << endl;
	cin.get(unpause);
	cin.ignore(1, '\n');
	return 0;
}