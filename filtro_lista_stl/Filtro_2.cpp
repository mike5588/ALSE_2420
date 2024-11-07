/**
 * Project Untitled
 */

#include "Filtro_2.h"
#include <list>
#include <iostream>

using namespace std;


/**
 * @param a
 * @return void
 */
void Filtro::agregarDato(float a) {
    if( _datos.size() == _tamano )
        _datos.pop_front();

    _datos.push_back( a );
    return;
}

/**
 * @return float
 */
float Filtro::aplicar_filtro( float x_n ){
    float prom =0.;
    if( _datos.size() == 0 ) return 0.;

    _datos.pop_front();
    _datos.push_back( x_n );

    int pos;
    list<float>::iterator it = _datos.begin();
    for( pos = 0; pos < _tamano -1; pos++){
        prom += _coeficientes[ pos ] * (*it);
        ++it;
    }

    prom += _coeficientes[_tamano] * _ult_sal;

    _ult_sal = prom;

    return prom;
}



Filtro::Filtro(int tamano, float coef[] ){
    _tamano = tamano;
    for(int i = 0; i < _tamano ; i++){
      _coeficientes[i] = coef[i];
      _datos.push_back( 0.0 );
    }


}


