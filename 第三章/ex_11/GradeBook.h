
#include <string> 
using namespace std;


class GradeBook
{
public:
 
   GradeBook( string, string );
   void setCourseName( string ); 
   string getCourseName(); 
   void setteacherName( string ); 
   string getteacherName(); 
   void displayMessage();
private:
   string courseName; 
   string teacherName;
};



