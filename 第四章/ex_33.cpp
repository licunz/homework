
#include <iostream>
using namespace std; 

int main()
{
   int side1;
   int side2; 
   int side3; 
   int a=0;
  
   cout << "Enter side 1: ";
   cin >> side1;

   cout << "Enter side 2: ";
   cin >> side2;

   cout << "Enter side 3: ";
   cin >> side3;
      
 
   int side1Square = side1 * side1;
   int side2Square = side2 * side2;
   int side3Square = side3 * side3;

  
   if ( ( side1Square + side2Square ) == side3Square )
    { isRightTriangle = true;
      a=1;
}
   else if ( ( side1Square + side3Square ) == side2Square )
          { isRightTriangle = true;
      a=1;
}
   else if ( ( side2Square + side3Square ) == side1Square )
          { isRightTriangle = true;
      a=1;
}

   if ( a=1)
      cout << "These are the sides of a right triangle." << endl;
   else 
      cout << "These do not form a right triangle." << endl;    
} 
