#include <iostream>

using namespace std;

int main()
 {  int a,b,c,d,e,max,min;


  cout <<"Enter five integers:";
  cin >>a>>b>>c>>d>>e;
  if(a>b&&b>c&&c>d&&d>e)
  max =a;
  min =e;
  if(a>b&&b>c&&c>e&&e>d)
  max =a;
  min =d;
  if(a>b&&b>d&&d>c&&c>e)
  max =a;
  min =e;
  if(a>b&&b>d&&d>e&&e>c)
  max =a;
  min =c;
  if(a>b&&b>c&&c>d&&d>e)
  max =a;
  min =e;
  if(a>c&&c>b&&b>d&&d>e)
  max =a;
  min =e;
  if(a>b&&b>c&&c>d&&d>e)
  max =a;
  min =b;
  if(a>c&&c>d&&d>b&&b>e)
  max =a;
  min =e;
  if(a>b&&b>c&&c>d&&d>e)
  max =a;
  min =b;
  if(a>e&&e>c&&c>d&&d>b)
  max =a;
  min =b;
  if(b>a&&a>c&&c>d&&d>e)
  max =b;
  min =e;
  if(c>a&&a>b&&b>d&&d>e)
  max =c;
  min =e;
  if(d>a&&a>b&&b>c&&c>e)
  max =a;
  min =e;
  if(d>b&&b>c&&c>d&&d>a)
  max =a;
  min =d;
  if(d>a&&a>c&&c>d&&d>e)
  max =e;
  min =d;
  if(d>c&&c>b&&b>a&&a>e)
  max =d;
  min =e;
  if(e>a&&a>b&&b>c&&c>d)
  max =e;
  min =d;
  cout << " max is "<<max<<endl;
  cout << " min is "<<min<<endl;

 }
