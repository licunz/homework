#include "TwoDaypackage.h"
using namespace std;
#include<string>
TwoDaypackage::TwoDaypackage(string a,string b,string c,string d,string e,int f,double g,double h,double i)
: Package( a, b, c, d, e, f, g,h)
{

   settwodaycost(i);
     //ctor
}


         double TwoDaypackage::calculatecost()
         {
             return getcost()*getweigh()+twodaycost;
         }
    void TwoDaypackage::settwodaycost(double a)
    {
        twodaycost=a;
    }
    double TwoDaypackage::gettwodaycost()
    {
       return twodaycost;
    }
