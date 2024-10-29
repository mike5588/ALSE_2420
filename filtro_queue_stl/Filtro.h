/**
 * Project Untitled
 */


#ifndef _FILTRO_H
#include <queue>

class Filtro {
public:  
    Filtro(int tamano);
    void agregarDato(float a);
    void setTamano(int a){_tamano = a;}
    int  getTamano(){ return _tamano;}
    float promedio();
private: 
    int _tamano;
    std::queue<float> _datos;

};

#endif //_FILTRO_H
