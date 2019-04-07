#include <iostream>

using namespace std;

int main()
{
	double  n=0;
	double i=1;
	double j=1;
	cout<< "please enter the integer:" << endl;
	cin >> n;
	while (i<= n)
	{
		j*= i;
		i++;
	}
	cout<<j<<endl;

    double k=1;
    float s=1,t=1,e=0;
    int y;
    cout<<"please enter the precision of e:"<<endl;
    cin>>y;
	while (k<=y)
	{
      s*=k;t=1/s;e+=t;
      k++;
    }

	cout<<e<<endl;

	double h=1;
	float m=1,g=1,b=0,E=0;
	int x;
	cout<<"please enter the precision of e^x:"<<endl;
	cin>>x;
    while(h<=x)
    {
      m*=h;g*=x;b=g/m;E+=b;
      h++;
    }
    cout<<E<<endl;
    return 0;
}
















