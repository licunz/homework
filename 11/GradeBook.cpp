
#include <iostream>
#include "GradeBook.h"
using namespace std;


GradeBook::GradeBook( string course, string nameofteacher )
{
   setCourseName( course );
   setteacherName(  nameofteacher ); 
} 


void GradeBook::setCourseName( string name )
{
   courseName = name; 
} 


string GradeBook::getCourseName()
{
   return courseName;
} 


void GradeBook::setInstructorName( string name )
{
   teacherName = name; 
}


string GradeBook::getInstructorName()
{
   return teacherName;
}


void GradeBook::displayMessage()
{
   
   cout << "Welcome to the grade book for\n" << getCourseName() << "!" 
      << endl;

  
   cout << "This course is presented by: " << getteacherName() << endl;
} 



