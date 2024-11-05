#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <vector>

typedef std::pair<int, float> HorasExtras; // (día, horas)
class Empleado {
    std::string _nombre;
    std::string _apellido;
    unsigned int _cedula;
    double _salarioMensual;
    std::vector<HorasExtras> _horasExDia;

public:
    Empleado(const std::string& nombre, const std::string& apellido, 
        const unsigned int& cedula, double salarioMensual);

    void agregarHorasExtras(int dia, float horas) ;
    void asignarSalario(double salario);
    double getSalario() const ;
    double calcularTotalHorasExtras() const ;
    void setNombre(const std::string &nombre);
    std::string getNombre() const ;
    std::string getApellido() const ;
    void setApellido(const std::string &apellido);
};

#endif // EMPLEADO_H