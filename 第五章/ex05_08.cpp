
#include <iostream>
using namespace std; 

int main()
{
   int number;
   int value; 
   int s; 

   cout << "Enter the number of integers to be processed ";
   cout << "followed by the integers: " << endl;
   cin >> number;
cin >> s;

   for ( int i = 2; i <= number; i++ ) 
   {
      cin >> value; 

      
      if ( value < s)
         s = value;
   } 

  
   cout << "\nThe smallest integer is: " << s << endl;
} 
