#include <iostream>
#include <list>
#include <string>

using namespace std;

struct termino{
  double coef;
  int    exp;
  termino(int e, double c): coef(c), exp(e) {};
};


class Polinomio{
  char _variable;
  int  _grado;

  std::list<termino> _terminoL;

public:
  Polinomio(char var );
  Polinomio(string str );

  Polinomio operator+( const Polinomio &a );
  Polinomio operator-( const Polinomio &a );
  bool operator==( const Polinomio &a ); 

  friend ostream& operator<<(std::ostream& out, Polinomio a);

  bool borrar();
  bool ordenar();
  bool simplificar();
  string getString();
  void nuevoTermino(float c, int p) ;
  bool redefinir(string pol);
};
