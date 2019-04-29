
#include "RationalNumber.h"
#include<iostream>
#include<string>
using namespace std;
ostream & operator<<(std::ostream& output,const RationalNumber & a)
{
    output<<a.a<<"/"<<a.b<<endl;
    return output;
}
RationalNumber::RationalNumber(int w,int e)
{
    if(e<=0)
     cout<<"error"<<endl;
   else
    a=w;
    b=e;
    this ->huajian();
}


 RationalNumber  RationalNumber:: operator+(const RationalNumber & m)
{
   RationalNumber w(1,1);
   w.a=a*m.b+b*m.a;
   w.b=b*m.b;
   w.huajian();
   return w;

}
RationalNumber RationalNumber::operator*(const RationalNumber& c)
{
   RationalNumber w(1,1);
   w.a=a*c.a;
   w.b=b*c.b;
   w.huajian();
   return w;

}
void RationalNumber::huajian()
{
     int q=a>b?a:b;
     int w=b<a?b:a;
     int e=q%w;
     while(e!=0)
     {
         q=w;
         w=e;
         e=q%e;
     }

     a=a/w;
     b=b/w;

}
RationalNumber  RationalNumber::operator=(const RationalNumber &  c)
{
   a=c.a;
   b=c.b;
   return  *this;
}
bool RationalNumber::operator>(const RationalNumber& c)
{
    if(a/b>c.a/c.b)
                return 1;
    else
        if(a/b<c.a/c.b)
        return 0;
        else
        if(a%b>c.a%c.b)
        return 1;
    else
        return 0;
}
