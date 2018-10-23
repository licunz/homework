
#include <iostream>
#include "GradeBook.h"
using namespace std;


int main()
{
  
   GradeBook gradeBook( 
      "CS101 Introduction to C++ Programming", "Professor Smith" );

   
   cout << "gradeBook instructor name is: " 
      << gradeBook.getInstructorName() << "\n\n"; 

 
   gradeBook.setInstructorName( "Assistant Professor Bates" );


   cout << "new gradeBook instructor name is: " 
      << gradeBook.getInstructorName() << "\n\n";

 
   gradeBook.displayMessage(); 
} 


