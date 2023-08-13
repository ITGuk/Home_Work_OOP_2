#pragma once
#include <iostream>

using namespace std;

class Bank
{
private:
	string name_bank;
	int size_bank;
	int total_balance;
public:
	Bank(string name_bank, int total_balance);
	void Addbank();
	Bank();
};

class People
{
private:
	string name_k;
	int balance_k;
	int size_k;
	People* klients = nullptr;
public:
	People(string name, int balance, int size);
	People();
	void SizeBank();
	void Add_New_Klients();
	void Print_All();
};
