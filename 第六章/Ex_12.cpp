
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges( double ); 
int main()
{
   double hour; 
   double Charge; 
   double totalCharges = 0.0;
   double totalHours = 0.0; 
  int a=0;
   
   cout << "Enter the hours parked for 3 cars: ";

  
   for ( int i = 1; i <= 3; i++ )
   {
      cin >> hour;
      totalHours += hour; 
   if(a=0)
{
         cout << setw( 10 ) << "Car" << setw( 10 ) << "Hours"
            << setw( 10 ) << "Charge\n";
     a=1;
     }
      Charge = calculateCharges( hour );
      totalCharges += Charge; 
  
      cout << setw( 10 ) << i << setw( 10 )  << hour
         << setw( 10 ) << Charge << "\n";
   } 

 
   cout << setw( 10 ) << "TOTAL" << setw( 10 ) 
      << totalHours << setw( 10)  << totalCharges << endl;
} 


double calculateCharges( double hours )
{
   double charge; 

   if ( hours < 3.0 ) 
      charge = 2.0;
   else 
      charge = 2.0 +0 .5 * ceil( hours - 3.0 );

 
   return ( charge > 10.0 ? 10.0 : charge );
} 

