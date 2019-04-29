#include <iostream>
#include <Polynomial.h>
using namespace std;
#include<string>

int main()
{
   Polynomial a(4);
   cout<<a;
   cin>>a;
   cout<<a;
   Polynomial b(4);
   cin>>b;
   cout<<a+b;
}
