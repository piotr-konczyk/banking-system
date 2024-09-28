#include <iostream>

#include "BankAccount.h"

int main()
{
    BankAccount bankAccount = BankAccount("90842340834923402934", 3000, 200);

    bankAccount.depositMoney(200);
    bankAccount.withdrawMoney(300);

    bankAccount.displayBankStatement();

    bankAccount.withdrawMoney(100);

    bankAccount.displayBankStatement();
}
