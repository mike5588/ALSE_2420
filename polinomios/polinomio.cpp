#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include "polinomio.h"

using namespace std;


Polinomio::Polinomio(char var) {
    _grado = -1;
    _variable = var;
}

Polinomio::Polinomio(string pol) {
    _grado = -1;
    _variable = 0;
    redefinir( pol );
}

  Polinomio Polinomio::operator+( const Polinomio &a ){
    Polinomio c('X');
    return c;
  }
  Polinomio Polinomio::operator-( const Polinomio &a ){
    Polinomio c('X');
    return c;
  }
  bool Polinomio::operator==( const Polinomio &a ){
    return true;
  } 

ostream& operator<<(std::ostream& out, Polinomio a){
    out << a.getString();
    return out;
}

bool Polinomio::ordenar(){
	return true;
}
  
void Polinomio::nuevoTermino(float c, int p) {
    termino a(p,c);
    _terminoL.push_back( a );
    return;
}
  
bool Polinomio::redefinir(string pol) {
    borrar();
    string term;
    //cout << pol << endl;
    size_t posM, posm, posT1, posT2, found;
    posT1 = posT2 = 0;
    float coeff = 0.;
    int power = 0;

    while( posT2 != string::npos ){
        // Encontrando cada termino
        posM = pol.find("+", posT1 + 1 );
        posm = pol.find("-", posT1 + 1);
        // cout << posM << " " << posm << endl;
        if( posM != string::npos && posm != string::npos )
            posT2 = min( posM, posm );
        else if( posM == string::npos )
            posT2 = posm;
        else
            posT2 = posM;

        //cout << posT1 << " " << posT2 << endl;
        term = pol.substr( posT1, posT2 - posT1 );
        posT1 = posT2;
       // cout << term << endl;

        // Porcesando el termino
        if(_variable == 0){
            //cout << "variable" << endl;
            found = term.find_first_not_of("+-1234567890.,");
            //cout << term[found] << endl;
            if (found != std::string::npos)
              _variable = term[found] ;
        }

        found = term.find( _variable );
        if( found == string::npos ){
            //cout << "independiente" << endl;
            coeff = atof( term.c_str() );
            power = 0;
        }else{
            found = term.find( '^' );
            if( found != string::npos ){ // Tiene potencia > 1
                //cout << "pot >1" << endl;
                power = atoi( term.substr( found+1 ).c_str() );
                coeff = atof( term.substr( 0, term.size() - found +1 ).c_str() );
            }else{
                power = 1;
                coeff = atof( term.substr( 0, term.size() - 1 ).c_str() );
            }
        }

        //cout << "coeff: " << coeff << " y power: " << power << endl;
        // Adicionar el término encontrado
        nuevoTermino( coeff, power );
        _grado = power > _grado ? power : _grado ;
    }
    //cout << getString() << endl;
    return true;
}
  
bool Polinomio::simplificar(){
	
	return true;
}

string  Polinomio::getString(){
    stringstream stream;
    std::list<termino>::iterator it;
    for(it = _terminoL.begin(); it != _terminoL.end(); ++it){
        if(it->coef > 0) stream << "+";
            stream << it->coef ;
        if(it->exp > 0 ){
            stream << _variable;
            if( it->exp > 1 )
                stream << "^" << it->exp;
        }
    }
    return stream.str();
}