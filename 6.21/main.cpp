#include <string>
#include <iostream>
using namespace std;
 string iseven(int t)
{
    if(t%2==0)
     return "true";
     else
     return "false";
}
int main()
{ int x=0;
  int i;
  cout<<"please enter the integers:"<<endl;
  for(i=0;i<1000;i++)
  {
   cin>>x;
   cout<<iseven(x)<<endl;
  }
 return 0;
}
