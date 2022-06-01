/**********************************************************************
Lab 3 – Program 5 (Movie Report Program)
Programmer: Kenneth Doan
Section: 120-09
Date: 03/13/2018
This program that calculates a theater's gross and net box office revenue for a night based on: prices of adult and child tickets,
percentage of gross revenue kept, and precentage of gross revenue going to the distributor.
The program asks for the name of the movie, and how many adult and child tickets were sold.
**********************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	// declare and initialize variables
	string movieName = "";
	int adultTicketsSold; // price for each adult ticket is $10
	double adultTicketPrice = 10.0;
	int childTicketsSold; // price for each child ticket is $6
	double childTicketPrice = 6.0;
	double grossRevenue;
	double percentRevenueKept = .8;
	double revenueKept;
	double percentRevenueDist = .2;
	double revenueDist;

	char unpause;

	//prompts user for number of adult tickets sold and number of child tickets sold
	cout << "Welcome to the Movie Report Program." << endl;
	cout << "Enter the name of the movie: ";
	getline(cin, movieName);
	cout << "Enter how many Adult tickets were sold: ";
	cin >> adultTicketsSold;
	cout << "Enter how many Child tickets were sold: ";
	cin >> childTicketsSold;

	//calculates gross revenue based on number of adult and child tickets sold and the set price of each type of ticket.
	grossRevenue = (adultTicketPrice*adultTicketsSold) + (childTicketPrice*childTicketsSold);
	revenueKept = grossRevenue*percentRevenueKept; // calculates revenue kept based on the gross revenue and set percentage of kept revenue.
	revenueDist = grossRevenue*percentRevenueDist; // calculates revenue given to distributor based on the gross revenue and set percentage of given revenue.

	// display report
	cout << "\nGenerating Report..." << endl;
	cout << "\nReport for " << movieName << ":" << endl;
	cout << "Movie Name: " << setw(38) << movieName;
	cout << "\nAdult Tickets Sold: " << setw(23) << adultTicketsSold;
	cout << "\nChild Tickets Sold: " << setw(23) << childTicketsSold;
	cout << "\nGross Box Office Revenue: " << setw(16) << "$ " << setprecision(2) << fixed << grossRevenue;
	cout << "\nAmount Paid to Distributor: " << setw(15) << "-$ " << setprecision(2) << fixed << revenueDist;
	cout << "\nNet Box Office Revenue: " << setw(18) << "$ " << setprecision(2) << fixed << revenueKept;

	cout << "\nPRESS ANY KEY TO CONTINUE." << endl;
	cin.get(unpause);
	cin.ignore(1, '\n');
	return 0;
}