
#include <iostream>
using namespace std; 

int main()
{
   int erjinz ; 
   cout << "Enter a  erjinz   number: ";
   cin >> ejinz;
     int bit = 1; 
   int shijinz = 0; 
   
   while ( erjinz != 0 )
   {
    shijinz =shijinz + erjinz % 10 * bit;
      erjinz =erjinz/10;
      bit = 2*bit;
   } 

   cout << "Shijinz is: " << shijinz << endl;
} 



