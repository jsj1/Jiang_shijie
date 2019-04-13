#include <iostream>
#include <cmath>
using namespace std;
double hypotenuse(double a ,double b  )
{   double c;double hypotenuse;
    c=a*a+b*b;
    hypotenuse=sqrt(c);
    return hypotenuse ;
}


int main()
{ double x1=3,x2=5,x3=8;
  double y1=4,y2=12,y3=15;
  double hypotenuse1=0;
  double hypotenuse2=0;
  double hypotenuse3=0;
  hypotenuse1=hypotenuse(x1,y1);
  hypotenuse2=hypotenuse(x2,y2);
  hypotenuse3=hypotenuse(x3,y3);
   cout<<hypotenuse1<<endl;
   cout<<hypotenuse2<<endl;
   cout<<hypotenuse3<<endl;
   return 0;
}
