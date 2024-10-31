#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <vector>

typedef std::pair<int, float> HorasExtras; // (día, horas)

class Empleado {
private:
    std::string _nombre;
    std::string _apellido;
    unsigned int _cedula;
    double _salarioMensual;
    std::vector<HorasExtras> _horasxDia; 

public:
    Empleado(const std::string& nombre, const std::string& apellido, 
             const unsigned int& cedula, double salarioMensual);

    void agregarHorasExtras(int dia, float horas);
    std::vector<HorasExtras> getHorasExtras() const;
    double calcularSalario() const;
    std::string getNombre() const;
    std::string getApellido() const;
    unsigned int getCedula() const;
    double getSalarioMensual() const;
};

#endif // EMPLEADO_H

