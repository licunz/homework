
#include <iostream>
#include <iomanip>
#include <vector>
#include "Package.h" 
#include "TwoDayPackage.h" 
#include "OvernightPackage.h" 
using namespace std;

int main()
{
    cout << fixed << setprecision( 2 );
  

   vector < Package * > packages( 3 ); 
   packages[ 0 ] = new Package( "a", "b", "c", "MA", 
      11111, "k", "m", "k", "h", 22222, 8.5, .5 );
   packages[ 1 ] = new TwoDayPackage( "s", "d", 
      "z", "n", 33333, "v", "b", "f", 
      "y", 44444, 10.5, 65, 2.0 );
   packages[ 2 ] = new OvernightPackage( "i", "o", "p",
      "y", 10, "a", "w", "q", "e", 20, 
      10, 7, 25 );

   double totalCost = 0;

  


   for ( size_t i = 0; i < packages.size(); i++ )
   {
      cout << "Package " << i + 1 
         << packages[ i ]->getSenderName() << '\n' 
         << packages[ i ]->getSenderAddress() << '\n' 
         << packages[ i ]->getSenderCity() << ", " 
         << packages[ i ]->getSenderState() << ' ' 
         << packages[ i ]->getSenderZIP();
         << packages[ i ]->getRecipientName() 
         << packages[ i ]->getRecipientAddress() 
         << packages[ i ]->getRecipientCity()  
         << packages[ i ]->getRecipientState() 
         << packages[ i ]->getRecipientZIP();

     
      cout << cost << endl;
      totalCost=totalCost +packages[ i ]->calculateCost();
   }
   cout << "Total shipping cost: $" << totalShippingCost << endl;
} 