#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main()
{
int i,a[20],t[20];
cout<<"please enter 20 numbers:"<<endl;;
for(i =0 ; i <20; i++)
{
cin>>a[i];
if(a[i]>=10&&a[i]<=100)
    t[i]=a[i];
else
    t[i]=0;
    cout<<t[i]<<endl;

}
return 0;
}






