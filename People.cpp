#include <iostream>
#include "People.h"

using namespace std;

Bank::Bank()
{
	name_bank = "";
	total_balance = 0;;
}

Bank::Bank(string name_bank, int total_balance)
{
	this->name_bank = name_bank;
	this->total_balance = total_balance;
}

void Bank::Addbank()
{
	cout << "\n\n\tBank name: ";
	cin >> name_bank;
}


People::People()
{

	name_k = "";
	size_k = 0;
	balance_k = 0;
}

People::People(string name, int balance, int size)
{
	this->name_k = name_k;
	this->size_k = size_k;
	this->balance_k = balance_k;
}

void People::SizeBank()
{
	cout << "\n\tEnter size: ";
	cin >> size_k;
}

void People::Add_New_Klients()
{
	Bank banks;

	klients = new People[size_k];
	for (int i = 0; i < size_k; i++)
	{
		cout << "Press name: " << endl;
		cin >> klients[i].name_k;
		cout << "Press balance: " << endl;
		cin >> klients[i].balance_k;
	}

}

void People::Print_All()
{
	int total = 0;
	for (int i = 0; i < size_k; i++)
	{
		cout << "Klient " << i << endl;
		cout << "Name: " << klients[i].name_k << endl << endl;
		total += klients[i].balance_k;
	}

	cout << "Balance bank: " << total;;
	
}
