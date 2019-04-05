#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
using namespace std;
#include<string>
#include"Package.h"
class TwoDaypackage : public Package

{
    public:
        TwoDaypackage(string,string,string,string,string,int,double,double,double);

         double calculatecost();
    void settwodaycost(double);
    double gettwodaycost();

    private:
        double twodaycost;
};

#endif // TWODAYPACKAGE_H
