#include <iostream>

using namespace std;

int main()
{
   
    unsigned int y=0;
   unsigned int value[5]={2,4,6,8,10};
   unsigned int *vptr=&y;
  vptr=value;
  for(int i=0;i<5;i++)
   cout<<"\nvptr is"<<vptr[i];
   vptr=&value[0];
   for(int j=0;j<5;j++)
    cout<<" \nis"<<*(vptr+j);
   for(int j=0;j<5;j++)
    cout<<" \nis"<<*(value+j);
     for(int i=0;i<5;i++)
    cout<<"\nvptr is"<<value[i];
   for(int i=0;i<5;i++)
    cout<<value[i]<<vptr[i]<<*(vptr+i)<<*(value+i);
    vptr+3=&value[3];
   vptr[3]=value[3];
   vptr=&value[4];
   vptr-=4;
   *vptr=value[0];
   
    
}

