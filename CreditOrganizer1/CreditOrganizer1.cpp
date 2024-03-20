#include "CreditCardAccount.h"
using namespace System;
void CreditCardAccount::SetCreditLimit(double amount)
{creditLimit = amount;}
bool CreditCardAccount::MakePurchase(double amount)
{
	if (currentBalance + amount > creditLimit)
	{
		return false;
	}
	else
	{
		currentBalance += amount;
		return true;
	}
}

void CreditCardAccount::MakeRepayment(double amount)
{
	currentBalance -= amount;
}

void CreditCardAccount::PrintStatement()
{
	Console::Write("Current balance: ");
	Console::WriteLine(currentBalance);
}

long CreditCardAccount::GetAccountNumber()
{
	return accountNumber;
}

CreditCardAccount::CreditCardAccount(long number, double limit)
{
	accountNumber = number;
	creditLimit = limit;
	currentBalance = 0.0;
}

int main(array<System::String^>^ args)
{CreditCardAccount^ myAccount = gcnew CreditCardAccount(123456789, 1000);
	myAccount->SetCreditLimit(1000);
	myAccount->MakePurchase(1000);
	myAccount->MakeRepayment(700);
	myAccount->PrintStatement();
	long num = myAccount->GetAccountNumber();
	Console::Write("Account number: ");
	Console::WriteLine(num);
	return 0;}