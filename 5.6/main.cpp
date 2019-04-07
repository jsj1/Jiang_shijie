
#include<iostream>
using namespace std;
int main()
{
  int i=0;
  int number=0;
  int total=0;
  float ave=0;
  for(i=1;i<100;i++)
{
  cout<<"enter the integer: "<<endl;
  cin>>number;
  total+=number;
  if(number==99)
    break;
}
  ave=total/i;
  cout<<ave<<endl;
  return 0;
}
