
#include <iostream>
using namespace std;

int main()
{
   int total = 0; 
   int a; 
   int value; 
  
   cout << "Enter the number of values to be summed " 
      << "followed by the values: \n";
   cin >> a;
 
   for ( int i = 1; i <=a; i++ ) 
   {
      cin >> value;
      total += value;
   } 


   cout << "Sum of the " << a << " values is " << total << endl;
} 

