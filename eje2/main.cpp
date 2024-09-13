#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  // Defina un vector de flotantes de 50 elementos e 
  // inicialicelo todo en 0.0 usando un for
  float datos[50]={0.0};
  for(int i = 0; i < 50; i++){
    datos[i] = 0.0;
  }
  
  // Usando la función de números aleatorios llene el vector con 
  // con datos entre 90 y 250 dejando en 0 el valor de la posición 25
  for(int i = 0; i < 50; i++){
    datos[i] = 90 + rand() * 160.0;
  }

  // Muestre el contenido del vector en la pantalla en un arreglo de
  // 10 filas por 5 columnas
  for( int i = 0; i < 10; i++){
    for( int j = 0; j < 5; j++ )
      std:: cout << datos[5*i+j] << "\t" ;

    std::cout << std::endl;
  }


  // Ordene el vector de menor a mayor con el método de la burbuja



  // Muestre nuevamente el contenido del vector en la pantalla en un 
  // arreglo de 10 filas por 5 columnas

  int x;
  std::cout << "Ingrese un número de 1 a 5\n";
  std::cin >> x;
  switch ( x )
  {
  case 1:
    /* code */
    std:: cout << "Ingresó uno\n";
    break;
  case 2:
    /* code */
    std:: cout << "Ingresó dos\n";
    break;
  case 3:
    /* code */
    std:: cout << "Ingresó tres\n";
    break;
  case 4:
    /* code */
    std:: cout << "Ingresó cuatro\n";
    break;
  case 5:
    /* code */
    std:: cout << "Ingresó cinco\n";
    break;
  default:
    std::cout << "No siguió las indicaciones\n";
    return 1;
  }

  std::cout << "Gracias por seguir las indicaciones\n";
  return 0;
}
