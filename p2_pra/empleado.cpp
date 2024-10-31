#include "empleado.h"
#include <iostream>
#include <string>

// Constructor
Empleado::Empleado(const std::string& nombre, const std::string& apellido, 
    const unsigned int& cedula, double salarioMensual)
    : _nombre(nombre), _apellido(apellido), _cedula(cedula), 
    _salarioMensual(salarioMensual) 
{
    _horasxDia.clear();
}

// Método para agregar horas extras
void Empleado::agregarHorasExtras(int dia, float horas) {
    _horasxDia.push_back(std::make_pair(dia, horas));
}

// Método para obtener las horas extras
std::vector<HorasExtras> Empleado::getHorasExtras() const {
    return _horasxDia;
}

// Método para calcular el salario total
double Empleado::calcularSalario() const {
    double totalHorasExtras = 0;
    for (const auto& horas : _horasxDia) {
        totalHorasExtras += horas.second;
    }
    double pagoHorasExtras = totalHorasExtras * (_salarioMensual / 240); //  240 horas laborales al mes
    return _salarioMensual + pagoHorasExtras;
}


std::string Empleado::getNombre() const {
    return _nombre;
}

std::string Empleado::getApellido() const {
    return _apellido;
}

unsigned int Empleado::getCedula() const {
    return _cedula;
}

double Empleado::getSalarioMensual() const {
    return _salarioMensual;
}

