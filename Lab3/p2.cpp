/**********************************************************************
Lab 3 – Program 2 (Celsius to Fahreneit Converter)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/06/2018
This program converts a user-inputted Celsius temperature to a Fahrenheit temperature.
**********************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare and initialize variables
	double celsiusTemp = 0.0;
	char unpause;

	//prompts user for celsius temperature input
	cout << "Please enter a temperature in Celsius: ";
	cin >> celsiusTemp;

	//calculate the user temperature input to a temperature in terms of fahrenheit
	double celsius2Fahrenheit = (((9 * celsiusTemp) / 5) + 32);

	//display converted temperature of celsius to fahrenheit
	cout << celsiusTemp << " degrees Celsius is " << celsius2Fahrenheit << " degrees Fahnrenheit." << endl;

	cout << "\nPRESS ANY KEY TO CONTINUE." << endl;
	cin.get(unpause);
	cin.ignore(1, '\n');
	return 0;
}