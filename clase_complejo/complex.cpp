#include <iostream>
#include "complex.h"
#include <cmath>

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
  re = r;
  im = i;
}

double Complex::angle()
{
  return atan2(im, re);
}

double Complex::magnitude()
{
  return sqrt(re*re + im*im);
}

Complex Complex::conjugate()
{
  Complex r;
  r.re = re;
  r.im = -im;
  return r;
}

Complex Complex::operator+( const Complex &a )
{
  Complex res;

  return res;
}

Complex Complex::operator-( const Complex &a )
{
  Complex res;

  return res;
}

Complex Complex::operator*( const Complex &a )
{
  Complex res;

  return res;
}

bool Complex::operator==( const Complex &a )
{
  bool res;

  return res;
}

bool Comnplex::operator<( const Complex &a )
{
  bool res;

  return res;
}

bool Complex::operator>( const Complex &a )
{
  bool res;

  return res;
}


ostream& operator<<(ostream& out, Complex a)
{
  out << a.re << " + " << a.im << "j";
  return out;
}
