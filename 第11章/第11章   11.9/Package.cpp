#include "Package.h"
using namespace std;
#include<string>
#include<iostream>
 Package::Package(string a,string b,string c,string d,string e,int f,double g,double h)
 {
   setjname(a);
     setsname(b);
     setdizhi(c);
     setcity(d);
     setzou(e);
     setyouzheng(f);
     setweigh(g);
     setcost(h);
 }
        void Package::setjname(string a)
        {
            jname=a;
        }
        string Package::getjname ()
        {
            return jname;
        }
         void Package::setsname(string b)

         {
             sname=b;
         }
        string Package::getsname ()
        {
            return sname;
        }

         void Package::setdizhi(string c)
         {
             dizhi=c;
         }
        string Package::getdizhi ()
        {
            return dizhi;
        }
         void Package::setcity(string d)
         {
             city=d;
         }
        string Package::getcity ()
        {
            return city;
        }
         void Package::setzou(string e)
         {
             zou=e;
         }
        string Package::getzou ()
        {
            return zou;
        }
        void Package::setyouzheng(int f)
        {
            youzheng=f;
        }
        int Package::getyouzheng()
        {
            return youzheng;
        }
        void Package::setweigh(double g)
        {
            for(g>=0)
weigh=g;
else
cout<<"error"<<endl;
        }
        double Package::getweigh()
        {
            return weigh;
        }
        void Package::setcost(double h)
        {
    if£¨h>=0£©
            cost=h;
else
cout<<"error"<<endl;

        }
        double Package::getcost()
        {
           return cost;
        }
        double Package::calculatecost()
        {
           return cost*weigh;

        }
