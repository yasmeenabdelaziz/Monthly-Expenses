#include "LoginOrSignup.h"

LoginOrSignup::LoginOrSignup() {

cout << "1.Login \n  Or\n2.SignUp\n";
cin >> StartChoice;
cout << "\n";
switch (StartChoice)
{
case 1:
	cout << "PLEASE ENTER YOUR\nUserName: ";
	cin >> user.UserName;
	cout << "Password: ";
	cin >> user.Password;
	cout << "\n";
	break;
case 2:
	cout << "PLEASE ENTER YOUR\nUserName: ";
	cin >> user.UserName;
	cout << "Password: ";
	cin >> user.Password;
	cout << "\nAdd Wallet\n1.Cash\n2.Depit Card\n3.Credit Card\n";
	cin >> WalletChoice;
	cout << "\n";
	break;
}
}
void LoginOrSignup::LoginCheck()
{}
