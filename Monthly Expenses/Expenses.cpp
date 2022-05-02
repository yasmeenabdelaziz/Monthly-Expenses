#include "Expenses.h"

Expenses::Expenses(){}

void Expenses::EnterDailyExpenses() {
	cout << "PLEASE ENTER\nAmount: ";
	cin >> Amount;
	cout << "Category: ";
	cin >> category;
}
void Expenses::EnterMonthlyIncome() {
	cout << "Please Enter Your Monthly Income\n";
	cin >> MonthlyIncome;
}
double Expenses::RemainingMoney()
{
	return Remaining;
}
