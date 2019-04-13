
#include <iostream>
using namespace std;
bool Primer(int i)
{
    int j;
    bool primer=true;
    for(j=2;j<i/2;++j)
    {
        if(i%j==0)
        {
            primer=false;
            break;
        }
    }
    return primer;
}
int main()
{
    int  i;
    for(i=2;i<=10000;i++)
    {
        if(Primer(i))
        cout<<i<<"\t ";
    }
    return 0;
}

