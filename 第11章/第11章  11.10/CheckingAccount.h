#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
using namespace std;
#include<string>
#include"Account.h"
class CheckingAccount : public Account

{
    public:
        CheckingAccount(double,double);

        void credit(double,double);

        void debit(double,double);

    private:
        double jiaoyi;
};

#endif // TWODAYPACKAGE_H
