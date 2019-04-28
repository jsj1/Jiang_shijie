#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main()
 {

 const size_t rows=2;
 const size_t columns=3;
 array<array<int,columns>,rows>t1={1,2,3,4,5,6};
 int sum=0;

 array<array<int,columns>,rows>t2={1,2,3,4,5,0};
 cout<<"t2[1][2]="<<t2[1][2]<<endl;
 array<array<int,columns>,rows>t3={0,0,0,0,0,0};

 array<array<int,columns>,rows>t4;
 int i,j;
 for(i=0;i<2;++i)
 {
     for(j=0;j<3;++j)
    {
        t4[i][j]=0;
       cout<<t4[i][j]<<endl;
    }

  }
 int a,b,c,d,e,f;
 array<array<int,columns>,rows>t5={a,b,c,d,e,f};
 cout<<"enter 6 number:"<<endl;
 cin>>a>>b>>c>>d>>e>>f;

array<array<int,columns>,rows>t6{0,0,0,0,0,0};
int k,m,least=6;
 for(k=0;k<2;++k)
 {
     for(m=0;m<3;++m)
    {
        t6[k][m]+=2;

    }
  if(t6[k][m]<least)
    least=t6[k][m];
 }
cout<<"the least is"<<least<<endl;

cout<<"t1[1][0]="<<t1[1][0]<<endl
     <<"t1[1][1]="<<t1[1][1]<<endl
     <<"t1[1][2]="<<t1[1][2]<<endl
     <<"t1[0][2]="<<t1[0][2]<<endl
     <<"t1[1][2]="<<t1[11][2]<<endl;
 sum=t1[0][2]+t1[1][2];
 cout<<"the sum ="<<sum<<endl;



 }





