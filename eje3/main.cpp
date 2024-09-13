#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int mysuma( const float &a, int b)
{
  //a = 777.9;
  return (int)(a + (float)b);
}

int main(){
  
  int a, b, c;
  float d, e, f;
  double h, i, j;

  a = 7;
  b = 9;
  d = 3.141592;
  e = 78.87;
  h =  667.897;
  i = (double) e;
  // int max( int a , int b )
  c = max(a, b);
  // float max( float a , float b )
  f = max( d, e );
  // double max( double a, double b )
  j = max( h, i );
  cout << "Los máximos son: " << c << " que usa " << sizeof(c) << endl;
  cout << f << " que usa " << sizeof(f) << " y " << j << " que usa "<< sizeof(j) << endl;
  cout << "La suma de un flotante y un entero: " << mysuma(f,c) << endl;
  cout << f << ", " << &f << endl;
  return 0;
}
