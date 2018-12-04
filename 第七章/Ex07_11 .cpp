#include <iostream>
#include<array>
#include<iomanip>

using namespace std;

int main()
{
   array<int,10>counts;
   for(int i=0;i<counts.size();i++)
    counts[i]=0;
   array<int,15>bonus;
   for(int i=0;i<bonus.size();i++)
  bonus[i]=bonus[i]+1;
    array<double,12>monthlytemperatures;
   for(int i=0;i<monthlytemperatures.size();i++)
   cin>>monthlytemperatures[i];
   array<double,5>bestscores;
    for(int i=0;i<bestscores.size();i++)
    bestscores[i]=0;
    cout<<"i"<<setw(10)<<"bestscores";
     for(int i=0;i<bestscores.size();i++)
    cout<<i<<setw(10)<<bestscores[i]\n;
    
}