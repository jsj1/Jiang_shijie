
#include "Account.h"
int main()
{
	Account account1(100);
	account1.getBalance();
	cout<<"��������Ҫ����Ľ��:";
	double a;
	cin>>a;
	account1.credit(a);
	account1.getBalance();
	cout<<"��������Ҫ��ȡ�Ľ��:";
	double t;
	cin>>t;
	account1.debit(t);
	account1.getBalance();
	return 0;

}
