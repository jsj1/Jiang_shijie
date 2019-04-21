#include <iostream>

using namespace std;
 quality(int i )
{
    if(i>=90)
        return 4;
    else if(i>=80)
        return 3;
    else if(i>=70)
        return 2;
    else if(i>=60)
        return 1;
     else
        return 0;
}
int main()
{
 int n=0;
 cout<<"please enter the number:"<<endl;
 cin>>n;
 cout<<quality(n)<<endl;
 return 0;
}
