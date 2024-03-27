#include "LoyaltyScheme.h"
ref class CreditCardAccount
{
public:
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();
	CreditCardAccount(long number, double limit);
	static int GetNumberOfAccounts();
	static CreditCardAccount();
	void RedeemLoyaltyPoints();
private:
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;
	static int numberOfAccounts = 0;
	static double interestRate;
	LoyaltyScheme^ scheme;
};