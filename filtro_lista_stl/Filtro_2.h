/**
 * Project Untitled
 */


#ifndef _FILTRO_H
#include <list>
#include <vector>

class Filtro {
public:  
    Filtro(int tamano, float coef[] );
    void agregarDato(float a);
    float aplicar_filtro( float x_n );
    int  getTamano(){ return _tamano;}
private: 
    int _tamano;
    float _ult_sal;
    std::list<float> _datos;
    std::vector<float> _coeficientes;

};

#endif //_FILTRO_H
