#ifndef PACKAGE_H
#define PACKAGE_H
using namespace std;
#include<string>
class Package
{
    public:

        Package(string,string,string,string,string,int,double,double);
        void setjname(string);
        string getjname ();
         void setsname(string);
        string getsname ();

         void setdizhi(string);
        string getdizhi ();
         void setcity(string);
        string getcity ();
         void setzou(string);
        string getzou ();
        void setyouzheng(int);
        int getyouzheng();
        void setweigh(double);
        double getweigh();
        void setcost(double);
        double getcost();
    double calculatecost();

    private:
        string jname;
        string sname;
        string dizhi;
        string city;
        string zou;
        int youzheng;
        double weigh;
        double cost;
};

#endif // PACKAGE_H