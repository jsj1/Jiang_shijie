#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee(string a,string b,int c)
{
    setsurname(a);
    setgivename(b);
    setmoney(c);
}
void Employee::setsurname(string a)
{
    surname = a;
}
string Employee::getsurname() const
{
    return surname;
}

 void Employee::setgivename(string b)
{
    givename = b;
}
string Employee::getgivename() const
{
    return givename;
}

    void Employee::setmoney (int c)
     {
         payone = c;
         paytwo = c;

     }

     int Employee::getmoney()
     {
         return payone*12;
     }
     int Employee::up()
        {
           return paytwo*12*1.1;
        }
     void Employee::displayMessage()
    {
        cout <<"�������Ϊ:"<< getsurname()<<getgivename()<<endl;
        cout <<"�����нΪ:"<<getmoney()<<endl;
        cout <<"����н֮�����нΪ:"<<up()<<endl;
    }


