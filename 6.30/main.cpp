#include <iostream>

using namespace std;
 antitone(int i )
{
  int sum=0;
  while(i>0)
  {
     sum=sum*10+i%10;
     i=i/10;
  }
  return sum;
}

int main()
{
 int n=0;
 cout<<"please enter the number:"<<endl;
 cin>>n;
 cout<<antitone(n)<<endl;
 return 0;
}
