
#include <iostream> 
#include <iomanip> 
#include <cmath>
using namespace std;

double  ToIntegers( double ); 
int main()
{
   double x; 
   double y; 

   for ( int loop = 1; loop <= 5; loop++ ) 
   {
      cout << "Enter a number: ";
      cin >> x;

      y =ToIntegers( x ); 
      cout <<  x << " rounded is " << y << endl;
   } 
} 


double   ToIntegers( double value )
{
	return floor( value + 0.5 ); 
} 