#include <iostream>
#include "People.h"

using namespace std;

void Menu(People& klients, Bank& banks)
{	
	banks.Addbank();
	klients.SizeBank();
	int menu = 0;
	do
	{

		cout << "\n\n\t1 -- Add\n\t2 -- Print\n\t3 -- Exit\n\t";
		cin >> menu;

		switch (menu)
		{
		case 1:
			klients.Add_New_Klients();//Add client
			break;
		case 2:
			klients.Print_All();//Print all client and total balance bank
			break;
		default:
			break;
		}
	} while (menu != 3);
}

int main()
{
	People people;
	Bank banks;
	Menu(people, banks);
	Bank bank(string name,int size);
}
