#include <iostream>

using namespace std;

int main()
{

    int counter = 0;
    int number;
    double largest = 0 ;
    double blargest = 0;
    cout<<"please enter four numbers"<<endl;

    while (counter < 4)
    {   cin>>number;
        if(number > largest)
        {
           blargest = largest;
           largest = number;
        }
         else if(number>blargest)
            blargest = 0;

        counter++;
    }
    cout<<"the largest is:"<<largest<<endl;
    cout<<"the blargest is:"<<blargest<<endl;
   return 0;
}


