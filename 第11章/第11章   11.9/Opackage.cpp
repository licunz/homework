#include "Opackage.h"
#include<string>
using namespace std;
Opackage::Opackage(string a,string b,string c,string d,string e,int f,double g,double h,double i)
:Package( a, b, c, d, e, f, g,h)
{
   seterwai(i) ;
}

 double Opackage::calculatecost()
{
    return getcost()*erwai+erwai*getweigh();
}
void Opackage::seterwai(double a)
{
    erwai=a;
}

double Opackage::geterwai()
{
    return erwai;
}
