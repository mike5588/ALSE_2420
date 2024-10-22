#include <iostream>
#include <list>
#include <string>

using namespace std;

struct termino{
  double coef;
  int    exp;
};


class Polinomio{
  char _variable;
  int  _grado;

  std::list<termino> _terminos;

public:
  Polinomio(char var );
  Polinomio(string str );

  Polinomio operator+( const Polinomio &a );
  Polinomio operator-( const Polinomio &a );
  bool operator==( const Polinomio &a ); 

  friend ostream& operator<<(std::ostream& out, Polinomio a);

  bool ordenar();
  bool simplificar();
};
