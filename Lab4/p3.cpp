/**********************************************************************
Lab 4 – Program 3 (Wave Type Identifier)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/20/2018
This program prompts the user to input the wavelength of an electromagnetic wave in meters.
Based on the user;s input, the program will identify and display the wave type.
**********************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double inputWave;

	char unpause;

	cout << "Input the wavelength of an electromagnetic wave in meters: ";
	cin >> inputWave; //input should look something like 1E-10
	if (inputWave >= (1 * pow(10, -2)))
		cout << "Congratulations! It's a Radio Wave!\n";
	else if (inputWave >= (1 * pow(10, -3)))
		cout << "Congratulations! It's a Microwave!\n";
	else if (inputWave >= (7 * pow(10, -7)))
		cout << "Congratulations! It's an Infrared Wave!\n";
	else if (inputWave >= (4 * pow(10, -7)))
		cout << "Congratulations! It's a Visible Light Wave!\n";
	else if (inputWave >= (1 * pow(10, -8)))
		cout << "Congratulations! It's an Ultraviolet Wave!\n";
	else if (inputWave >= (1 * pow(10, -11)))
		cout << "Congratulations! It's an X-ray!\n";
	else
		cout << "Congratulations! It's a Gamma Ray!\n";

	cout << "\nPress any key to continue.\n";
	cin.get(unpause);
	cin.ignore(1, '\n');
	return 0;
}