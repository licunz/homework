#include "Account.h"
using namespace std;
#include<string>
#include<iostream>
Account::Account(double a)
      {
yue=a;
if(a<0)
{
yue=0;
cout<<"error"<<endl;
}
 }      
        void Account::credit(double a)
{

yue=yue+a;

}
   
        void Account::debit(double a)
{
yue=yue-a;
if(yue<0)
{
yue=yue+a;
cout<<"Debit amount exceeded account balance"<<endl;
}
}
        double Account::getyue()
{


return yue;


}
 
