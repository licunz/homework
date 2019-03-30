#include "Polynomial.h"
#include <iostream>
#include <string>
#include <Polynomial.h>
using namespace std;
Polynomial::Polynomial(int a)
{
 z=a;
 x=new int[z+1]();
 for(int i=0;i<z+1;++i)
    x[i]=0;
    //ctor
}

Polynomial::~Polynomial()
{
   delete[]x; //dtor
}
istream & operator>>(istream& input,Polynomial& a)
{
     for(int i=0;i<a.z+1;++i)
    cin>>a.x[i];
    return input;
}
ostream & operator<<(ostream& output,const Polynomial &a)
{
    for(int i=0;i<a.z+1;++i)
    {
       if(i==0)
    cout<<a.x[i]<<"*"<<"x^"<<i;
    else
    cout<<"+"<<a.x[i]<<" "<<"x^"<<i;
    }
    cout<<endl;
    return output;
}
 Polynomial operator+(Polynomial& a,Polynomial& b)
 {
      Polynomial c(b.z);
     if(a.z>b.z)
      Polynomial c(a.z);
      
      for(int i=0;i<c.z+1;i++)
      c.x[i]=a.x[i]+b.x[i];
      return c;
 }

     const Polynomial& Polynomial::operator=( const Polynomial& a)
     {
      if(z!=a.z)
      {
          delete[]x;
          x=new int[a.z+1]();
      }
       for(int i=0;i<a.z+1;i++)
      x[i]=a.x[i];
        return *this;
     }
   const  Polynomial& Polynomial::operator+=( const Polynomial& a)
     {
         for(int i=0;i<z+1;++i)
         x[i]=x[i]+a.x[i];


         return *this;
     }
