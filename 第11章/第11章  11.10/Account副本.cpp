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
   
        bool Account::debit(double a)
{
yue=yue-a;
if(yue>=0)
return  true;
if(yue<0)
return  false;
}
        double Account::getyue()
{


return yue;


}
 
