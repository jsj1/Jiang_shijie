#include <iostream>

using namespace std;

int main()
{   int a,b,c,Sum,Average,Product,Smallest,Largest;
    cout <<"Enter three integers:";
    cin >>a>>b>>c;
    Sum =a+b+c;
    Average =(a+b+c)/3;
    Product =a*b*c;
    if(a>b&&b>c)
    Smallest =c;
    Largest =a;
    if(a>b&&c>b)
    Smallest =b;
    Largest =a;
    if(b>a&&a>c)
    Smallest =c;
    Largest =b;
    if(b>c&&c>a)
    Smallest =a;
    Largest =b;
    if(c>a&&a>b)
    Smallest =b;
    Largest =c;
    if(c>b&&b>a)
    Smallest =a;
    Largest =c;


    cout <<"Sum is:"<<Sum<<endl;
    cout <<"Average is:"<<Average<<endl;
    cout <<"Product is:"<<Product<<endl;
    cout <<"Smallest is:"<<Smallest<<endl;
    cout <<"Largest is:"<<Largest<<endl;
    return 0;
}
