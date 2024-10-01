#include <iostream>
#include "complex.h"

using namespace std;

void Complex::Re(const double &r)
{
  re = r;
}

void Complex::Im(const double &i)
{
  im = i;
}

double Complex::Re()
{
  return re;
}

double Complex::Im()
{
  return im;
}


Complex::Complex(double r =0. , double i = 0 )
{

}

double Complex::angle(){

}

double Complex::magnitude()
{

}

Complex Complex::conjugate()
{

}

Complex Complex::operator+( const Complex &a )
{

}

Complex Complex::operator-( const Complex &a )
{

}

Complex Complex::operator*( const Complex &a )
{

}

bool Complex::operator==( const Complex &a );
{

}

bool Comnplex::operator<( const Complex &a );
{

}

bool Complex::operator>( const Complex &a );
{

}


ostream& operator<<(ostream& out, Complex a){

}

{

}
