#include<iostream>
using namespace std;
class JZ
{

public:

    friend JZ operator + (JZ &p1,JZ &p2)
 {
        for(int i=0;i<p1.r;i++)
        {
            for(int j=0;j<p1.c;j++)
            {
                p1.data[i][j]+=p2.data[i][j];
            }
        }
        return p1;
    }
 friend istream& operator>>(istream&input,JZ&p)
{
p. r=3;p.c=3;
 for(int i=0;i<p.r;i++)
        {
            for(int j=0;j<p.c;j++)
            {
                cin>>p.data[i][j];
            }
         }
return input;
}
   friend  JZ& operator*(JZ&p1,JZ&p2)
{

        for(int i=0;i<p1.r;i++)
        {
            for(int j=0;j<p1.c;j++)
            {
                cout<<p1.data[i][0]*p2.data[0][j]+p1.data[i][1]*p2.data[1][j]+p1.data[i][2]*p2.data[2][j]<<" ";
            }
cout<<endl;
        }

return p1;
}


    friend ostream& operator<<(ostream&output,JZ&p)

    {
        for(int i=0;i<p.r;i++)
        {
            for(int j=0;j<p.c;j++)
            {
                output<<p.data[i][j]<<" ";
            }
            output<<endl;
        }

        return output;
    }


    private:
    int r;
    int c;
    int data[3][3];
};





int main()
{
    JZ p1,p2;
cin>>p1>>p2;
    p1=p1+p2;
    cout<<"555555"<<endl;
    cout<<p1;
    cout<<p1*p2;
}
