
#include "Account.h"
int main()
{
	Account account1(100);
	account1.getBalance();
	cout<<"请输入你要存入的金额:";
	double a;
	cin>>a;
	account1.credit(a);
	account1.getBalance();
	cout<<"请输入你要提取的金额:";
	double t;
	cin>>t;
	account1.debit(t);
	account1.getBalance();
	return 0;

}
