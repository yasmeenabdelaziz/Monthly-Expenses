#include "StartMenu.h"


StartMenu::StartMenu()
{
	cout << "   Menu\n 1.Enter monthly income\n 2.Enter daily expenses\n 3.View the expenses\n 4.View the remaining money\n";
	cin >> MenuChoice;
	cout << "\n";
	switch (MenuChoice)
	{
	case 1:
		exp.EnterMonthlyIncome();
		break;
	case 2:
		exp.EnterDailyExpenses();
		break;
	case 3:
		cout << "Filter By \n 1.Category \n 2.Date \n 3.Amount \n Note you can choose more than one filter";
		break;
	case 4:
		break;
	default:
		break;
	}
}
