#pragma once
#include <string>

using namespace std;

class account

{
private:
	int accountNumber;
	int balance;
	string owner;
	void show() {};
	void deposit() {};
	void withdraw() {};

public:
	account(int accNum, int amount, string owner);
};

