/**********************************************************************
Lab 3 – Program 3b (Datatype Size Exploration)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/06/2018
This program shows uses the sizeof operator to show the sizes of the following datatypes:
short, int, long, float, double, bool, and char.
**********************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare and intialize variables;
	int SIZEOF_SHORT = sizeof(short);
	int SIZEOF_INT = sizeof(int);
	int SIZEOF_LONG = sizeof(long);
	int SIZEOF_FLOAT = sizeof(float);
	int SIZEOF_DOUBLE = sizeof(double);
	int SIZEOF_BOOL = sizeof(bool);
	int SIZEOF_CHAR = sizeof(char);

	char unpause;

	//display the size of each datatype in bytes
	cout << "The short datatype is " << SIZEOF_SHORT << " bytes." << endl;
	cout << "The int datatype is " << SIZEOF_INT << " bytes." << endl;
	cout << "The long datatype is " << SIZEOF_LONG << " bytes." << endl;
	cout << "The float datatype is " << SIZEOF_FLOAT << " bytes." << endl;
	cout << "The double datatype is " << SIZEOF_DOUBLE << " bytes." << endl;
	cout << "The bool datatype is " << SIZEOF_BOOL << " bytes." << endl;
	cout << "The char datatype is " << SIZEOF_CHAR << " bytes." << endl;

	cout << "\nPRESS ANY KEY TO CONTINUE." << endl;
	cin.get(unpause);
	return 0;
}