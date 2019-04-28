
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main()
{
  unsigned int two =0; unsigned int three=0; unsigned int four=0;
  unsigned int five=0; unsigned int six =0; unsigned int seven =0;
  unsigned int eight=0; unsigned int night =0; unsigned int ten=0;
  unsigned int eleven =0; unsigned int twelve=0;
for ( unsigned int roll = 1; roll <= 36000; ++roll )
{
unsigned int face1 =1 +rand() %6;
unsigned int face2 =1 +rand() %6;


switch ( face1+face2)
{
case 2:
++two;
break;
case 3:
++three;
break;
case 4:
++four;
break;
case 5:
++five;
break;
case 6:
++six;
break;
case 7:
++seven;
break;
case 8:
++eight;
break;
case 9:
++night;
break;
case 10:
++ten;
break;
case 11:
++eleven;
break;
case 12:
++twelve;
break;
default:
cout << "Program should never get here!";
}
}
cout << "Face1+Face2" <<setw( 13 ) <<"number" << endl;
cout <<" 2"<< setw( 13) << two
     <<"\n 3"<< setw( 13) <<three
     <<"\n 4"<< setw( 13) <<four
     <<"\n 5"<< setw( 13) <<five
     <<"\n 6"<< setw( 13) <<six
     <<"\n 7"<< setw( 13) <<seven
     <<"\n 8"<< setw( 13) <<eight
     <<"\n 9"<< setw( 13) <<night
     <<"\n 10"<< setw( 13) <<ten
     <<"\n 11"<< setw( 13) <<eleven
     <<"\n 12"<< setw( 13) <<twelve<<endl;

}
