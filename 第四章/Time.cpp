#include <iostream>
#include "Time.h"
using namespace std;


 Time::Time(int a,int b,int c,int d,int e,int f)
{
   miao=a;
fen=b;
shi=c;
ri=d;
yue=e;
nian=f;
}
void Time::setmiao(int a,int b,int c,int d,int e,int f)
{
if(a<60)
{
miao=a;
fen=b;
}
if(a>=60)
{
miao=a%60;
fen=b+a/60;
}

if(fen>=60)
{

shi=c+fen/60;
fen=fen%60;
}
else
if(fen<60)
{
shi=c;
}
if(shi<24)
{
ri=d;
}
if(shi>=24)
{
ri=d+shi/24;
shi=shi%24;
}

if(ri<=30)
{
yue=e;
}
if(ri>30)
{
yue=e+ri/30;
ri=ri%30;
}
if(yue<=12)
{
nian=f;
}
if(yue>12)
{
nian=f+yue/12;
yue=yue%12;
}

}

int Time::getmiao()
{
    return miao;
}
int Time::getfen()
{
    return fen;
}
int Time::getshi()
{
   return shi;
}
int Time::getri()
{
    return ri;
}
int Time::getyue()
{
    return yue;
}
int Time::getnian()
{
    return nian;
}
