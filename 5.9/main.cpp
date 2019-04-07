#include <iostream>

using namespace std;

int main()
{
    int number=1;
    int i;
    int product=1;
    for(i=0;i<=6;i++)
    {
        number=number+2;
        product=product*number;
    }
    cout<<product;
    return 0;
}
