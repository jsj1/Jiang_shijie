#include <iostream>
#include "DateAndTime.h"
using namespace std;

int main()
{
   const int MAXTICKS = 30;
   DateAndTime d( 1, 3, 2000, 3, 9, 7 );

   for ( int ticks = 1; ticks <= MAXTICKS; ticks++ )
   {
      cout << "Universal time: ";
      d.printUniversal();
      cout << "Standard  time: ";
      d.printStandard();
      d.tick();
   }

   cout << endl;
}

