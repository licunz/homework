#include <iostream>
#include<array>
#include<iomanip>

using namespace std;

int main()
{
   
   array<int,20>n;
    int a=0;
            cin>>a;
        if(a>100)
            cout<<"error";
            else if(a<10)
            cout<<"error";
        else n[0]=a;x
   for(int i=1;i<20;i++)
    {
        cin>>a;
        if(a>100)
        {
            cout<<"error";
             i--;
        }
           
            else if(a<10)
            {
                i--;
            cout<<"error";
            }
             
        else a=n[i];
        if(n(i)=n(i-1))
            i--;
    
}
}