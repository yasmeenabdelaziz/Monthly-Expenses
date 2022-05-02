#pragma once
#include <iostream>
#include "User.h"
using namespace std;
class LoginOrSignup
{
public:
	User user;
	int StartChoice, WalletChoice;
public:
	LoginOrSignup();
	void LoginCheck();
};

