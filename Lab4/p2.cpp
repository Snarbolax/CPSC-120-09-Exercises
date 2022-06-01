/**********************************************************************
Lab 4 – Program 2 (Math Tutor)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/20/2018
This program displays an addition problem consisting of two addends that range from 1-1000.
The user will be prompted to provide the answer to the addition problem.
If the answer is correct, then the program will congratulate the user.
If the answer is not correct, then the program will tell the user that he/she is wrong and will print the correct answer.
**********************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int userAnswer;
	int correctAnswer;
	int maxVal = 1000;
	int minVal = 1;
	int addend1;
	int addend2;
	string correct = "Congratulations! That's the correct answer!\n";
	string wrong = "Sorry, that is incorrect.. The correct answer was ";

	unsigned int seed = 0;
	seed = time(0);
	srand(seed);

	char unpause;

	cout << "Welcome to Math Tutor! Please answer the following question: " << endl;
	addend1 = (rand() % (maxVal - minVal + 1)) + 1;
	cout << setw(6) << addend1;
	addend2 = (rand() % (maxVal - minVal + 1)) + 1;
	correctAnswer = addend1 + addend2;
	cout << "\n+ " << setw(4) << addend2;
	cout << "\n------\n" << endl;

	cout << "Your guess: ";
	cin >> userAnswer;
	if (userAnswer == correctAnswer)
		cout << correct;
	else
		cout << wrong << correctAnswer << ".\n";

	cout << "\nPress any key to continue.\n";
	cin.get(unpause);
	cin.ignore(1, '\n');
	return 0;
}