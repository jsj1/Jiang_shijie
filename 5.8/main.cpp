#include <iostream>

using namespace std;

int main()
{
 int x=0;
 int i;
 int number=0;
 int least;
 cout<<"please enter the number of integers:"<<endl;
 cin>>x;
 for(i=0;i<x;i++)
 {
     cout<<"please enter the integer:"<<endl;
     cin>>number;
     if(number<least)
     least = number;
 }
     cout<<least;
     return 0;
}
