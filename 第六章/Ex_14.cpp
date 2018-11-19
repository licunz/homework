
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double Integer( double ); 
double Tenths( double ); 
double Hundredths( double ); 
double Thousandths( double );
int main()
{   
   int count;
   double number;

   cout << "How many numbers do you want to process? " << fixed;
   cin >> count;


   for ( int i = 0; i < count; i++ ) 
   {
      cout << "\nEnter number: ";
      cin >> number;

    
      cout <<  number 
         << " rounded to the nearest integer is:    " <<Integer( number ) << '\n';

    
      cout <<  number << " rounded to the nearest tenth is:      " << Tenths( number ) << '\n';


      cout << number << " rounded to the nearest hundredth is:  "<< Hundredths( number ) << '\n';

     
      cout << number << " rounded to the nearest thousandth is: "<<Thousandths( number ) << '\n';
   }
} 


double Integer( double n )
{
   return floor( n + 0.5 );
} 

double Tenths( double n )
{
   return floor( n * 10 + 0.5 ) / 10;
}


double Hundredths( double n )
{
   return floor( n * 100 + 0.5 ) / 100;
} 

double Thousandths( double n )
{
   return floor( n * 1000 + 0.5 ) / 1000;
} 