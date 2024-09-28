#include <iostream>

class BankAccount
{
private:
	std::string accountNumber;
	const double DAILY_LIMIT;
	const double WITHDRAW_LIMIT;

	double moneyWithdrawnToday;
	double money;

public:
	BankAccount(std::string accountNumber, double dailyLimit, double withdrawLimit);
	
	void withdrawMoney(double amount);
	void depositMoney(double amount);

	void displayBankStatement();
};

