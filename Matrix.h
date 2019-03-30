#include<iostream>
class Matrix
{
  friend std::istream &operator>>( std::istream &, Matrix & );

friend std::ostream &operator<<( std::ostream &, const Matrix & );




friend Matrix operator-( const Matrix &, const Matrix & );

friend Matrix operator*( const Matrix &, const Matrix & );


	friend Matrix operator*( double, const Matrix & );

	friend Matrix operator*( const Matrix &, double );

friend Matrix operator/( const Matrix &, double );


public:



Matrix( unsigned int r=3, unsigned int c=3 );

 Matrix operator+(  const Matrix & );

Matrix( const Matrix &rhs );


~Matrix();


Matrix &operator=( const Matrix & );


double * operator[]( const unsigned int i ) const;








unsigned int getRows() const;



unsigned int getCols() const;



private:

unsigned int row, col;

double ** mat;

};





