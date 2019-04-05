#include<iostream>

#include"SavingsAccount.h"
using namespace std;
#include<string>
 int main()
 {
    SavingsAccount a(500,0.1);
     cout<<"111"<<a.calculateInterest()<<endl;

     a.credit(100);

     cout<<"333"<<a.getyue()<<endl;

 }
