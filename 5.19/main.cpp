#include <iostream>

using namespace std;

int main()
{
     int i;
     int j;


    for(i=1;i<100000;i+=1)
    {   int k=-1;
        int n=0;
        double pi=0;
        for (j=1;j<=i;j++)
       {
        k*=-1;
        n+=1;
        pi=pi+k*(4.0/(2*n-1));
       }
        cout<<pi<<endl;
    }
    return 0;
}
