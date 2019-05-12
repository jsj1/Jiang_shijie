#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
   Complex a( 3, 0 ), b( 7, 7 ), c;

   a.printComplex();
   cout << " + ";
   b.printComplex();
   cout << " = ";
   c = a.add( b );
   c.printComplex();

   cout << '\n';
   a.setComplexNumber( 3, 7 );
   b.setComplexNumber( 1, 9 );
   a.printComplex();
   cout << " - ";
   b.printComplex();
   cout << " = ";
   c = a.subtract( b );
   c.printComplex();
   cout << endl;
}



