#ifndef OPACKAGE_H
#define OPACKAGE_H
#include<string>
#include"Package.h"
using namespace std;

class Opackage: public Package
{
    public:
        Opackage(string,string,string,string,string,int,double,double,double);


   double calculatecost();
void seterwai(double);
double geterwai();

    private:
       double erwai;
};

#endif // OPACKAGE_H
