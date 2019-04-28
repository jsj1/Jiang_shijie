#include <iostream>
#include <string>
#include <iomanip>
#include <array>
using namespace std;
int main()
{
 array<string,6>alphabet={"rg","tr","tr","trht","rth","h"};
 cout<<"alphabet[5]="<<alphabet[5]<<endl;

 cout<<"enter a number:"<<endl;
   float x;
   cin>>x;
 array<float,4>grades={1,2.0,3,x};
 grades[3]=x;

  array<int,5>values={8,8,8,8,8};
  cout<<"values[4]="<<values[4]<<endl;

  array<float,100>temperatures;
  int i=0,sum=0;
  for(i=0;i<100;i++)
  {
    temperatures[i]=i/(1.0);
    sum+=temperatures[i];
  }
  cout<<"sum="<<sum<<endl;

  array<double,11>a={0,1,2.7,3,4,5.0,6,7,8,9.9,10};
  array<double,34>b={a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]};

 array<float,100>w;
 float largest=0.0;
 float least=0.0;
 int j=0;
 for(j=0;j<100;j++)
 {
     w[j]=j;
     if(w[j]>largest)
        largest=w[j]/(1.0);
     if(w[j]<least)
        least=w[j]/(1.0);

 }
 cout<<"the largest is "<<largest<<endl;
 cout<<"the least is "<<least<<endl;
}
