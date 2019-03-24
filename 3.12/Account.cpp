#include "Account.h"


Account::Account(int money)
{
	setMoney(money);
}




void Account::setMoney(int money)
{
	if (money <0)
    {
		rest = 0;
		cout<<"你输入的初始余额无效!";
    }
	else
	{
		rest = money;
	}
}

int Account::getMoney()
{
	return rest;
}

void Account::credit(int a)
{
	if (a>= 0)
		rest = rest+a;
	else
		cout << "存入值无效：" << endl;
}

void Account::debit(int t)
{
	if (t> 0&&t <rest)
		rest = rest-t;
	else
		cout <<"Debit amount exceeded account balance:";

}

void Account::getBalance()
{
	cout << "当前余额为：" << getMoney() << endl;
}

