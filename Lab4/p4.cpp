/**********************************************************************
Lab 4 – Program 4 (Primary Color Mixer)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/20/2018
This program displays menu and prompts the user to input a combination of two primary colors.
The program then outputs a secondary color based off of the two inputted primary colors.
Invalid outputs (i.e. any string that's not "red", "blue", "yellow", or inputs that are a combination of two of any same primary color) will result in an error message.
**********************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string primaryColor1 = "red";
	string primaryColor2 = "blue";
	string primaryColor3 = "yellow";

	string colorMix12 = "Purple"; //mix of red and blue
	string colorMix13 = "Orange"; //mix of red and yellow
	string colorMix23 = "Green"; //mix of blue and yellow

	string colorInput1;
	string colorInput2;

	string errorColor = "\nError: Invalid color(s) inputted.\n";
	char unpause;

	cout << "Primary Color Mixer";
	cout << "\n\t" << primaryColor1;
	cout << "\n\t" << primaryColor2;
	cout << "\n\t" << primaryColor3 << endl;

	cout << "\n\tInput the names of two primary colors to mix: ";
	getline(cin, colorInput1);
	getline(cin, colorInput2);

	if (colorInput1 != primaryColor1 && colorInput1 != primaryColor2 && colorInput1 != primaryColor3 || colorInput2 != primaryColor1 && colorInput2 != primaryColor2 && colorInput2 != primaryColor3 || colorInput1 == colorInput2)
		cout << errorColor;
	else
	{
		if (colorInput1 == primaryColor1) //red
		{
			cout << "\nCongratulations! You got " << ((colorInput2 == primaryColor2) ? colorMix12 : colorMix13) << "!" << endl;
		}
		else if (colorInput1 == primaryColor2) //blue
		{
			cout << "\nCongratulations! You got " << ((colorInput2 == primaryColor1) ? colorMix12 : colorMix23) << "!" << endl;
		}
		else if (colorInput1 == primaryColor3) //yellow
		{
			cout << "\nCongratulations! You got " << ((colorInput2 == primaryColor1) ? colorMix13 : colorMix23) << "!" << endl;
		}
	}

	cout << "\nPress any key to continue.\n";
	cin.get(unpause);
	cin.ignore(1, '\n');
	return 0;
}