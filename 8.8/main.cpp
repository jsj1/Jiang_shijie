
#include <iostream>

using namespace std;
unsigned int values=1002500;
int main()
{   unsigned int SIZE=5;
    unsigned int values[SIZE]={2,4,6,8,10};
    unsigned int *vPtr;
    for(size_t i=0;i<SIZE;++i)
    cout<<values[i]<<" ";
    vPtr=values;
    vPtr=&values[0];
       cout<< "--------- "  <<endl;
    for(size_t j=0;j<SIZE;++j)
       cout<<*(vPtr+j)<<" ";
       cout<< "---------"  <<endl;
    for(size_t k=0;k<SIZE;++k)
       cout<<*(values+k)<<" ";
       cout<< "---------"  <<endl;
    for(size_t m=0;m<SIZE;++m)
       cout<<vPtr[m]<<" ";
       cout<< "---------"  <<endl;

    cout<<values[4]<<endl;
    cout<<*(values+4)<<endl;
    cout<<vPtr[4]<<endl;
    cout<<*(vPtr+4)<<endl;

    cout<<" the address of vPtr[3] is 1002500+3*8=1002524 "<<"the number this address is "<<*(vPtr+3)<< endl;

    cout<<" the address of vPtr-=4 is 1002500+4*8-4*8=1002500 "<<"the number this address is "<<values[0]<<endl;
}


