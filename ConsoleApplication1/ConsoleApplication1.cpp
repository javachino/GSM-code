// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <string>

void Change(double change);
void cashRegister();


void Change(double change)
{
	int coins = change * 100;

	int pound = coins / 100;
	int fifty = coins % 100 / 50;
	int twenty = coins % 100 % 50 / 20;
	int ten = coins % 100 % 50 % 20 / 10;
	int five = coins % 100 % 50 % 20 % 10 / 5;
	int two = coins % 100 % 50 % 20 % 10 % 5 / 2;
	int one = coins % 100 % 50 % 20 % 10 % 5 % 2;

	cout << "Change is equal to: " << endl <<
			"Pounds: " << pound << endl <<
			"Fiftees: " << fifty << endl <<
			"Twenties: " << twenty << endl <<
			"tens: " << ten << endl <<
			"fives: " << five << endl <<
			"Twos: " << two << endl <<
			"Ones: " << one << endl;

	
}

int main()
{
	char choice = 'Y';
	

	while (choice == 'Y' || choice == 'y')
	{
		cashRegister();
		cout << "Would you like to purchase another item?\n Y/N ";
		cin >> choice;
	}
	cout << "Thank-you" << endl;

	system("pause");

	return 0;
}


void cashRegister()
{
	double price = 0;
	double cash = 0;
	cout << "Please Enter the price of the item..." << endl;
	cin >> price;
	cout << "Enter cash amount... " << endl;
	cin >> cash;

	double change = cash - price;
	cout << "Change due:" << change << endl;

	Change(change);
}