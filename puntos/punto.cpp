#include <iostream>
#include "punto.h"
#include <cmath>

using namespace std;



Punto2D::Punto2D( );

Punto2D::Punto2D(double x = 0. , double y = 0. )
{

}

double Punto2D::distancia(const Punto2D &a) const
{

}

double Punto2D::proyeccion(const Punto2D &p1, const Punto2D &p2) const
{

}
 
Punto2D Punto2D::operator+( const Punto2D &a )
{

}

Punto2D Punto2D::operator-( const Punto2D &a )
{

}

Punto2D::ostream& operator<<(std::ostream& out, Punto2D a)
{

}

  // Adicionaré las funciones get/set
void Punto2D::X(const double &x)
{
  _x = x;
}

void Punto2D::Y(const double &y)
{
  _y = y;
}

double Punto2D::X()
{
  return _x;
}

double Punto2D::Y()
{
  return _y;
}
