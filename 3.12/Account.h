#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
using namespace std;
class Account
{
public:
	explicit Account(int );
	void setMoney(int);
	int getMoney();

	void credit(int);
	void debit(int);
	void getBalance();

private:
	int rest;
};
#endif




#endif // ACCOUNT_H_INCLUDED
