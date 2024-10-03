#include <iostream>

using namespace std;

class Punto2D{
  double _x;
  double _y;
  Punto2D( );

public:
  Punto2D(double x = 0. , double y = 0. );
  double distancia(const Punto2D &a) const;
  double proyeccion(const Punto2D &p1, const Punto2D &p2) const;
 
  Punto2D operator+( const Punto2D &a );
  Punto2D operator-( const Punto2D &a ); 
  friend ostream& operator<<(std::ostream& out, Punto2D a);
  // Adicionaré las funciones get/set
  void X(const double &x);
  void Y(const double &y);
  double X();
  double Y();
};
