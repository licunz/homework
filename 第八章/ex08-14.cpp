#include <iostream>

using namespace std;
void mystery2( const char*);
int main()
{
char string1[80];
cout<<"Enter a string";
cin >>string1;
cout<< mystery2(string1)<<endl;
}//创建了内置字符数组，输入字符串，调用mystery2()函数
int mystery2(const char*s)
{
unsigned int x;
for （x=0;*s!='\0';s++）
++x;
return x


}
//这个函数为了证明内置字符数组有多少个字符


