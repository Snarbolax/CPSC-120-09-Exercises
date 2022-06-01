/**********************************************************************
Lab 4 – Program 1 (Geometric Area Calculator)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/20/2018
This program displays a menu with 4 options to choose from.
Options 1-3 will calculate the area of a circle, rectangle, or triangle based on a given dimension.
Option 4 will end the program.
**********************************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

double pi = 3.14;

int main()
{
	int choice = 0;
	double area = 0;

	string errorMenu = "\nError: Invalid input for menu choice.\n";
	string errorDimension = "\nError: Invalid input(s) for the geometric shape's dimension(s).\n";
	string goodbye = "\nThanks for nothing :)\n";

	char unpause;

	cout << "Geometry Calculator";
	cout << "\n\t1. Calculate the Area of a Circle";
	cout << "\n\t2. Calculate the Area of a Rectangle";
	cout << "\n\t3. Calculate the Area of a Triangle";
	cout << "\n\t4. Quit" << endl;
	cout << "\n\tEnter your choice (1-4): ";

	cin >> choice;
	if (choice == 1)
	{
		double radius;
		cout << "Enter the radius of the circle. ";
		cin >> radius;
		if (radius < 0)
			cout << errorDimension;
		else
		{
			area = pi * pow(radius, 2);
			cout << "Circle Area: " << showpoint << setprecision(2) << fixed << area << endl;
		}
	}
	else if (choice == 2)
	{
		double length;
		double width;
		cout << "Enter the length and width of the rectangle. ";
		cin >> length >> width;
		if (length < 0 || width < 0)
			cout << errorDimension;
		else
		{
			area = length * width;
			cout << "Rectangle Area: " << showpoint << setprecision(2) << fixed << area << endl;
		}
	}
	else if (choice == 3)
	{
		double base;
		double height;
		cout << "Enter the base and height of the triangle. ";
		cin >> base >> height;
		if (base < 0 || height < 0)
			cout << errorDimension;
		else
		{
			area = (base * height) / 2;
			cout << "Triangle Area: " << showpoint << setprecision(2) << fixed << area << endl;
		}
	}
	else if (choice == 4)
		cout << goodbye;
	else
		cout << errorMenu;

	cout << "\nPress any key to continue.\n";
	cin.get(unpause);
	cin.ignore(1, '\n');
	return 0;
}