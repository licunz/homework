
#include <iostream>
#include <iomanip>
#include <vector>
#include "Account.h" 
#include "SavingsAccount.h" 
#include "CheckingAccount.h" 
using namespace std;

int main()
{
      cout << fixed << setprecision( 2 );
   vector < Account * > accounts( 4 );   

  
   accounts[ 0 ] = new SavingsAccount( 25.0, .03 ); 
   accounts[ 1 ] = new CheckingAccount( 80.0, 1.0 );
   accounts[ 2 ] = new SavingsAccount( 200.0, .015 ); 
   accounts[ 3 ] = new CheckingAccount( 400.0, .5 );



   
   for ( size_t i = 0; i < accounts.size(); i++ )
   {
      cout <<  i + 1 << " $" 
         << accounts[ i ]->getBalance();

      double q= 0.0;
   
      cin >> q
      accounts[ i ]->debit( q); 

      cin>>q;
   
      cin >>q;
      accounts[ i ]->credit( q ); 

     
      SavingsAccount * a =
         dynamic_cast < SavingsAccount * > ( accounts[ i ] );


      if (a != 0 )
      {
         double  j= a->calculateInterest();
       
        a->credit( j);
      } 
      
      cout << accounts[ i ]->getBalance() << "\n\n";
   }
} 
