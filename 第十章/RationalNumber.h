#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H
#include<iostream>

class RationalNumber
{
    friend std::ostream & operator<<(std::ostream&,const RationalNumber &);

    public:
        RationalNumber(int,int);
         RationalNumber   operator+(const RationalNumber & b);
        RationalNumber operator* (const RationalNumber& a);
        void  huajian();
        RationalNumber  operator=(const RationalNumber &  c);
        bool operator>(const RationalNumber& c);
    private:
        int  a;
        int   b;
};

#endif // RATIONALNUMBER_H
