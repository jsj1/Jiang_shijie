#include <iostream>
#include<cstdlib>
using namespace std;
void time(int x)
{
    if(x>=1&&x<=10)
        cout<<"Either you know the secret or you got lucky!";
    if(x==10)
        cout<<"Ahah!You know the secret!";
    if(x>10)
        cout<<"You should be able to do better!";
}
int main()
{
   unsigned int x=1+rand()%100;
   cout<<"I have a number between 1 and 100"<<endl
   <<"Can you guess my number?"<<endl
   <<"Please type your first guess:"<<endl;
   unsigned int y;
   int n=1;
   for(;;n++)
   {

    cin>>y;
    if(y>x)
        cout<<" Too high.Try again"<<endl;
    if(y<x)
        cout<<" Too low.Try again"<<endl;
     if(y==x)
        break;
   }
    time(n);
    return 0;
}
