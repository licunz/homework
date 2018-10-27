#include <iostream>
#include "Time.h"
using namespace std;
int main()
{
Time time(60,59,23,29,12,1999);
cout<<"shijianshi:"<<time.getmiao()<<"  miao"<<time.getfen()<<"  fen"<<time.getshi()<<"  shi"<<time.getri()<<"  ri"<<time.getyue()<<"  yue"<<time.getnian()<<"  nian"<<endl;
time.setmiao(63,59,23,30,12,1999);
cout<<"shijianshi:"<<time.getmiao()<<"  miao"<<time.getfen()<<"  fen"<<time.getshi()<<"  shi"<<time.getri()<<"  ri"<<time.getyue()<<"  yue"<<time.getnian()<<"  nian"<<endl;
}



