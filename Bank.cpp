#include "Bank.h"

using namespace std;

Bank::Bank()
{
	name_bank = "";
	size_bank = 0;
	total_balance = 0;;
}

Bank::Bank(string name_bank, int size_bank, int total_balance)
{
	this->name_bank = name_bank;
	this->size_bank = size_bank;
	this->total_balance = total_balance;
}

void Bank::Addbank()
{
	cout << "\n\n\tBank name: ";
	cin >> name_bank;

	//cout << "\n\tEnter size: ";
	//cin >> size_bank;
}
