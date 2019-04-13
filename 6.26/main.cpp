#include <iostream>
using namespace std;
 int celsius (int a)
{
  int n;
  n = (5.0/9)*(a-32);
  return n;
}
  int fahrenheit(int b)
{
    int m =1;
    m = b*9/5+32;
    return m;
}
int main()
{ int i;
  int j;
  int A=32;
  int B=0;
   cout << "the fahrenheit is:"<<endl;
  for(i=0;i<=100;i++)
  {
   B+=1;
   cout <<fahrenheit(B)<<"\t";
  }
  cout <<"the celsius is:"<<endl;
  for(j=32;j<=180;j++)
  {
    A+=1;
    cout <<celsius(A)<<"\t";
  }
  return 0;
}

