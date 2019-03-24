#include <iostream>
#include<string>

using namespace std;
class Date
{
private:
    int year;
    int month;
    int day;
public:
    Date (int a,int b,int c)
    {
        setyear(a);
        setmonth(b);
        setday(c);
    }
    void setyear(int a)
    {
        year=a;
    }
    void setmonth(int b)
    {
       if(b<=12)
       month =b;
       else
        month = 1;


    }
    void setday(int c)
    {
        day=c;
    }int getyear() const
    {
       return year;
    }
    int getmonth() const
    {
       return month;
    }
    int getday() const
    {
        return day;
    }


    void displaymessage()
    {
        cout << getyear() << "/" << getmonth() << "/" << getday() <<endl;
     }
};

int main()
{
    Date data1(2000,7,22);
    data1.displaymessage();
    return 0;
}
