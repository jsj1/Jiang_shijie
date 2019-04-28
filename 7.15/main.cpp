#include <iostream>
#include <array>
using namespace std;
const size_t rows=3;
const size_t columns=5;


int main()
{
  array<array<int,columns>,rows>sales;
  for(size_t rows=0;rows<3;++rows)

      {
        for(size_t columns=0;columns<5;++columns)
        {
            sales[rows][columns]=0;
            cout<<sales[rows][columns]<<endl;
        }
      }
}
