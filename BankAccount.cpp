#include "BankAccount.h"

BankAccount::BankAccount(std::string accountNumber, double dailyLimit, double withdrawLimit) : DAILY_LIMIT(dailyLimit), WITHDRAW_LIMIT(withdrawLimit) {
	money = 0;
	moneyWithdrawnToday = 0;

	this->accountNumber = accountNumber;
}

void BankAccount::depositMoney(double amount) {
	money += amount;
}

void BankAccount::withdrawMoney(double amount) {
	if (amount > WITHDRAW_LIMIT || moneyWithdrawnToday > DAILY_LIMIT) {
		return;
	}

	if (amount > money) {
		return;
	}

	money -= amount;
	moneyWithdrawnToday += amount;
}

void BankAccount::displayBankStatement() {
	std::cout << "Bank account with number " << accountNumber << " has " << money << "$." << std::endl;
	std::cout << "Account limits are : Daily Limit - " << DAILY_LIMIT << ", Withdraw Limit - " << WITHDRAW_LIMIT << std::endl;
	std::cout << "Amount of money withdrawn today: " << moneyWithdrawnToday << std::endl;
}
