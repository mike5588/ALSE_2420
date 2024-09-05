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
  std::cout << "Nuestro primer contacto con el VSCode de Windows con un proyecto en WSL2\n";
  return 0;
}
