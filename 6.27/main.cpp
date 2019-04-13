#include <iostream>
#include <iomanip>
using namespace std;
 double least1(double x,double y,double z)
 {  double least;
    if(x<y)
    least=x;
    else
    least=y;
    if(z<least)
    least=z;
    return least;
 }
int main()
{    double a=0,b=0,c=0,least=0;
    cout<< "please enter three number:"<<endl;
    cin>>a>>b>>c;
   least= least1 (a,b,c);
    cout<<"the least is:"<<least;
    return 0;
}
