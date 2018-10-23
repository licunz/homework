
#include <iostream>
#include "Account.h"
using namespace std;


int main()
{
   Account account1( 50 ); 
   Account account2( -1 );

   
   cout << "account1 balance: $" << account1.getBalance() << endl;
   

   int withdrawalAmount; 

   cout << "Enter withdrawal amount for account1: "; 
   cin >> withdrawalAmount; 
   
   account1.debit( withdrawalAmount ); 

  
   cout << "account1 balance: " << account1.getBalance() << endl;
   
  }