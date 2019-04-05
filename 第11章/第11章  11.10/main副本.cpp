#include<iostream>

#include"CheckingAccount.h"
using namespace std;
#include<string>
 int main()
 {
    CheckingAccount a(500,100);
a.debit(100,100);
     cout<<"111"<<a.getyue()<<endl;

     a.credit(100,100);

     cout<<"333"<<a.getyue()<<endl;

 }
