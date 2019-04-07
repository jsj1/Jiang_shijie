
#include <iostream>

using namespace std;

int main()
{
 double a,b,c;
 cout<<"please enter three numbers:"<<endl;
 cin>>a>>b>>c;
 if((a+b>c)&&(a-b<c))
    cout<<"yes"<<endl;
 else
    cout<<"no"<<endl;
}
