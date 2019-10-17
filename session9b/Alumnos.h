//
// Created by maxpo on 17/10/2019.
//

#ifndef SESSION9B_ALUMNOS_H
#define SESSION9B_ALUMNOS_H

#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

typedef float decimal;
typedef int entero;

class Alumnos {
private:
    string nombre;
    string apellido;
    entero edad;
    entero creditos;

public:
    void setNombre(string nombre);
    string getNombre();

    void setApellido(string nombre);
    string getApellido();

    void setEdad(entero edad);
    entero getEdad();

    void setCreditos(entero creditos);
    entero getCreditos();
    void imprimir();
};


#endif //SESSION9B_ALUMNOS_H
