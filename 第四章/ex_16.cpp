
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
   double hours=0; 
   double rate=0; 
   double salary=0; 

   
   cout << "Enter hours worked (-1 to end): ";
   cin >> hours;

   while ( hours != -1.0 ) 
   {
    
      cout << "Enter hourly rate of the employee ($00.00): ";
      cin >> rate;
      
     
      if ( hours <= 40 )
         salary = hours * rate;
      else 
         salary = 40.0 * rate + ( hours - 40.0 ) * rate * 3/2;
      
      cout << "Salary is $" << salary; 

   
      cout << "\n\nEnter hours worked (-1 to end): ";
      cin >> hours;
   }
} 


