#include <iostream>

using namespace std;
double tripleBYValue(double);
void tripleBYReference(double &);
int main()
{
    double count=0;
    cout<<"please enter a count";
    cin>>count;
    cout<<"the count is "<<count<<endl;
    cout<<"3count is "<<tripleBYValue(count)<<endl;
    cout<<"the count is "<<count<<endl;
    tripleBYReference(count);
    cout<<"3count is"<<count<<endl;
}

double tripleBYValue(double number)
{
    return number=3.0*number;
}
 void tripleBYReference(double &numberRef)
{
   numberRef=3*numberRef;
}
