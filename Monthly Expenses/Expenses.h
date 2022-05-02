#pragma once
#include <iostream>
using namespace std;

class Expenses
{
public:
	double Amount, MonthlyIncome, Remaining;
	string category, Date;
public:
	Expenses();
   void EnterMonthlyIncome();
   void EnterDailyExpenses();
   double RemainingMoney();
};

