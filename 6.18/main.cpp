#include <iostream>
using namespace std;
int integerpower(int base,int  exponent)
{   int i=1;int power=1;
    for(i=1;i<=exponent;i++)
    {
       power*=base;
    }
    return power;
}


int main()
{ int power=0;
  double  base=0;
  unsigned int  exponent=0;
  cout<<"please enter the base:"<<endl;
  cin>>base;
  cout<<"please enter the exponent:"<<endl;
  cin>>exponent;
  power=integerpower(base,exponent);
   cout<<power;
   return 0;
}

