#include <iostream>
#include <string>
using namespace std;
string  multiple(int a ,int b  )
{
    if(b%a==0)
     return "true";
     else
     return "false";
}
int main()
{ int x=0;
  int y=0;
  int i;
  cout<<"please enter the integers:"<<endl;
  for(i=0;i<1000;i++)
  {
   cin>>x>>y;
   cout<<multiple(x,y)<<endl;
  }
 return 0;
}
