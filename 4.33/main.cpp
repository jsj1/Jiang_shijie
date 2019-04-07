#include <iostream>

using namespace std;

int main()
{
 double a,b,c;
 cout<<"please enter three numbers:"<<endl;
 cin>>a>>b>>c;
 if((a*a+b*b == c*c)||(a*a+c*c == b*b)||(b*b+c*c == a*a))
    cout<<"yes"<<endl;
 else
    cout<<"no"<<endl;
    return 0;

}

