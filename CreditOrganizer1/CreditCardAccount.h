#pragma once

ref class CreditCardAccount
{
public:
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	CreditCardAccount::CreditCardAccount(long number, double limit)
		: accountNumber(number), creditLimit(limit), currentBalance(0.0)
	{
	}

private:
	long accountNumber;
	double currentBalance;
	double creditLimit;
};