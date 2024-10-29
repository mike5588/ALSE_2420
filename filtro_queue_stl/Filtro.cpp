/**
 * Project Untitled
 */


#include "Filtro.h"
#include <list>
#include <iostream>

using namespace std;

/**
 * Filtro implementation
 */
Filtro::Filtro(int tamano){
    _tamano = tamano;
}

/**
 * @param a
 * @return void
 */
void Filtro::agregarDato(float a) {
    if( _datos.size() == _tamano )
        _datos.pop();

    _datos.push( a );
    return;
}

/**
 * @return float
 */
float Filtro::promedio() {
    float prom =0.;
    if( _datos.empty() ) return 0.;

    std::queue<float> temp;
    int it = 0;
    for( it = 0; it == _datos.size(); it++ ){
        prom += _datos.front();
        temp.push( _datos.front() );
        _datos.pop();
    }
    _datos = temp;
    prom /= _datos.size();
    return prom;
}



