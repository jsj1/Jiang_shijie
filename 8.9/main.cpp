#include <iostream>

using namespace std;

int main()
{
    long value1=200000;
    long value2;
    long *longPrt;
    longPrt=&value1;
    cout<<"The value of *longPrt is"<<*longPrt<<endl;
    value2=*longPrt;
    cout<<"The value of value2 is"<<value2<<endl;
    cout<<"The address of value1 is"<< &value1<<endl;
    cout<<"The address stored in longPrt is"<<longPrt<<endl;
}

