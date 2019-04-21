#include <iostream>
#include<cstdlib>
using namespace std;
void coin(int n)
{
    int counter1=0,counter2=0;
    for(unsigned int x;n>0;n--)
    {
      x=rand()%2;
      if(x==0)
      {cout<<"Head"<<endl;
      counter1=counter1+1;}
      if(x==1)
      {cout<<"Tail"<<endl;
      counter2=counter2+1;}
    }
    cout<<"the number of tail is "<<counter2<<endl;
    cout<<"the number of head is "<<counter1<<endl;
}
int main()
{

    coin(100);
    return 0;
}
