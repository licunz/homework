
#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "SalariedEmployee.h" 
#include<ctime>
#include "CommissionEmployee.h"  
#include "BasePlusCommissionEmployee.h" 
using namespace std;

int determineMonth(); 
int main()
{
   
   cout << fixed << setprecision( 2 );

   
   vector < Employee * > employees( 3 );

   
   employees[ 0 ] = new SalariedEmployee( 
      "John", "Smith", "111-11-1111", 6, 15, 1944, 800 );
   
   employees[ 1 ] = new CommissionEmployee( 
      "Sue", "Jones", "333-33-3333", 9, 8, 1954, 10000, .06 );
   employees[ 2 ] = new BasePlusCommissionEmployee( 
      "Bob", "Lewis", "444-44-4444", 3, 2, 1965, 5000, .04, 300 );

   



   for ( size_t i = 0; i < employees.size(); i++ )
   {

     int month = determineMonth();
      
      BasePlusCommissionEmployee * ptr =
         dynamic_cast < BasePlusCommissionEmployee * > 
            ( employees[ i ] );

   
      if (ptr != 0 ) 
      {
         double oldBaseSalary = ptr->getBaseSalary();
         cout << "old base salary: $" << oldBaseSalary << endl;
         ptr->setBaseSalary( 1.10 * oldBaseSalary );
         cout << "new base salary with 10% increase is: $" 
            << ptr->getBaseSalary() << endl;
      } 
      
    
      Date birthday = employees[ i ]->getBirthDate();

 
      if ( birthday.getMonth() == month )
         cout << ( employees[ i ]->earnings() + 100.0 ) << endl;
      else
         cout<< employees[ i ]->earnings() << endl;

   
   } 
 
 
}

int determineMonth()
{
   time_t currentTime;
   char monthString[ 3 ];
   time( &currentTime );
   strftime( monthString, 3, "%m", localtime( &currentTime ) );
   return atoi( monthString );
}