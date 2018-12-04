#include <iostream>

using namespace std;
void abc(char*, const char*);
int main()
{



  char a[80];
  char b[80];
  cout<<"two";
  cin<<a;
  cin<<b;
  abc(a,b);
  cout<<b<<endl;

}
 void abc(char*s1, const char*s2)
{
    while(*s1!='\0')
++s1;
    for(;(*s1=*s2);++s1,++s2);

}
//当s1所指向的字符与s2[0]时，s1指向的地址