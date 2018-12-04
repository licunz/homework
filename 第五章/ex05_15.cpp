
#include "GradeBook.h"
#include<string>
int main()
{
   
   GradeBook myGradeBook( "CS101 C++ Programming" );

   myGradeBook.displayMessage(); 
   myGradeBook.inputGrades(); 
   myGradeBook.displayGradeReport(); 
}
