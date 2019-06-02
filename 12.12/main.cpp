#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include <ctime>

#include "Employee.h"
#include "SalariedEmployee.h"
using namespace std;

int determineMonth();

int main()
{

   cout << fixed << setprecision( 2 );


   vector < Employee * > employees( 4 );

   employees[ 0 ] = new SalariedEmployee(
      "John", "Smith", "111-11-1111", 6, 15, 1944, 800 );

   int month = determineMonth();

   cout << "Employees processed polymorphically via dynamic binding:\n\n";

   for ( size_t i = 0; i < employees.size(); i++ )
   {
      employees[ i ]->print();
      cout << endl;






      Date birthday = employees[ i ]->getBirthDate();


      if ( birthday.getMonth() == month )
         cout << "HAPPY BIRTHDAY!\nearned $"
            << ( employees[ i ]->earnings() + 100.0 ) << endl;
      else
         cout << "earned $" << employees[ i ]->earnings() << endl;

      cout << endl;
   }


   for ( size_t j = 0; j < employees.size(); j++ )
   {

      cout << "deleting object of "
         << typeid( *employees[ j ] ).name() << endl;

      delete employees[ j ];
   }
}

int determineMonth()
{
   time_t currentTime;
   char monthString[ 3 ];
   time( &currentTime );
   strftime( monthString, 3, "%m", localtime( &currentTime ) );
}
