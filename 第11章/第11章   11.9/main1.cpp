#include<iostream>
#include"TwoDaypackage.h"
#include"Opackage.h"
using namespace std;
#include<string>
 int main()
 {
     TwoDaypackage a("li","chun","zhi","jining","lovy",10,100,5,50);
     cout<<"111"<<a.getjname()<<endl;

     cout<<"222"<<a.getsname()<<endl;

     cout<<"333"<<a.calculatecost()<<endl;
     Opackage b("li","chun","zhi","jining","lovy",10,100,5,50);
 cout<<"444"<<b.calculatecost()<<endl;

 }
