#ifndef OPACKAGE_H
#define OPACKAGE_H
#include<string>
#include"Account.h"
using namespace std;

class SavingsAccount : public Account
{
    public:
        SavingsAccount(double,double);


   double calculateInterest();


    private:
       double lixi;
};

#endif // OPACKAGE_H
