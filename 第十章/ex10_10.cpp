
#include <iostream>
#include"RationalNumber.h"
using namespace std;

int main()
{
   RationalNumber b(3,2);
   RationalNumber a(2,3);
   cout<<a+b<<endl;
   cout<<a*b<<endl;
   RationalNumber c=a;
   cout<<c<<endl;
   if(b>c)
    cout<<"666"<<endl;
   else
    cout<<"ppp"<<endl;

}
