#include "SavingsAccount.h"
#include<string>
using namespace std;
SavingsAccount::SavingsAccount(double a,double b)
:Account( a)
{
   lixi=b ;
}

 double SavingsAccount::calculateInterest()
{
    return   getyue()*lixi;
}
