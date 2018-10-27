
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
   int account; 
   double balance; 
   double charges; 
   double credits; 
   double limit; 

   cout << "Enter account number (or -1 to quit): ";
   cin >> account;
  
  
   while ( account != -1 )
   {
      cout << "Enter beginning balance: ";
      cin >> balance; 
      cout << "Enter total charges: ";
      cin >> charges; 
      cout << "Enter total credits: ";
      cin >> credits; 

      cout << "Enter credit limit: ";
      cin >> limit; 

      
      balance = balance + charges - credits;
      cout << "New balance is " << balance;

     
      if ( balance > limit )
         cout << "Account:      " << account
            << "Credit limit: " << limit 
            << "Balance:      " << balance 
            << "Credit Limit Exceeded.";

      cout << "Enter account number (or -1 to quit): ";
      cin >> account; 
   }
} 


