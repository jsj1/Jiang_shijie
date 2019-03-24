#include <iostream>
#include "Employee.h"
using namespace std;
int main()
{
    cout << "ÄãµÄÔÂÐ½Îª:"<< endl;
    int salary1,salary2;
    cin >>salary1 >>salary2;
    Employee one("sheng","chen",salary1);
    Employee two("chen","sheng",salary2);


    one.displayMessage();
    two.displayMessage();
}




