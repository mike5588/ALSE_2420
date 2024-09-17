#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

bool cruce( const float &a, const float &b){
  if( a > 0 && b < 0 ) return true;
  if( a < 0 && b > 0 ) return true;
  return false;
}

int main(int argc, char** argv){

  if ( argc != 3 ){
    cout << "El programa necesita freq e incremento.\n";
    return -1;
  }

  // Definiendo el vector de datos x
  float x[100];
  float fx[100];
  // La función main recibirá dos parámetros
  float freq = atof( argv[1] );
  float increm =  atof( argv[2] );

  // inicializando el vector de datos
  x[0] = 0.0;
  for( int i = 1; i < 100; i++){
    x[i] = x[i-1] + increm;
  }

  for( int i = 0; i < 100; i++ ){
    fx[i] = (float) sin( 2.0 * M_PI* freq * x[i] );
  }


  // Ahora imprimir a la vez que se buscan el cruce por cero
  cout << "Se imprimirá la lista de valores x, f(x) y un <- para indicar el cruce por cero\n";
  for(int i = 0; i < 100; i++){
    cout << x[i] << ", " << fx[i] ;
    if( i > 0 && cruce( fx[i], fx[i-1] ) )
      cout << "<-";
    
    cout << endl;
  }
  
  cout << "Fin de los datos." << endl;
  return 0;
}
