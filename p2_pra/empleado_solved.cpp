#include "empleado.h"
#include <iostream>
#include <string>

// Constructor
Empleado::Empleado(const std::string& nombre, const std::string& apellido, 
    const unsigned int& cedula, double salarioMensual)
    : _nombre(nombre), _apellido(apellido), _cedula(cedula), 
    _salarioMensual(salarioMensual) 
    {
        _horasExDia.clear();
    }

void Empleado::setNombre(const std::string& nombre) {
    this->_nombre = nombre;
}

std::string Empleado::getNombre() const {
    return _nombre;
}

double Empleado::getSalario() const {
    return _salarioMensual;
}

void Empleado::setApellido(const std::string& apellido) {
    this->_apellido = apellido;
}   

std::string Empleado::getApellido() const {
    return _apellido;
}

void Empleado::agregarHorasExtras(int dia, float horas) {
    _horasExDia.push_back(std::make_pair(dia, horas));
}

void Empleado::asignarSalario(double salario) {
    _salarioMensual = salario;
}

double Empleado::calcularTotalHorasExtras() const {
    int totalHorasExtras = 0;
    std::vector<HorasExtras>::const_iterator it;
    for(it = _horasExDia.begin();it != _horasExDia.end(); ++it) {
        totalHorasExtras += it->second;
    }
    return totalHorasExtras * _salarioMensual / 240;
}
