/**********************************************************************
Lab 3 – Program 3b (Datatype Size Exploration)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/06/2018
This program shows what happens when a short and an unsigned short overflow by adding 1 to their respective max values.
**********************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{

	char unpause;

	short signedShort = 32767; // initialize and declare signedShort to the max value of a signed short: 32767
	unsigned short unsignedShort = 65535; // initialize and declare unsignedShort to the max value of an unsigned short: 65535

	cout << "signedShort == " << signedShort << endl; // display current value for signedShort
	cout << "unsignedShort == " << unsignedShort << endl; // display current value for unsignedShort

	signedShort = signedShort+1; // add 1 to the value of signedShort to trigger an overflow
	unsignedShort = unsignedShort+1; // add 1 to the value of unsignedShort to trigger an overflow

	cout << "\nsignedShort == " << signedShort << endl; // display current value for signedShort after an overflow of 1
	cout << "\unsignedShort == " << unsignedShort << endl; // display current value for unsignedShort after an overflow of 1

	signedShort = signedShort - 1; // subtract 1 from the value of signedShort after an overflow
	unsignedShort = unsignedShort - 1; // subtract 1 from the value of unsignedShort after an overflow

	cout << "\nsignedShort == " << signedShort << endl; // display current value for signedShort
	cout << "unsignedShort == " << unsignedShort << endl; // display current value for unsignedShort


	cout << "\nPRESS ANY KEY TO CONTINUE." << endl;
	cin.get(unpause);
	return 0;
}