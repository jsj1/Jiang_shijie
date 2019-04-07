#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int sum = 0;
    int x = 0;
    cout<<"please enter number of integer:"<<endl;
    cin>>x;
    for(int counter = 0; counter<x;counter+=1)
    {
       cout<<"please enter integers:"<<endl;
        cin>>number;
        sum +=number;
    }
       cout<<sum;
       return 0;
}
