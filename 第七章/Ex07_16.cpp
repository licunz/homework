#include <iostream>
#include<array>
#include<iomanip>

using namespace std;

int main()
{
 array<array<int,6>,6>shai;
for(int i=1,i<7,i++)
 { 
 for(int j=1;j<7;j++) 
shai[i][j]=j;
}
for(int i=1,i<7,i++)
 { 
cout<<"shaiz"<<i<<hang;
 for(int j=1;j<7;j++) 
cout<<shai[i][j];
}
}