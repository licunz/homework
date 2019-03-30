
#include "Matrix.h"
using namespace std;
#include <string>
#include <iostream>
#include<stdexcept>

istream &operator>>( istream & input, Matrix & a)
{
for(unsigned int i=0;i<a.row;++i)


  for(unsigned int j=0;j<a.col;++j)

   input>>a.mat[i][j];

return input;
}


ostream &operator<<( ostream & output, const Matrix & a)
{

  for(unsigned int i=0;i<a.row;++i)
  {
      for(unsigned int j=0;j<a.col;++j)
      {
          output<<a.mat[i][j]<<" ";
      }
      output<<endl;
  }
  return output;
}

 Matrix   Matrix::operator+(  const Matrix & b)
{

if (row!=b.row||col!=b.col)
  throw invalid_argument("error");
else
{
Matrix c(b.row,b.col);
for(unsigned int i=0;i<row;++i)
for(unsigned int j=0;i<col;++j)
c.mat[i][j]=mat[i][j]+b.mat[i][j];
return c;
}
}


 Matrix operator-( const Matrix &a, const Matrix &b )
{

if (a.row!=b.row||a.col!=b.col)
  throw invalid_argument("error");
else
{
Matrix c(a.row,a.col);
for(unsigned int i=0;i<c.row;++i)
for(unsigned int j=0;i<c.col;++j)
c.mat[i][j]=a.mat[i][j]-b.mat[i][j];
return c;
}
}

 Matrix operator*( const Matrix &a, const Matrix & b)
{
if (a.col!=b.row)
  throw invalid_argument("error");
else
{
Matrix c(a.row,b.col);
for(unsigned int i=0;i<c.row;++i)
for(unsigned int j=0;j<c.col;++j)
for(unsigned int d=0;d<c.col;++d)

c[i][j]=c[i][j]+a[i][d]*b[d][j];
return c;
}
}
 Matrix operator*( double a, const Matrix &  b)
{

Matrix c(b.row,b.col);
for(unsigned int i=0;i<b.row;++i)
for(unsigned int j=0;i<b.col;++j)
c[i][j]=a*b[i][j];
return c;

}
 Matrix operator*( const Matrix & b, double a )
{
Matrix c(b.row,b.col);
for(unsigned int i=0;i<c.row;++i)
for(unsigned int j=0;i<c.col;++j)
c[i][j]=a*b[i][j];
return c;
}
 Matrix operator/( const Matrix & b, double a )
{
Matrix c(b.row,b.col);

for(unsigned int i=0;i<c.row;++i)
for(unsigned int j=0;i<c.col;++j)
c[i][j]=b[i][j]*1/a;
return c;


}

Matrix::Matrix( unsigned int r , unsigned int c )
{
   if(r<=0||c<=0)
    throw invalid_argument("error");
    row=r;col=c;
    mat=new double*[row]();
    for(unsigned int i=0;i<row;i++)
    {
        mat[i]=new double[col]();
        for(unsigned int j=0;j<col;j++)
            mat[i][j]=0;
    }



}





 Matrix::Matrix( const Matrix &a )
{
if(row!=a.row||col!=a.col)
{
    delete mat;
    row=a.row;
    col=a.col;
    mat=new double*[row]();
    for(unsigned int i=0;i<row;++i)
    {
        mat[i]=new double[col]();
        for(unsigned int j=0;j<col;j++)
            mat[i][j]=a.mat[i][j];
    }
}


}


Matrix::~Matrix()
{
   for(unsigned int a=0;a<row;a++)
    delete mat[a];
    delete []mat;
}




Matrix &Matrix::operator=( const Matrix & a)
{

 delete mat;
    row=a.row;
    col=a.col;
    mat=new double*[row]();
    for(unsigned int i=0;i<row;i++)
    {
        mat[i]=new double[col]();
        for(unsigned int j=0;j<col;j++)
            mat[i][j]=a.mat[i][j];
    }
    return *this;

}



double *  Matrix::operator[]( const unsigned int i ) const

{

   return mat[i];

}




unsigned int Matrix::getRows() const

{

	return row;

}


unsigned int Matrix::getCols() const

{

	return col;
}
