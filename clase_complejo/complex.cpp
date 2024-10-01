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

Complex::Complex()
{
  re = im = 0.;
}

Complex::Complex(double r, double i)
{
  re = r;
  im = i;
}

double Complex::angle() const
{
  return atan2(im, re);
}

double Complex::magnitude() const
{
  return sqrt(re*re + im*im);
}

Complex Complex::conjugate() const
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
  bool res = false;
  if ( magnitude() == a.magnitude())
  {
    res = true;
  }
  return res;
}

bool Complex::operator<( const Complex &a )
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
