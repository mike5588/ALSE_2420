#include <iostream>

using namespace std;

struct complex{
  double re;
  double im;
};

// Implemente la siguiente función y explique para qué sirve
complex(double r =0. , double i = 0

/* Ajuste la declaración de estas funciones para tener parámetros por referencia seguros
   e implementelas. Explique qué hace cada una de ellas.
double angle(complex a);
double magnitude(complex a);
complex conjugate(complex a);

// Ajuste la declaración de estas funciones para tener parámetros por referencia seguros
// e implementelas. Explique por qué se llama sobrecarga de operadores.
complex operator+(complex a, complex b);
complex operator-(complex a, complex b);
complex operator*(complex a, complex b);
bool operator==(complex a, complex b); // Implementar utilizando la magnitude y el angle
bool operator<(complex a, complex b);  // Implementar utilizando la magnitude y el angle
bool operator>(complex a, complex b);  // Implementar utilizando la magnitude y el angle

// Esta sobrecarga es espacial. Indague cómo se debe realizar, explique su correcto funcionamiento
// e implementela.
ostream& operator<<(std::ostream& out, complex a);
