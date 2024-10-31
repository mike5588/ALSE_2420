#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

#include "empleado.h"

using namespace std;

void cargarArchivo(char* file, vector<Empleado>& trabajadores) {
    string nombre, apellido;
    unsigned int cedula;
    double salario;
    int dia;
    float horas;
    string texto;
    stringstream ss;

    ifstream archivo(file);
    if (archivo.is_open()) {
        while (!archivo.eof() && getline(archivo, texto)) {
            ss.clear();
            ss << texto;
            ss >> nombre >> apellido >> cedula >> salario;
            Empleado e(nombre, apellido, cedula, salario);
            while (ss >> dia >> horas) {
                e.agregarHorasExtras(dia, horas);
            }
            trabajadores.push_back(e);
        }
        archivo.close();
    }
}

int main(int argc, char** argv) {
    vector<Empleado> _trabajadores;

    cargarArchivo(argv[1], _trabajadores); // carga bien
    size_t tam = _trabajadores.size();
    cout << "Número de trabajadores: " << tam << endl;

    // Calcula el valor a pagar por horas extras de cada trabajador 
    // y mostrar el valor mensual y el valor de las horas extras en un 
    // arreglo tabular
    // Empleado (Nombre y apellido) | Salario mensual | Horas extras | Total a pagar
    cout << "Empleado (Nombre y apellido) | Salario mensual | Horas extras | Total a pagar" << endl;
    for (size_t i = 0; i < _trabajadores.size(); ++i) {
        double salarioTotal = _trabajadores[i].calcularSalario();
        cout << _trabajadores[i].getNombre() << " " << _trabajadores[i].getApellido() << " | "
             << _trabajadores[i].getSalarioMensual() << " | "
             << salarioTotal - _trabajadores[i].getSalarioMensual() << " | "
             << salarioTotal << endl;
    }

    //
    Empleado* maxHorasExtras = &_trabajadores[0];
    double maxHoras = _trabajadores[0].calcularSalario() - _trabajadores[0].getSalarioMensual();
    for (size_t i = 1; i < _trabajadores.size(); ++i) {
        double horasExtras = _trabajadores[i].calcularSalario() - _trabajadores[i].getSalarioMensual();
        if (horasExtras > maxHoras) {
            maxHoras = horasExtras;
            maxHorasExtras = &_trabajadores[i];
        }
    }

    // Encontrar y reportar el día con mayor número de horas extras
    cout << "Día con mayor número de horas extras: Día " << diaMaxHoras << " con " << maxHorasDia << " horas" << endl;

    return 0;
}

