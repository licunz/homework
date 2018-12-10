#include <ctime>
#include <iostream> 
#include "Date.h" 
using namespace std;

Date::Date( int m, int d, int y ) 
{
const time_t currentTime = time( 0 );
   const tm *localTime = localtime( &currentTime );
   setDate( localTime->tm_year, localTime->tm_day, localTime->tm_month );
 
} 
Date::Date() 
{
  
} 
void Date::setDate( int mo, int dy, int yr )
{
   setMonth( mo ); 
   setDay( dy ); 
   setYear( yr ); 
} 

void Date::setDay( int d )
{
   if ( month == 2 && leapYear() )  
      day = ( d <= 29 && d >= 1 ) ? d : 1; 
   else
      day = ( d <= monthDays() && d >= 1 ) ? d : 1;
}

void Date::setMonth( int m ) 
{ 
   month = m <= 12 && m >= 1 ? m : 1; 
}

void Date::setYear( int y ) 
{
   year = y >= 2000 ? y : 2000; 
} 

int Date::getDay() 
{
   return day;
} 

int Date::getMonth() 
{ 
   return month; 
}

int Date::getYear() 
{ 
   return year; 
} 

void Date::print()
{
   cout << month << '/' << day << '/' << year << '\n'; 
} 

