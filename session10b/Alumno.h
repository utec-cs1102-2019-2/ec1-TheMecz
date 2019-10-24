//
// Created by maxpo on 24/10/2019.
//

#ifndef SESSION10B_ALUMNO_H
#define SESSION10B_ALUMNO_H
#include "Persona.h"



class Alumno : Persona {
private:
    string Codigo;
public:
    Alumno(string nombre, int edad, string DNI, string nacionalidad, string codigo);
    void mostrarAlumno();
};


#endif //SESSION10B_ALUMNO_H
