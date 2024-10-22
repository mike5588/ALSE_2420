#include <iostream>
#include "Polinomio.h"
#include <math.h>

using namespace std;

int main()
{
    cout << "Este programa sirve para validar" << endl
         << "el funcionamiento de las listas" << endl;


    Polinomio a( "4X^4-2X^5+5X^6+4X^2-5X-3" );
    Polinomio b( "3X-3" );

    cout << "El polinomio 1 es: " << a << endl;
    cout << "El polinomio 2 es: " << b << endl;


//       a.ordenar();
//       cout << "El polinomio 1 es: " << a << endl;
//       b.ordenar();
//       cout << "El polinomio 2 es: " << b << endl;

//    Polinomio c;

//      c = a + b;
//      cout << "La suma de los polinomios es: " << c << endl;

//       c = a - b;
//        cout << "La resta de los polinomios es: " << c << endl;

////    c = a * b;
////    cout << "La multiplicación de los polinomios es: " << c << endl;

//    c = a / M_PI;
//    cout << "La división del polinomio 1 por Pi es: " << c << endl;

    return 0;
}
