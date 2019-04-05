#include "CheckingAccount.h"
using namespace std;
#include<string>

CheckingAccount:: CheckingAccount(double  a,double  b)
:Account(a)
{

jiaoyi=b;


}

        void CheckingAccount::credit(double a,double b)
{

Account::credit(a-b);


}

        void CheckingAccount::debit(double a,double b)
{
if(Account::debit(a))
Account::credit(-b);


}

       