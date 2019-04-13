#include <iostream>
#include <string>
using namespace std;
  string prime(int  x)
{  int i;
   for(i=2;i<=x/2;i++)
   if(x%i==0)
   return "no";
   return "yes";
}
  int main()
 {
    int y=0;
    cout<<"please enter the number:"<<endl;
    cin>>y;
    cout<<prime(y);
    return 0;
 }
