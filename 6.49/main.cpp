#include <iostream>

using namespace std;
inline double area(const double r)
{
 return 3.14*r*r;
}
int main()
{
 double r=0;
 cout<<"please enter the r:"<<endl;
 cin>>r;
 cout<<"area = :"<<area(r)<<endl;
 return 0;
}
