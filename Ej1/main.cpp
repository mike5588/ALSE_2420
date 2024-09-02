#include <iostream>

int main(){

  int x, y ,aux;
  std::cout << "Ingrese dos números enteros: " ;
  std::cin >> x >> y;
  aux = x;
  x = y;
  y = aux;
  std::cout << x << ", " << y << std::endl;
  std::cout << "Hola Alse" << std::endl;
  return 0;
}
