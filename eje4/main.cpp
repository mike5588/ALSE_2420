#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

long factorial( long n )
{ 
  if( n > 1)
    return n * factorial( n - 1);
  
  return 1;
}

int factorial( int n )
{
  // Recursión
  // factorial (n) = n* n-1 * n-2 * .... 1
  // factorial (1) = 1
  if (n > 0) {
    if (n > 1){
      return n * factorial( n - 1);
    }else{
      return 1;
    }
  }
  return -1;
}

int main(int argc, char** argv){
  
  double antena = 89.98;
  double *ptr_dbl = &antena;
  cout << antena << ", este valor está almancenado en " << &antena << endl;
  *ptr_dbl = 101.9;
  cout << *ptr_dbl << ", este valor está almancenado en " << ptr_dbl << endl;

  cout << "El valor de argc: " << argc << endl;
  
  for(int i = 0; i < argc; i++)
    cout << "El primer elemento de char** " << argv[i] << endl; 

  // Llamando la función recursiva
  long valor;  
  for(int i = 1; i < argc; i++){
    valor = atoi( argv[ i ] );
    cout << "El factorial de :" << valor << " es ";
    cout << factorial( valor ) << endl;
  }

  return 0;
}
