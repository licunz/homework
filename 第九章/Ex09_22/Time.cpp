
#include <iostream> 
#include <iomanip>
#include <ctime>
#include "Time.h" 
using namespace std;

Time::Time(int h)
{
  s=h;
} 
void Time::setTime( int h)
{
 s=h;
} 


void Time::print()
{
   int shi;
int fen;
int miao;
miao=s%60;
shi=s/360;
fen=s%360/60;
cout<<shi<<setw(10)<<fen<<setw(10)<<miao;
}
