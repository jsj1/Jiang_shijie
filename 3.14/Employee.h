#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    public:
        explicit Employee(string ,string ,int);
        void setsurname(string);
        string getsurname() const;
        void setgivename(string);
        string getgivename() const;
        void setmoney(int);
        int getmoney();
        int up();
        void displayMessage();


    private:
        string surname;
        string givename;
        int payone;
        int paytwo;
};

#endif // EMPLOYEE_H_INCLUDED
