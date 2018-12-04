#include <iostream>

using namespace std;

int main()
{
   long int value1=200000;
   long int value2;
   long int *longptr=&value1;
   cout<<*longptr;
   value2=*longptr;
   cout<<value2;
   cout<<longptr; 
    
}
