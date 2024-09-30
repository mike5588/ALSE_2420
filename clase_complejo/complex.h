#include <iostream>

using namespace std;

class Complex{
  double re;
  double im;

public:
  // Implemente la siguiente función y explique para qué sirve
  Complex(double r =0. , double i = 0 );

  double angle();
  double magnitude();
  Complex conjugate();

  Complex operator+( const Complex &a );
  Complex operator-( const Complex &a );
  Complex operator*( const Complex &a );
  bool operator==( const Complex &a ); 
  bool operator<( const Complex &a ); 
  bool operator>( const Complex &a ); 

  friend ostream& operator<<(std::ostream& out, Complex a);
};
