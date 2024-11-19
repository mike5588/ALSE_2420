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

    cout << a << " " << _tamano << " " << _datos.size() << endl;
    _datos.push( a );
    cout << _datos.size() << endl;
    return;
}

/**
 * @return float
 */
float Filtro::promedio() {
    float prom =0.;
    if( _datos.size() == 0 ) return 0.;

    std::queue<float> temp;
    int it = 0;
    for( it = 0; it < _datos.size(); it++ ){
        prom += _datos.front();
        temp.push( _datos.front() );
        _datos.pop();
    }
    cout << temp.size() << " " << it << endl;
    _datos = temp;
    cout << _datos.front() << endl;
    prom /= _datos.size();
    return prom;
}



