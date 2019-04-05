#ifndef PACKAGE_H
#define PACKAGE_H
using namespace std;
#include<string>
class Account
{
    public:

        Account(double);
      
       
        void credit(double);
   
        void debit(double);
        double getyue();
 

    private:
       
        double yue;
};

#endif // PACKAGE_H