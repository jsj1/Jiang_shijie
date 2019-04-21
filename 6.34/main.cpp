#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   unsigned int x=1+rand()%100;
   cout<<"I have a number between 1 and 100"<<endl
   <<"Can you guess my number?"<<endl
   <<"Please type your first guess:"<<endl;
   unsigned int y;
   int n=1;
   while(n)
   {
    cin>>y;
    if(y>x)
        cout<<" Too high.Try again"<<endl;
    if(y<x)
        cout<<" Too low.Try again"<<endl;
    if(y==x)
    break;
   }
   cout<<"Excellent!You guess the number!"<<endl
   <<"Would you like to play again(y or n)?";
    return 0;
}

