#include <iostream>

using namespace std;

Complex::Complex(double r =0. , double i = 0 );

double Complex::angle();
double Complex::magnitude();
Complex Complex:.conjugate();

Complex Complex::operator+( const Complex &a );
Complex Complex::operator-( const Complex &a );
Complex Complex::operator*( const Complex &a );
bool Complex::operator==( const Complex &a ); 
bool Comnplex::operator<( const Complex &a ); 
bool Complex::operator>( const Complex &a ); 

friend ostream& operator<<(std::ostream& out, Complex a);
